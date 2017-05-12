CC=gcc
P=test
LDLIBS=-lm
OPTS=-g -Wall

all:
	$(CC) $(OPTS) $(LDLIBS) $(P).c -o $(P)

clean:
	rm -rf $(P)*
