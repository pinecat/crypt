#include "rot13.h"

void rot13(char *text, int en_de)
{
    switch (en_de)
    {
        case 1: rot13_encrypt(text); break;
        case 2: rot13_decrypt(text); break;
        default: printf("Invalid option!\n"); exit(1);
    }
}

void rot13_encrypt(char *text)
{
    int i = 0;
    char c;
    while ((c = text[i]) != '\0') {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = (((c - 'A') + 13) % 26) + 'A';
            } else {
                c = (((c - 'a') + 13) % 26) + 'a';
            }
            text[i] = c;
        }
        i++;
    }
}

void rot13_decrypt(char *text)
{
    int i = 0;
    char c;
    while ((c = text[i]) != '\0') {
        if (isalpha(c)) {
            if (isupper(c)) {
                c -= 13;
                if (c < 'A') c = 'Z' - ('A' - c) + 1;
            } else {
                c -= 13;
                if (c < 'a') c = 'z' - ('a' - c) + 1;
            }
            text[i] = c;
        }
        i++;
    }
}
