#include "monty.h"
/**
 * han_token - Tokenizes a string into an array of strings
 *
 * @cmd : The input string to be tokenized
 *
 * Return : char pointers
 */

char **han_token(char *cmd)
{
	char **arr = NULL;
	size_t len = 0;
	char *tok = NULL;
	int i = 0;

	len = _strlen(cmd);
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		exit(0);

	tok = strtok(cmd, " \n");
	while (tok != NULL)
	{
		arr[i] = tok;
		tok = strtok(NULL, " \n");
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
