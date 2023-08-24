#include "monty.h"
/**
 * get_opcode - function that reads file 
 * @filename: name of the file to be read
 *
 * Return my_buf on succes
 */
char * get_opcode(char *filename)
{
	FILE *file = fopen(filename, "r");

	char *my_buf = NULL;
	size_t size = 0;
	ssize_t get = 0;

	if (file == NULL)
	{
		printf("USAGE: %s\n", filename);
		return (NULL);
	}

	get = getline(&my_buf, &size, file);
	fclose(file);

	if (get == -1)
	{
		printf("Error: Can't open %s\n", filename);
		free(my_buf);
		return (NULL);
	}
	if (get > 0 && my_buf[get - 1] == '\n')
		my_buf[get-1] = '\0';

	return (my_buf);
}
