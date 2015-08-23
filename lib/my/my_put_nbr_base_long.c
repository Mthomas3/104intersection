/*
** my_put_nbr_base_long.c for long in /home/charre_s/rendu/PSU_2014_my_printf
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Nov 14 17:27:15 2014 stephane  charre
** Last update Fri Nov 14 17:35:36 2014 stephane  charre
*/

int	my_put_nbr_base_long(unsigned long int nb, char *base)
{
  unsigned long int	start;
  unsigned long int	end;
  unsigned long int	len;

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
