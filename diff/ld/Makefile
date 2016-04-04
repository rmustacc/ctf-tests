#
# Test a bug where different sized structures weren't diffing properly
#

CTFDIFF = ctfdiff
CFLAGS = -g -Werror
CC = gcc
RM = rm -f 

all: a.ctf b.ctf

%.ctf: %.o
	$(CTFCONVERT)-altexec -L VERSION -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clobber:
	$(RM) -f *.o *.ctf
