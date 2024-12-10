#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point, tests the `read_textfile` function by reading 
 *        and printing the contents of a file.
 * @ac: Argument count.
 * @av: Argument vector containing program name and file name.
 *
 * Return: Always 0 (Success).
 */
int main(int ac, char **av)
{
    ssize_t n; /* Variable to store the number of characters read and printed */

    /* Check if the correct number of arguments is provided */
    if (ac != 2)
    {
        /* Print usage message to the standard error output */
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1); /* Exit with status 1 for incorrect usage */
    }

    /* Call `read_textfile` with the specified file name and buffer size 114 */
    n = read_textfile(av[1], 114);
    /* Print the number of characters read and printed */
    printf("\n(printed chars: %li)\n", n);

    /* Call `read_textfile` again with a buffer size of 1024 */
    n = read_textfile(av[1], 1024);
    /* Print the number of characters read and printed */
    printf("\n(printed chars: %li)\n", n);

    return (0); /* Exit successfully */
}

