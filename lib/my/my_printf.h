/*
** printf.h for printf.h in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Wed Nov 12 18:16:38 2014 stephane  charre
** Last update Fri Nov 14 20:19:33 2014 stephane  charre
*/

#ifndef PRINTF_H_
# define PRINTF_H_

int     my_types(const char *format, va_list ap, int i);
int	my_2types_bis(const char *format, va_list ap, int i);
int	my_types_smaj(const char *format, va_list ap, int i);
int	my_flags_bis(const char *format, va_list ap, int i);
int     my_flags(const char *format, va_list ap, int i);
int	my_modifiers(const char *format, va_list ap, int i);
int	my_put_nbr_base_long(unsigned long int nb, char *base);
int	my_put_nbr_long(long int nb);

#endif
