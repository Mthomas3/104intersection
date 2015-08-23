/*
** my_putstr.c for my_putstr in /home/charre_s/rendu/Piscine_C_J04
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Thu Oct  2 17:13:37 2014 stephane  charre
** Last update Fri Oct  3 09:54:59 2014 stephane  charre
*/

int	my_putstr(char *str)
{
  while (*str  != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
