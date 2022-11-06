#include "shell.h"

/**
 * main - Entry point to the program
 *
 * Return: Success(0)
 */
int main(void)
{
	size_t n = BUFFER_SIZE;
	char *buff = malloc(sizeof(char) * n);
	int status;

	if (buff == NULL)
		printf("Failed to allocate memory!");

	do {
		printf("#: ");
		status = getline(&buff, &n, stdin);
	} while (status != EOF);

	printf("\n");

	free(buff);

	return (0);
}
