/*
** my_strcpy.c for my_strcpy in /home/charre_s/rendu/Piscine_C_J06
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Mon Oct  6 10:57:36 2014 stephane  charre
** Last update Sun Nov 16 14:46:52 2014 stephane  charre
*/

int	count(char *str)
{
  int	nbmax;

  nbmax = 0;
  while (str[nbmax] != '\0')
    {
      nbmax = nbmax + 1;
    }
  return (nbmax);
}

char    *my_revstr(char *str)
{
  int	i;
  int	nbmax;
  int	div;
  int	tmp;

  nbmax = count(str);
  div = 0;
  div = nbmax / 2;
  i = 0;
  tmp = 0;
  while (div > 0)
    {
      tmp = str[i];
      str[i] = str[nbmax - 1];
      str[nbmax - 1] = tmp;
      i = i + 1;
      nbmax = nbmax - 1;
      div = div - 1;
    }
}
