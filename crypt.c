#include "crypt.h"

int main(int argc, char **argv)
{
	print_logo();

	if (argc == 1) {
		print_menu();
	}

	return 0;
}

void print_logo()
{
	printf("                          ,  \n");
	printf("                         ||  \n");
	printf(" _-_ ,._-_ '\\\\/\\\\ -_-_  =||= \n");
	printf("||    ||    || ;' || \\\\  ||  \n");
	printf("||    ||    ||/   || ||  ||  \n");
	printf("\\\\,/  \\\\,   |/    ||-'   \\\\, \n");
	printf("           (      |/         \n");
	printf("            -_-   '          \n\n");
}

void print_menu()
{
	int input;
	printf("+-------+\n");
	printf("|Ciphers|\n");
	printf("+-------+\n");

	printf("1. Atbash\n");
	printf("2. ROT13\n");

	printf("\nCipher: ");
	scanf("%d", &input);
	getchar();
	printf("\n");
	switch_menu(input);
}

void switch_menu(int input)
{
	char text[STR_LEN];
	char key[STR_LEN];
	int en_de;
	int shift;

	switch (input)
	{
		case 1: {
			printf("ATBASH\n");
			printf("Input Text: ");
			read_line(text);
			atbash(text);
			printf("Output Text: %s\n", text);
		} break;

		case 2: {
			printf("ROT13\n");
			en_de = option();
			printf("Input Text: ");
			read_line(text);
			rot13(text, en_de);
			printf("Output Text: %s\n", text);
		} break;

		default: {
			printf("Invalid menu option!\n");
			exit(1);
		} break;
	}
}

void switch_params(int argc, char **argv)
{

}

int option()
{
	int input;
	printf("1. Encrypt\n2. Decrypt\nOption: ");
	scanf("%d", &input);
	getchar();
	printf("\n");
	return input;
}

void read_line(char *text)
{
	int i = 0;
	while ((text[i++] = getchar()) != '\n');
	text[i - 1] = '\0';
}
