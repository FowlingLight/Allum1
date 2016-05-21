/*
** allum.c for allum in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb  4 10:08:07 2013 benjamin horiot
** Last update Mon Feb 11 17:34:32 2013 benjamin horiot
*/

#include "my.h"

void		aff_allum(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  my_printf("%s", tgoto(s->clean, 0, 0));
  while (a < s->nbr_lines)
    {
      my_printf("%d\t", a + 1);
      s->space = (s->nbr_allum / 2) - (s->allum[a] / 2);
      b = 0;
      while (b < s->space)
	{
	  my_putchar(' ');
	  b += 1;
	}
      b = 0;
      while (b < s->allum[a])
	{
	  my_putstr("¡");
	  b += 1;
	}
      my_putchar('\n');
      a += 1;
    }
  my_putchar('\n');
}

void		check_player(t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (s->allum[a] != -1)
    b += s->allum[a++];
  if (b == 0)
    {
      my_printf("%s", s->clean);
      aff_loose(s);
      exit(0);
    }
}

void		allum(t_allum *s, int pvp)
{
  if (pvp == 0)
    {
      get_cmd(s);
      check_player(s);
      aff_allum(s);
      my_printf("Press 'Enter' to continue...");
      if (read(0, &s->buff, 1) == -1)
	error("Read");
      ia(s);
      aff_allum(s);
    }
  else
    {
      s->player = 1;
      my_printf("------------Player %d-------------\n\n", s->player);
      get_cmd(s);
      check_player_pvp(s);
      aff_allum(s);
      s->player = 2;
      my_printf("------------Player %d-------------\n\n", s->player);
      get_cmd(s);
      check_player_pvp(s);
      aff_allum(s);
    }
}

void		init(t_allum *s, int pvp)
{
  int		a;

  s->nbr_allum = 1;
  a = 1;
  if (s->nbr_lines > 53)
    {
      my_printf("Enter less than 53 lines\n");
      exit(0);
    }
  if (tgetent(NULL, s->term) == -1)
    error("Tgetent");
  while (a <= s->nbr_lines)
    {
      s->allum[a - 1] = s->nbr_allum;
      s->nbr_allum += 2;
      a += 1;
    }
  s->allum[a - 1] = -1;
  s->clean = tgetstr("cl", NULL);
  if (s->clean == NULL)
    error("Tgetstr");
  aff_allum(s);
  while (42)
    allum(s, pvp);
}
