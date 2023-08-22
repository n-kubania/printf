#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * struct conver_s - Struct conversion
 * @sym: The conversion specifier
 * @f: The function associated
 */
typedef struct conver_s
{
    char *sym;
    int (*f)(va_list);
} conver_t;

int convert_c(va_list args)
{
    char c = va_arg(args, int);
    return _putchar(c);
}

int convert_s(va_list args)
{
    char *str = va_arg(args, char *);
    int i;

    if (str == NULL)
        str = "(null)";

    for (i = 0; str[i] != '\0'; i++)
        _putchar(str[i]);

    return i;
}

/* Add more conversion functions as needed */

conver_t funct_list[] = {
    {"c", convert_c},
    {"s", convert_s},
    /* Add more conversion function pointers here */
    {NULL, NULL}
};

int parser(const char *format, conver_t funct_list[], va_list args)
{
    int i, j, r_val, printed_chars;

    printed_chars = 0;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            for (j = 0; funct_list[j].sym != NULL; j++)
            {
                if (format[i + 1] == funct_list[j].sym[0])
                {
                    r_val = funct_list[j].f(args);
                    if (r_val == -1)
                        return (-1);
                    printed_chars += r_val;
                    break;
                }
            }

            if (funct_list[j].sym == NULL && format[i + 1] != ' ')
            {
                if (format[i + 1] != '\0')
                {
                    _putchar(format[i]);
                    _putchar(format[i + 1]);
                    printed_chars += 2;
                }
                else
                    return (-1);
            }
            i = i + 1;
        }
        else
        {
            _putchar(format[i]);
            printed_chars++;
        }
    }

