all:		crypt.o atbash.o rot13.o
	gcc -o crypt crypt.o atbash.o rot13.o

crypt.o:	crypt.c crypt.h
	gcc -c crypt.c

atbash.o:	./ciphers/atbash/atbash.c ./ciphers/atbash/atbash.h
	gcc -c ./ciphers/atbash/atbash.c

rot13.o:	./ciphers/rot13/rot13.c ./ciphers/rot13/rot13.h
	gcc -c ./ciphers/rot13/rot13.c

clean:
	rm -f *.o ./ciphers/*/*.o crypt
