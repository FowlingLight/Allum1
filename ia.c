/*
** ia.c for ia in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb  4 14:42:01 2013 benjamin horiot
** Last update Mon Feb 11 17:26:27 2013 benjamin horiot
*/

#include "my.h"

int		find_line(t_allum *s)
{
  int		a;

  a = 0;
  while (s->allum[a] == 0)
    a += 1;
  return (a);
}

int		get_nbr_line(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (s->allum[a] != -1)
    {
      if (s->allum[a])
	b += 1;
      a += 1;
    }
  return (b);
}

int		check_one(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (s->allum[a] != -1)
    {
      if (s->allum[a] == 1)
	b += 1;
      a += 1;
    }
  return (b);
}

void		ia(t_allum *s)
{
  if (get_nbr_line(s) == 2 && check_one(s) == 1)
    s->allum[get_full_line(s)] = 0;
  else if (get_nbr_line(s) == 1)
    {
      if (check_one(s) == 1)
	s->allum[find_line(s)] = 0;
      else
	s->allum[get_full_line(s)] = 1;
    }
  else if (s->allum[s->line - 1] == 1)
    s->allum[s->line - 1] = 0;
  else if (s->allum[s->line - 1] != 1 && s->allum[s->line - 1] > 0)
    s->allum[s->line - 1] -= s->nbr;
  else
    s->allum[find_line(s)] = 0;
  check_ia(s);
}

void		check_ia(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  if (s->allum[s->line - 1] < 0)
    s->allum[s->line - 1] = 0;
  while (s->allum[a] != -1)
    b += s->allum[a++];
  if (b == 0)
    {
      my_printf("%s", s->clean);
      aff_win(s);
      exit(0);
    }
}
