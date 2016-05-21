/*
** main.c for main in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Wed Feb  6 14:16:35 2013 benjamin horiot
** Last update Mon Feb 11 17:08:20 2013 benjamin horiot
*/

#include "my.h"

int		get_full_line(t_allum *s)
{
  int		a;

  a = 0;
  while (s->allum[a] != -1)
    {
      if (s->allum[a] > 1)
	return (a);
      a += 1;
    }
}

void		main_suit(int ac, char **av, t_allum *s)
{
  if (av[1][0] == 'p' && av[1][1] == 'v' && av[1][2] == 'p')
    {
      if (av[2][0] <= '9' && av[2][0] >= '0')
	{
          s->nbr_lines = my_getnbr(av[2]);
          init(s, 1);
	}
      s->nbr_lines = 4;
      init(s, 1);
    }
  else if (av[2][0] == 'p' && av[2][1] == 'v' && av[2][2] == 'p')
    {
      if (av[1][0] <= '9' && av[1][0] >= '0')
	{
          s->nbr_lines = my_getnbr(av[1]);
          init(s, 1);
	}
      s->nbr_lines = 4;
      init(s, 1);
    }
}

void		get_ac2(t_allum *s, int ac, char **av)
{
  if (av[1][0] <= '9' && av[1][0] >= '0')
    {
      s->nbr_lines = my_getnbr(av[1]);
      if (s->nbr_lines <= 1)
	{
	  my_printf("Enter more than 1 line\n");
	  exit(0);
	}
      init(s, 0);
    }
  else if (av[1][0] == 'p' && av[1][1] == 'v' && av[1][2] == 'p')
    {
      s->nbr_lines = 4;
      init(s, 1);
    }
}

void		get_env(char **envp, t_allum *s)
{
  int		a;
  int		b;

  a = 0;
  while (my_strcmp(envp[a], "TERM") && envp[a])
    a += 1;
  if (envp[a])
    {
      b = 5;
      while (envp[a][b])
	{
	  s->term[b - 5] = envp[a][b];
	  b += 1;
	}
      s->term[b - 5] = 0;
    }
}

int		main(int ac, char **av, char **envp)
{
  t_allum	s;

  if (envp[0] == NULL)
    {
      my_putstr("Env error\n");
      return (1);
    }
  get_env(envp, &s);
  if (ac == 1)
    {
      s.nbr_lines = 4;
      init(&s, 0);
    }
  else if (ac == 2)
    get_ac2(&s, ac, av);
  else if (ac == 3)
    main_suit(ac, av, &s);
  else
    my_printf("Bad arguments\n");
}
