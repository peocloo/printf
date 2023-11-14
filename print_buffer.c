#include "main.h"
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - custom printf function
 * @format: arugment for formats to be printed
 * 
 * Return: integer
*/
int _printf(const char *format, ...)
{
    int i, j = 0, k = 0;
    int flags, width, precision, size, buff_ind = 0;
    va_list args;
    char buffer[BUFF_SIZE];

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE)
                print_buffer(buffer, &buff_ind);
            k++;
        }
        else
        {
            print_buffer(buffer, &buff_ind);
            flags = get_flags(format, &i);
            width = get_width(format, &i, args);
            precision = get_precision(format, &i, args);
            size = get_size(format, &i);
            ++i;
            j = handle_print(format, &i, args, buffer,
                             flags, width, precision, size);
            if (j == -1)
                return (-1);
            k += j;
        }
    }

    print_buffer(buffer, &buff_ind);

    va_end(args);

    return (k);
}

/**
 * print_buffer - print buffer function
 * @buffer: array of type char
 * @buff_ind: pointer argument of type int
*/
void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
        write(1, &buffer[0], *buff_ind);

    *buff_ind = 0;
}