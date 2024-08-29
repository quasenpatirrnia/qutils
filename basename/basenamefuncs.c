#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trim(char *input, char **result)
{
	int len = strlen(input);
	int i;
	for (i = strlen(input)-1; i >= 0; --i) {
		if (input[i-1] == '/') {
			break;
		}
	}
	
	if ((*result = (char *)malloc(i)) == NULL) {
		return -1;
	}
	strcpy(*result, input+i);
	return 0;
}

int suffixtrim(char **result, char *suffix) {
	int len = strlen(suffix);
	int reslen = strlen(*result);
	
	if (!strcmp((const char *)((*result) + (reslen-len)), (const char *)suffix)) {
		(*result)[reslen-len] = '\0';
		if (realloc(*result, reslen - (len-1)) == NULL) {
			return -1;
		}
	}
	return 0;
}
