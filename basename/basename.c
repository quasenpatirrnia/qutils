#include <stdio.h>
#include <stdlib.h>
#include "basenamefuncs.h"

int main(int argc, char **argv)
{
	char *result;

	if ((argc > 3) | (argc < 2)) {
		printf("invalid usage\n");
		printf("usage: basename string [suffix]\n\n");
		printf("string: pathname to trim\n");
		printf("suffix: if string ends in suffix, trim suffix as well\n");
		return 1;
	}
	trim(argv[1], &result);
	if (argc == 3) {
		suffixtrim(&result, argv[2]);
	}
	printf("%s\n", result);
	free(result);
	return 0;
}
