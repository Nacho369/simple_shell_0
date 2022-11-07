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
	int status, comp, i;

	if (buff == NULL)
		printf("Failed to allocate memory!");

	do {
		printf("#: ");
		status = getline(&buff, &n, stdin);

		comp = _strcmp(buff, "ls");
		if (comp == 0)
			printf("Matches");
	} while (status != EOF);

	printf("\n");

	free(buff);

	return (0);
}
