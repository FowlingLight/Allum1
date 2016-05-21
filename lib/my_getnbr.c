/*
** my_getnbr.c for my_getnbr in /home/b3nja13/Documents/svn/push_swap/lib
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Dec 20 15:28:42 2012 benjamin horiot
** Last update Tue Feb 12 12:53:57 2013 benjamin horiot
*/

int		is_num(char *str)
{
  int		a;

  a = 0;
  while (str[a] <= '9' && str[a] >= '0' && str[a])
    a += 1;
  if (str[a] == 0 || str[a] == '\n')
    return (1);
  return (0);
}

int		my_getnbr(char *str)
{
  int		nb;
  int		a;

  nb = 0;
  a = 0;
  if (is_num(str))
    {
      while (str[a] >= '0' && str[a] <= '9' && str[a])
	{
	  if (nb > (2147483647 / 10))
	    return (0);
	  nb *= 10;
	  nb += (str[a] - '0');
	  a += 1;
	}
    }
  return (nb);
}
