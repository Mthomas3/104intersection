/*
** my_put_nbr.c for put nbe in /home/charre_s/rendu/Piscine_C_J03
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Mon Oct 20 15:10:49 2014 stephane  charre
** Last update Fri Nov 14 17:39:17 2014 stephane  charre
*/

int	my_put_nbr(int nb)
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
  if (nb == 0)
    return (0);
}
