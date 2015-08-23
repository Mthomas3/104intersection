/*
** my_strlen.c for my_strlen.c in /home/charre_s/rendu/Piscine_C_J04
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Thu Oct  2 19:06:36 2014 stephane  charre
** Last update Fri Oct 10 15:02:50 2014 stephane  charre
*/

int	my_strlen(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      c++;
    }
  return (c);
}
