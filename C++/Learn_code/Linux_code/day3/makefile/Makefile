SRCS:=$(wildcard *.c)
OBJS:=$(patsubst %.c,%.o,$(SRCS))
ELF:=main
CC:=gcc
CFLAGS:=-g -Wall -O2
$(ELF):$(OBJS)
	gcc $^ -o $@
.PYONY:clean
clean:
	rm -rf $(OBJS) $(ELF)
