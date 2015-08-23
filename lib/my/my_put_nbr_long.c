/*
** my_put_nbr_long.c for long nbr in /home/charre_s/rendu/PSU_2014_my_printf/lib/my
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Fri Nov 14 17:38:35 2014 stephane  charre
** Last update Fri Nov 14 17:41:28 2014 stephane  charre
*/

int	my_put_nbr_long(long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_putchar(48 + (nb % 10));
    }
  else
    my_putchar((nb % 10) + 48);
  if (nb = 0)
    return (0);
}
