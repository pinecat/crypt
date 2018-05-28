#ifndef CRYPT_H
#define CRYPT_H

/* imports */
#include <stdio.h>
#include <stdlib.h>

#include "./ciphers/atbash/atbash.h"
#include "./ciphers/rot13/rot13.h"

/* constants */
#define STR_LEN 8192

/* prototypes */
void print_logo();
void print_menu();
void switch_menu(int input);
void switch_params(int argc, char **argv);
int option();
void read_line(char *text);

#endif
