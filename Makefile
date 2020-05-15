$(CC):=gcc

all:
	$(CC) -Wall -g -o infiniteArray.out infiniteArray.c

.PHONY:clean
clean:
	rm infiniteArray.out

