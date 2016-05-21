/*
** my_strcmp.c for my_strcmp in /home/b3nja13/Documents/svn/allum1/lib
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Feb  7 15:52:53 2013 benjamin horiot
** Last update Thu Feb  7 15:53:51 2013 benjamin horiot
*/

int		my_strcmp(char *str1, char *str2)
{
  int		a;

  a = 0;
  while (str1[a] == str2[a] && str1[a] && str2[a])
    a++;
  if (str1[a] == 0 || str2[a] == 0)
    return (0);
  return (1);
}
