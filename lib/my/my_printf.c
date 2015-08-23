/*
** my_printf.c for test in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Mon Nov 10 16:36:21 2014 stephane  charre
** Last update Tue Dec  9 18:32:49 2014 stephane  charre
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_printf.h"
#include "../../include/my.h"

int	my_printf(const char *format, ...)
{
  va_list   	ap;
  int	i;

  i = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%' && format[i + 1] == '\0')
	return (1);
      if (format[i] == '%' && format[i + 1] != '\0')
	{
	  my_types(format, ap, i);
	  i = i + 2;
	}
      while (format[i] != '%' && format[i] != '\0')
	{
	  if (format[i - 1] != '#' && format[i - 1] != 'l')
	    my_putchar(format[i]);
	  else if (format[i - 2] != '%')
	    my_putchar(format[i]);
	  i = i + 1;
	}
    }
  va_end(ap);
  return (0);
}

int	my_types(const char *format, va_list ap, int i)
{
  if (format[i + 1] == '%')
    my_putchar('%');
  if (format[i + 1] == '#')
    my_flags(format, ap, i);
  if (format[i + 1] == 'l')
    my_modifiers(format, ap, i);
  if (format[i] == '%' && format[i + 1] == 'o')
    my_put_nbr_base(va_arg(ap, int), "01234567");
  else if (format[i] == '%' && format[i + 1] == 's')
    my_putstr(va_arg(ap, char *));
  else if (format[i] == '%' && format[i + 1] == 'c')
    my_putchar(va_arg(ap, int));
  else if (format[i] == '%' && format[i + 1] == 'd' || format[i + 1] == 'i')
    my_put_nbr(va_arg(ap, int));
  else if (format[i] == '%' && format[i + 1] == 'u')
    my_put_nbr(va_arg(ap, unsigned int));
  else if (format[i] == '%' && format[i + 1] == 'x')
    my_put_nbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  else if (format[i] == '%' && format[i + 1] == 'X')
    my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
  else if (format[i] == '%' && format[i + 1] == 'b')
    my_put_nbr_base(va_arg(ap, unsigned int), "01");
  my_2types_bis(format, ap, i);
}

int	my_2types_bis(const char *format, va_list ap, int i)
{
  if (format[i] == '%' && format[i + 1] == 'p')
    {
      my_putstr("0x7fff");
      my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
    }
  else if (format[i] == '%' && format[i + 1] == 'S')
    my_types_smaj(format, ap, i);
}
