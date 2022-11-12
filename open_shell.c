#include "shell.h"

/**
   @brief Main entry point.
   @param argc Argument count.
   @param argv Argument vector.
   @return status code
 */
int main(UNUSED int argc, UNUSED char **argv)
{
	/* Load config files, if any. */

	/* Run command loop. */
	lsh_loop();

	/* Perform any shutdown/cleanup. */

	return EXIT_SUCCESS;
}
