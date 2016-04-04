#
# CTF Tests
#

CTFDIFF = ctfdiff
FILES = \
	array.o \
	bare1.o \
	bitfields.o \
	dedup.o \
	empty.o \
	enum.o \
	extern.o \
	file.o \
	int.o \
	float.o \
	func.o \
	fptr.o \
	packstruct.o \
	starr.o \
	static.o \
	stack.o \
	siginfo.o \
	struct.o \
	typedef.o \
	union.o \
	union-bits.o \
	vla.o \
	weak.o

CFLAGS = -g -Werror
CTFFILES = $(FILES:%.o=%.ctf) $(FILES:%.o=%.ctf.orig)
DIFFFILES = $(FILES:%.o=%.diff)
DIFFFLAGS = -t -o -f
CC = gcc

stack.o := CFLAGS += -m64

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.ctf: %.o
	$(CTFCONVERT)-altexec -L VERSION -o $@ $<

%.ctf.orig: %.o
	$(CTFCONVERT) -L VERSION -o $@ $<

%.diff: %.ctf %.ctf.orig
	$(CTFDIFF) $(DIFFFLAGS) $$(basename $@ .diff).ctf $$(basename $@ .diff).ctf.orig


all: $(CTFFILES)

diff: $(DIFFFILES)

clobber:
	rm -f $(FILES) $(CTFFILES)
