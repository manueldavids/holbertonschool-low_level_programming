#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point, tests the `create_file` function by attempting 
 *        to create a file and write a string into it.
 * @ac: Argument count.
 * @av: Argument vector containing program name, file name, and text.
 *
 * Return: Always 0 (Success).
 */
int main(int ac, char **av)
{
    int res; /* Variable to store the result of `create_file` */

    /* Check if the correct number of arguments is provided */
    if (ac != 3)
    {
        /* Print usage message to the standard error output */
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1); /* Exit with status 1 for incorrect usage */
    }

    /* Call `create_file` with the specified file name and text content */
    res = create_file(av[1], av[2]);

    /* Print the result of the function call */
    printf("-> %i)\n", res);

    return (0); /* Exit successfully */
}

