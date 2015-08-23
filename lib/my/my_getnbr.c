/*
** my_getnbr.c for getnbr in /home/charre_s/rendu/Piscine_C_J07/FILE .c
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Tue Oct 21 14:51:22 2014 stephane  charre
** Last update Tue Oct 21 14:54:29 2014 stephane  charre
*/

int     my_getnbr(char *str)
{
  int   i;
  int   sign;
  long  nb;

  sign = 1;
  i = 0;
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
        sign = sign * -1;
      i++;
    }
  str = str + i;
  nb = 0;
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10;
      nb = nb - (str[i] - '0');
      i++;
      if (nb >= 2147483647 || nb <= -2147483648)
	return (0);
    }
  return (nb * sign * -1);
}
