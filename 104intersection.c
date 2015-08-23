/*
** 104intersection.c for 104 in /home/charre_s/rendu/104intersection
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Sat Dec 27 14:22:23 2014 stephane  charre
** Last update Sun Aug 23 10:24:16 2015 Thomas Martins
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "include/my.h"

int		my_intersection(int ac, char **av, t_ints *ints)
{
  my_straightline(ac, av, ints);
  if (my_getnbr(av[1]) == 1)
    my_sphere(ac, av, ints);
  else if (my_getnbr(av[1]) == 2)
    my_cylinder(ac, av, ints);
  else if (my_getnbr(av[1]) == 3)
    my_cone(ac, av, ints);
  if (my_getnbr(av[1]) != 1 && my_getnbr(av[1]) != 2 && my_getnbr(av[1]) != 3)
    check_option();
  return (0);
}

int	       	main(int ac, char **av)
{
  t_ints	*ints;
  t_line	line;
  t_vd		vd;
  t_eq		eq;

  if ((ints = malloc(sizeof(t_ints))) == NULL)
    return (1);
  if (ac > 9)
    arg_sup(ac);
  if (ac < 9)
    arg_low();
   if (my_getnbr(av[5]) == 0 && my_getnbr(av[6]) == 0 && my_getnbr(av[7]) == 0)
     check_vec();
  if (my_getnbr(av[8]) <= 0)
      my_check();
  check_my_arguments(av);
  my_intersection(ac, av, ints);
  free(ints);
  return (0);
}
