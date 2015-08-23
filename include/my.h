/*
** my.h for my.h in /home/charre_s/rendu/Piscine_C_J09/include
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Oct 10 10:55:19 2014 stephane  charre
** Last update Sat Nov 29 15:06:32 2014 stephane  charre
*/

#ifndef my_H_
# define my_H_

int     my_printf(const char *format, ...);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
int	my_putstr(char *str);
int	my_getnbr(char *str);
char	*my_revstr(char *str);
int     my_types(const char *format, va_list ap, int i);
int     my_2types_bis(const char *format, va_list ap, int i);
int     my_types_smaj(const char *format, va_list ap, int i);
int     my_flags_bis(const char *format, va_list ap, int i);
int     my_flags(const char *format, va_list ap, int i);
int     my_modifiers(const char *format, va_list ap, int i);
int     my_put_nbr_base_long(unsigned long int nb, char *base);
int     my_put_nbr_long(long int nb);
int     my_put_nbr_base(unsigned int nb, char *base);
void    my_swap_str(char **s1, char **s2);
int	my_strcmp(char *s1, char *s2);

#endif
