#ifndef ROT13_H
#define ROT13_H

/* imports */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* prototypes */
void rot13(char *text, int en_de);
void rot13_encrypt(char *text);
void rot13_decrypt(char *text);

#endif
