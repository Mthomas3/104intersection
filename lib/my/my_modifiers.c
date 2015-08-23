/*
** my_modifiers.c for my_modifiers in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Nov 14 15:31:53 2014 stephane  charre
** Last update Tue Dec  9 18:32:33 2014 stephane  charre
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_printf.h"
#include "../../include/my.h"

int     my_modifiers(const char *format, va_list ap, int i)
{
  if (format[i + 2] == 'd')
    my_put_nbr_long(va_arg(ap, long int));
  if (format[i + 2] == 'i')
    my_put_nbr_long(va_arg(ap, long int));
  if (format[i + 2] == 'u')
    my_put_nbr_long(va_arg(ap, unsigned long int));
  if (format[i + 2] == 'o')
    my_put_nbr_base_long(va_arg(ap, unsigned long int), "01234567");
  if (format[i + 2] == 'x')
    my_put_nbr_base_long(va_arg(ap, unsigned long int), "0123456789abcdef");
  if (format[i + 2] == 'X')
    my_put_nbr_base_long(va_arg(ap, unsigned long int), "0123456789ABCDEF");
  if (format[i + 2] == 'b')
    my_put_nbr_base_long(va_arg(ap, unsigned long int), "01");
}
