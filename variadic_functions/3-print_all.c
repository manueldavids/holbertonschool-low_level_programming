#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* Function prototypes */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to the character to be printed.
 */
void print_char(va_list arg)
{
    char letter = va_arg(arg, int);  /* Extract char as int */
    printf("%c", letter);  /* Print the char */
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
    int num = va_arg(arg, int);  /* Extract the int */
    printf("%d", num);  /* Print the int */
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to the float to be printed.
 */
void print_float(va_list arg)
{
    float num = va_arg(arg, double);  /* Extract float as double */
    printf("%f", num);  /* Print the float */
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to the string to be printed.
 *
 * If the string is NULL, it prints "(nil)".
 */
void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);  /* Extract the string */
    
    if (str == NULL)
    {
        printf("(nil)");  /* Print (nil) if string is NULL */
    }
    else
    {
        printf("%s", str);  /* Print the string */
    }
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Arguments of types char, int, float, or char * are supported.
 *              If the string argument is NULL, "(nil)" is printed instead.
 */
void print_all(const char * const format, ...)
{
    va_list args;  /* Declare a va_list for variable arguments */
    int i = 0;     /* Iterator for the format string */
    char *separator = "";  /* Separator between arguments, initialized as empty */

    /* Array of struct printer_t holding format specifiers and corresponding print functions */
    printer_t funcs[] = {
        {"c", print_char},    /* 'c' for char */
        {"i", print_int},     /* 'i' for int */
        {"f", print_float},   /* 'f' for float */
        {"s", print_string}   /* 's' for string */
    };

    va_start(args, format);  /* Initialize va_list for argument processing */

    /* Loop through each character in the format string */
    while (format && format[i])
    {
        int j = 0;

        /* Iterate through the function array */
        while (j < 4)
        {
            /* Check if current format character matches the one in the func array */
            if (format[i] == *(funcs[j].symbol))
            {
                printf("%s", separator);  /* Print separator if it's not the first element */
                funcs[j].print(args);  /* Call the corresponding print function */
                separator = ", ";  /* Change separator to ", " after the first argument */
                break;  /* Exit the loop once a match is found */
            }
            j++;
        }

        i++;  /* Move to the next format character */
    }

    printf("\n");  /* Print a newline after all arguments are printed */

    va_end(args);  /* Clean up the va_list */
}

