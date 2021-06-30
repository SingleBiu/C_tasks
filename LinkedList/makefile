TARGET := main
CC:= gcc

CSRCS:=$(wildcard *.c)

OBJS:= $(patsubst %.c, %.o, $(CSRCS))

$(TARGET):$(OBJS)
		$(CC) $^$(LIBS) -o $@
%.o:%.c
		$(CC) -c $< $(INC) -o $@

clean:
		rm -rf $(OBJS)
		rm -rf $(TARGET)