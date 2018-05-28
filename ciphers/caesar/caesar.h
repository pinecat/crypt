#ifndef CAESAR_H
#define CAESAR_H

/* imports */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* prototypes */
void caesar(char *text, int shift, int en_de);
void caesar_encrypt(char *text, int shift);
void caesar_decrypt(char *text, int shift);

#endif
