int main(int argc, char *argv[])
{
	char *filename = NULL;
	char *opcode = NULL;
	char **tokens = NULL;

	if (argc != 2)
	{
		printf("USAGE: %s file\n", argv[0]);
		return EXIT_FAILURE;
	}
	filename = argc[1];
	opcode = get_opcode(filename);
	if (opcode == NULL)
	{
		return EXIT_FAILURE;
	}
	tokens = han_token(opcode);
	if (tokens == NULL)
	{
		free(opcode);
		return EXIT_FAILURE;
	}
}
