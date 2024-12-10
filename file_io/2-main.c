#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point, tests the `append_text_to_file` function by attempting 
 *        to append text to an existing file.
 * @ac: Argument count.
 * @av: Argument vector containing program name, file name, and text.
 *
 * Return: Always 0 (Success).
 */
int main(int ac, char **av)
{
    int res; /* Variable to store the result of `append_text_to_file` */

    /* Check if the correct number of arguments is provided */
    if (ac != 3)
    {
        /* Print usage message to the standard error output */
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1); /* Exit with status 1 for incorrect usage */
    }

    /* Call `append_text_to_file` with the specified file name and text */
    res = append_text_to_file(av[1], av[2]);

    /* Print the result of the function call */
    printf("-> %i\n", res);

    return (0); /* Exit successfully */
}

