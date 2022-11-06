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
	int status, i;

	char *ch_cmd = {"ls", "cd"};

	if (buff == NULL)
		printf("Failed to allocate memory!");

	do {
		printf("#: ");
		status = getline(&buff, &n, stdin);

		for (i = 0; i < 2; i++)
		{
			if (ch_cmd[i] != buff)
				printf("./shell: No such file or directory");
		}
	} while (status != EOF);

	free(buff);

	return (0);
}
