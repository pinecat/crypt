#include "atbash.h"

void atbash(char *text)
{
    int i = 0;
    char c;
    while ((c = text[i]) != '\0') {
        if (isalpha(c)) {
            char new;
            if (isupper(c)) {
                new = (25 - (c - 'A')) + 'A';
            } else {
                new = (25 - (c - 'a')) + 'a';
            }
            text[i] = new;
        }
        i++;
    }
}
