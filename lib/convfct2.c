/*
** convfct2.c for convfct2 in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Nov 15 09:30:42 2012 benjamin horiot
** Last update Mon Dec 17 11:58:59 2012 benjamin horiot
*/

#include <stdarg.h>
#include "my.h"

void	fctscientistlow(va_list av)
{
  scientist(va_arg(av, int), 0);
}

void	fctscientistup(va_list av)
{
  scientist(va_arg(av, int), 1);
}

void	fctoctalus(va_list av)
{
  octalus(va_arg(av, unsigned int));
}

void	fctbin(va_list av)
{
  bin(va_arg(av, unsigned int));
}

void	fctpoint(va_list av)
{
  my_putstr("0x");
}
