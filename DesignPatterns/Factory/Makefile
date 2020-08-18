SRCS:= $(wildcard *cc)
OBJS:= $(patsubst %.cc,%.o,$(SRCS))
ELF:= main
CC:= g++
CFLAGS:= -g
$(ELF):$(OBJS)
	$(CC) $^ -o $@
.PYONY:clean
clean:
	rm -rf $(OBJS) $(ELF)
