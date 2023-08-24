int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("USAGE: %s file\n", argv[0]);
		return EXIT_FAILURE;
	}
	char *filename = argc[1];
	char *opcode = get_opcode(filename);
	if (opcode == NULL)
	{
		return EXIT_FAILURE;
	}
	char **tokens = han_token(opcode);
	if (tokens == NULL)
	{
		free(opcode);
		return EXIT_FAILURE;
	}
}
