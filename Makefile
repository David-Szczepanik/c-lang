# Makefile .c -> .out
CC = gcc
CFLAGS = -Wall -W

SRCS := $(wildcard *.c)

# Generate names of corresponding output files
EXECS := $(SRCS:.c=.out)

all: $(EXECS)

# Compile each .c file into .out
%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.out

.PHONY: all clean
