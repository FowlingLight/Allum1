/*
** pvp.c for pvp in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Wed Feb  6 17:45:21 2013 benjamin horiot
** Last update Mon Feb 11 17:26:34 2013 benjamin horiot
*/

#include "my.h"

void		check_player_pvp(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (s->allum[a] != -1)
    b += s->allum[a++];
  if (b == 0)
    {
      if (s->player == 1)
	my_printf("%sPlayer 2 win !\n", s->clean);
      else
	my_printf("%sPlayer 1 win !\n", s->clean);
      exit(0);
    }
}
