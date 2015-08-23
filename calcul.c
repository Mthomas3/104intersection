/*
** cal_thomas.c for  in /home/mart_4/rendu/104intersection
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Tue Dec 30 11:09:09 2014 Thomas Martins
** Last update Fri Jan  2 13:28:54 2015 stephane  charre
*/

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void	my_sphere(int ac, char **av, t_ints *ints)
{
  printf("sphère de rayon %s\n", av[8]);
  printf("droite passant par le point (%s,%s,%s), de vecteur directeur (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
  ints->eq.a = pow(my_getnbr(av[5]), 2) + pow(my_getnbr(av[6]), 2) + pow(my_getnbr(av[7]), 2);
  ints->eq.b = (2 * my_getnbr(av[2]) * my_getnbr(av[5])) + (2 * my_getnbr(av[3]) * my_getnbr(av[6])) + (2 * my_getnbr(av[4]) * my_getnbr(av[7]));
  ints->eq.c = (pow(my_getnbr(av[2]), 2) + pow(my_getnbr(av[3]), 2) + pow(my_getnbr(av[4]), 2)) - pow(my_getnbr(av[8]), 2);
  ints->eq.delta = (ints->eq.b * ints->eq.b) - (4 * ints->eq.a * ints->eq.c);
  my_equation_one(ints, av);
}

void    my_last_equation(t_ints *ints, char **av, int check)
{
  if (check == 2)
    {
      ints->vd.x_one = (-(ints->eq.b) - sqrt(ints->eq.delta)) / (2 * ints->eq.a);
      ints->vd.x_two = (-(ints->eq.b) + sqrt(ints->eq.delta)) / (2 * ints->eq.a);
    }
  else if (check == 1)
    ints->vd.x_one = (-(ints->eq.b) - sqrt(ints->eq.delta)) / (2 * ints->eq.a);
  if (check == 2 || check == 1)
    {
      ints->eq.x1 = my_getnbr(av[2]) + ints->vd.x_one * my_getnbr(av[5]);
      ints->eq.y1 = my_getnbr(av[3]) + ints->vd.x_one * my_getnbr(av[6]);
      ints->eq.z1 = my_getnbr(av[4]) + ints->vd.x_one * my_getnbr(av[7]);
    }
  if (check == 2)
    {
      ints->eq.x2 = my_getnbr(av[2]) + ints->vd.x_two * my_getnbr(av[5]);
      ints->eq.y2 = my_getnbr(av[3]) + ints->vd.x_two * my_getnbr(av[6]);
      ints->eq.z2 = my_getnbr(av[4]) + ints->vd.x_two * my_getnbr(av[7]);
    }
  if (check == 1 || check == 2)
    printf("Point 1 : (%.3f, %.3f, %.3f)\n", ints->eq.x1, ints->eq.y1, ints->eq.z1);
  if (check == 2)
    printf("Point 2 : (%.3f, %.3f, %.3f)\n", ints->eq.x2, ints->eq.y2, ints->eq.z2);
}

void    my_equation_one(t_ints *ints, char **av)
{
  int	check;

  check = 0;
  if (ints->eq.delta < 0)
    printf("nombre de points d'intersection : 0\n");
  else if (ints->eq.delta == 0)
    {
      check = 1;
      printf("nombre de points d'intersections : 1\n");
      my_last_equation(ints, av, check);
    }
  else if (ints->eq.delta > 0)
    {
      check = 2;
      printf("nombre de points d'intersecton : 2\n");
      my_last_equation(ints, av, check);
    }
}

void	my_cylinder(int ac, char **av, t_ints *ints)
{
  {
    printf("Cylindre de rayon %s\n", av[8]);
    printf("droite passant par le point (%s,%s,%s), de vecteur directeur (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
    ints->eq.a = pow(my_getnbr(av[5]), 2) + pow(my_getnbr(av[6]), 2);
    ints->eq.b = (2 * my_getnbr(av[2]) * my_getnbr(av[5])) + (2 * my_getnbr(av[3]) * my_getnbr(av[6]));
    ints->eq.c = (pow(my_getnbr(av[2]), 2) + pow(my_getnbr(av[3]), 2) - pow(my_getnbr(av[8]), 2));
    ints->eq.delta = (ints->eq.b * ints->eq.b) - (4 * ints->eq.a * ints->eq.c);
    my_equation_one(ints, av);
  }
}

void	my_cone(int ac, char **av, t_ints *ints)
{
  ints->eq.angle = (my_getnbr(av[8]) * M_PI) / 180;
  ints->eq.angle = tan(ints->eq.angle) * tan(ints->eq.angle);
  printf("cône d'angle %s\n", av[8]);
  printf("droite passant par le point (%s,%s,%s), de vecteur directeur (%s,%s,%s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
  ints->eq.a = pow(my_getnbr(av[5]), 2) + pow(my_getnbr(av[6]), 2) - (pow(my_getnbr(av[7]), 2));
  ints->eq.a = ints->eq.a / (tan(ints->eq.angle));
  ints->eq.b = (2 * my_getnbr(av[2]) * my_getnbr(av[5])) + (2 * my_getnbr(av[3]) * my_getnbr(av[6])) - (2 * my_getnbr(av[4]) * my_getnbr(av[7]));
  ints->eq.b = ints->eq.b / (tan(ints->eq.angle));
  ints->eq.c = pow(my_getnbr(av[2]), 2) + pow(my_getnbr(av[3]), 2) - pow(my_getnbr(av[4]), 2);
  ints->eq.c = ints->eq.c / (tan(ints->eq.angle));
  ints->eq.delta = (ints->eq.b * ints->eq.b) - (4 * ints->eq.a * ints->eq.c);
  my_equation_one(ints, av);
}

void	my_straightline(int ac, char **av, t_ints *ints)
{
  ints->line.a = my_getnbr(av[2]);
  ints->line.b = my_getnbr(av[3]);
  ints->line.c = my_getnbr(av[4]);
}
