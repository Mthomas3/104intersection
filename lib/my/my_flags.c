/*
** my_flags.c for modifiers in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Nov 14 15:25:17 2014 stephane  charre
** Last update Tue Dec  9 18:31:37 2014 stephane  charre
*/

#include <stdarg.h>
#include <stdio.h>
#include "printf.h"
#include "../../include/my.h"

int     my_flags(const char *format, va_list ap, int i)
{
  if (format[i + 2] == 'x')
    {
      my_putstr("0x");
      my_put_nbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
    }
  else if (format[i + 2] == 'X')
    {
      my_putstr("0X");
      my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
    }
  else if (format[i + 2] == 'o')
    {
      my_putstr("0");
      my_put_nbr_base(va_arg(ap, int), "01234567");
    }
  else if (format[i + 2] == 's')
    my_putstr(va_arg(ap, char *));
  else if (format[i + 2] == 'd' || format[i + 2] == 'i')
    my_put_nbr(va_arg(ap, int));
  else if (format[i + 2] == 'b')
    my_put_nbr_base(va_arg(ap, unsigned int), "01");
  else if (format[i + 2] == 'u')
    my_put_nbr(va_arg(ap, unsigned int));
  my_types_bis(format, ap, i);
}

int     my_types_bis(const char *format, va_list ap, int i)
{
  if (format[i + 2] == 'c')
    my_putchar(va_arg(ap, int));
  else if (format[i + 2] == 'S')
    my_types_smaj(format, ap, i);
  else if (format[i + 2] == 'p')
    {
      my_putstr("0x7fff");
      my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
    }
}
