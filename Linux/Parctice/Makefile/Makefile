SRCS:= $(wildcard *c)
OBJS:= $(patsubst %.c,%.o,$(SRCS))
ELF:= main
CC:= gcc
CFLAGS:= -g
$(ELF):$(OBJS)
	$(CC) $^ -o $@
.PYONY:clean
clean:
	rm -rf $(OBJS) $(ELF)
