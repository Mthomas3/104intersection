/*
** struct.h for struct in /home/charre_s/rendu/104intersection
** 
** Made by stephane  charre
** Login   <charre_s@epitech.net>
** 
** Started on  Mon Dec 22 14:20:44 2014 stephane  charre
** Last update Fri Jan  2 13:47:24 2015 stephane  charre
*/

#ifndef STRUCT_H_
# define STRUCT_H_
# define POW(x) (x * x)

typedef struct		s_line
{
  float       		a;
  float			b;
  float			c;
}			t_line;

typedef struct		s_vd
{
  float			x_one;
  float			x_two;
}			t_vd;

typedef struct		s_eq
{
  float			angle;
  double       		delta;
  int			null;
  int			a;
  int			b;
  int			c;
  double		x1;
  double		y1;
  double		z1;
  double		x2;
  double		y2;
  double		z2;
}			t_eq;

typedef struct          s_ints
{
  t_line		line;
  t_vd			vd;
  t_eq			eq;
  double                x;
  double                y;
  double                z;
  double                vars1;
  double                vars2;
  int                   ints_points;
  int                   SphereRayon;
  int                   CylindreRayon;
  int                   ConeAngle;
}			t_ints;

void			my_straightline(int ac, char **av, t_ints *ints);
void			my_vd(int ac, char **av, t_ints *ints);
int			my_2ndEq(t_ints *ints);
int			my_2ndEqBis(t_ints *ints, double delta);
void			my_ParamEq(int ac, char **av, t_ints *ints);
void			my_sphere(int ac, char **av, t_ints *ints);
int			my_intersection(int ac, char **av, t_ints *ints);
int			main(int ac, char **av);
void			my_equation_one(t_ints *ints, char **av);

#endif
