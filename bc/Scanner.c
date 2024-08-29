typedef struct {
	int pos;
	char *string;
	char *curr;
} Scanner;

void * next(void * scanner)
{
	scanner->curr = scanner->string + (++(scanner->pos)]);
	return scanner->curr;
}

void * peek(void * scanner)
{
	return scanner->string + (scanner->pos);
}
