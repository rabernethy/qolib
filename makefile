test : test.c qolib.o qlist.o
	gcc -std=c11 -g -o test test.c qolib.o qlist.o -I.

qolib.o : qolib.c qolib.h
	gcc -std=c11 -c qolib.c

qlist.o : qlist.c qlist.h qolib.h
	gcc -std=c11 -c qlist.c

qonet.o : qonet.c qonet.h
	gcc -std=c11 -c qonet.c

.PHONY : clean
clean :
	-rm test *.o
