/*
** my_put_nbr_base.c for nbr base in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Sun Nov 16 18:04:09 2014 stephane  charre
** Last update Sun Nov 16 18:04:14 2014 stephane  charre
*/

int     my_put_nbr_base(unsigned int nb, char *base)
{
  int   start;
  int   end;
  int   len;

  len = my_strlen(base);
  end = nb % len;
  start = (nb - end) / len;
  if (start != 0)
    {
      my_put_nbr_base(start, base);
    }
  my_putchar(base[end]);
  return (0);
}
