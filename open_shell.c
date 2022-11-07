#include "shell.h"

/**
 * main - Entry point to the program
 *
 * Return: Success(0)
 */
int main(int ac UNUSED, char *av[] UNUSED)
{
	size_t n = BUFFER_SIZE;
	char *buff = malloc(sizeof(char) * n);
	int status;
	char *cmd = "ls";

	if (buff == NULL)
		printf("Failed to allocate memory!\n");

	do {
		printf("#: ");
		status = getline(&buff, &n, stdin);

		if (_strcmp(buff, cmd))
			printf("Matches\n");
		else
			printf("Invalid\n");
	} while (status != EOF);

	printf("\n");

	free(buff);

	return (0);
}
