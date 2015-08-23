/*
** types_smaj.c for smaj in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Nov 14 18:32:31 2014 stephane  charre
** Last update Tue Dec  9 18:33:07 2014 stephane  charre
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_printf.h"
#include "../../include/my.h"

int     my_types_smaj(const char *format, va_list ap, int i)
{
  char  *str;
  int   j;

  j = 0;
  str = va_arg(ap, char *);
  while (str[j] != '\0')
    {
      while (str[j] < 32 || str[j] >= 127)
	{
	  my_putchar('\\');
	  if (str[j] < 10)
	    my_putstr("00");
	  if (str[j] >= 10 && str[j] < 100)
	    my_putchar('0');
	  my_put_nbr_base(str[j], "01234567");
	  j++;
	}
      my_putchar(str[j]);
      j++;
    }
}
