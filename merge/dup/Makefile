#
# Test a bug where if we have two different structs in an object file
# with different names that we don't end up merging them correctly.
#

CTFCONVERT = ctfconvert
CVTFLAGS = -L VERSION 
CTFMERGE = ctfmerge
MRGFLAGS = -j1 -t -f -L VERSION
CFLAGS = -g -Werror
CC = gcc
RM = rm -f 

PROG = test
CONVOBJS = a.ctf b.ctf c.ctf
OBJS = $(CONVOBJS:%.ctf=%.o)

$(PROG): $(CONVOBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)
	$(CTFMERGE) $(MRGFLAGS) -o $@ $(CONVOBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.ctf: %.o
	$(CTFCONVERT)-altexec $(CVTFLAGS) -o $@ $<

clobber:
	$(RM) $(PROG) $(CONVOBJS) $(OBJS)
