/*
** check_error.c for  in /home/mart_4/rendu/104intersection
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Mon Dec 29 13:33:31 2014 Thomas Martins
** Last update Fri Jan  2 13:46:02 2015 stephane  charre
*/

#include <stdio.h>
#include "struct.h"
#include <stdlib.h>

void    arg_sup(int ac)
{
  printf("Too many arguments\n");
  exit(1);
}

void	arg_low(int ac)
{
  printf("Insufisant arguments\n");
  exit(1);
}

void    check_vec(void)
{
  printf("Vector incorrect\n");
  exit(1);
}

void	my_check(void)
{
  printf("Angle incorrect\n");
  exit(1);
}

void	check_option(void)
{
  printf("This option doesn't exist.\n");
  exit(1);
}

void	just_exit(void)
{
  printf("Arguments must be numbers\n");
  exit(1);
}

int	check_my_arguments(char **av)
{
  int	a;
  int	b;

  a = 2;
  while (av[a] != NULL)
    {
      b = number(av[a]);
      a++;
    }
}

int	number(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] == '-')
	a++;
      if (str[a] < '0' || str[a] > '9')
	just_exit();
      a++;
    }
}
