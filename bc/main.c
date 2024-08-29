#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "Scanner.h"

int main(int argc, char **argv)
{
	char *c = readline("enter string, to have it repeated in a convoluted, gross way ");
	Scanner *s = malloc(sizeof(Scanner));
	initscanner((void *)s);
	while (
