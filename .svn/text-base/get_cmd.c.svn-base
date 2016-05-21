/*
** get_cmd.c for get_cmd in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Tue Feb  5 16:22:30 2013 benjamin horiot
** Last update Thu Feb 14 13:29:53 2013 benjamin horiot
*/

#include "my.h"

void		get_cmd_suit(t_allum *s)
{
  s->stop = 0;
  while (s->stop != 1)
    {
      my_printf("Enter the number of matech(es) to remove (from 1 to %d): ",
                s->allum[s->line - 1]);
      if ((s->len = read(0, &s->line_tab, 4096)) == -1)
        error("Read");
      s->line_tab[s->len] = 0;
      s->nbr = my_getnbr(s->line_tab);
      if (s->nbr <= 0 || s->allum[s->line - 1] < s->nbr)
        my_printf("Enter a valid number\n");
      else
        {
          s->allum[s->line - 1] -= s->nbr;
          s->stop = 1;
        }
    }
}

void		get_cmd(t_allum *s)
{
  s->stop = 0;
  while (s->stop != 1)
    {
      my_printf("Enter the line : ");
      if ((s->len = read(0, &s->line_tab, 4096)) == -1)
        error("Read");
      s->line_tab[s->len] = 0;
      if (s->line_tab[0] == 0)
	{
	  my_printf("%sEnv error\n", s->clean);
	  exit(1);
	}
      s->line = my_getnbr(s->line_tab);
      if (s->line <= 0)
        my_printf("Enter a valid line\n");
      else if ((s->line - 1) > s->nbr_lines || s->allum[s->line - 1] == 0 ||
               s->line > s->nbr_lines)
	my_printf("Enter a valid line\n");
      else
        s->stop = 1;
    }
  get_cmd_suit(s);
}
