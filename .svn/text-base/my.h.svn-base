/*
** my.h for allum1 in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb  4 10:14:26 2013 benjamin horiot
** Last update Fri Feb 15 09:00:56 2013 benjamin horiot
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <curses.h>
# include <term.h>

typedef struct s_allum
{
  int		nbr_lines;
  int		nbr_allum;
  int		space;
  int		line;
  int		nbr;
  int		stop;
  int		len;
  int		player;
  int		allum[4097];
  char		line_tab[4097];
  char		*clean;
  char		*buff;
  char		term[4097];
} t_allum;

void		init(t_allum *, int);
void		ia(t_allum *);
void		check_ia(t_allum *);
void		aff_allum(t_allum *);
void		check_player(t_allum *);
void		check_player_pvp(t_allum *);
void		allum(t_allum *, int);
void		get_cmd(t_allum *);
void		get_cmd_suit(t_allum *);
void		aff_win(t_allum *);
void		aff_loose(t_allum *);
void		get_env(char **, t_allum *);
int		check_line(t_allum *);
int		find_line(t_allum *);
int		get_nbr_line(t_allum *);
int		check_one(t_allum *);
int		get_full_line(t_allum *);

#endif /* !MY_H_ */
