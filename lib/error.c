/*
** error.c for error in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb  4 10:19:40 2013 benjamin horiot
** Last update Mon Feb 11 17:26:44 2013 benjamin horiot
*/

#include "my.h"

void		error(char *str)
{
  my_printf("%s error\n", str);
  exit(1);
}
