#include "caesar.h"

void caesar(char *text, int shift, int en_de)
{
    switch (en_de)
    {
        case 1: caesar_encrypt(text, shift); break;
        case 2: caesar_decrypt(text, shift); break;
        default: printf("Invalid option!\n"); exit(1);
    }
}

void caesar_encrypt(char *text, int shift)
{
    int i = 0;
    char c;
    while ((c = text[i]) != '\0') {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = (((c - 'A') + shift) % 26) + 'A';
            } else {
                c = (((c - 'a') + shift) % 26) + 'a';
            }
            text[i] = c;
        }
        i++;
    }
}

void caesar_decrypt(char *text, int shift)
{
    int i = 0;
    char c;
    while ((c = text[i]) != '\0') {
        if (isalpha(c)) {
            if (isupper(c)) {
                c -= shift;
                if (c < 'A') c = 'Z' - ('A' - c) + 1;
            } else {
                c -= shift;
                if (c < 'a') c = 'z' - ('a' - c) + 1;
            }
            text[i] = c;
        }
        i++;
    }
}
