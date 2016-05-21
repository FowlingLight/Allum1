/*
** convfct.c for convfct in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Nov 15 09:21:20 2012 benjamin horiot
** Last update Fri Nov 16 13:05:35 2012 benjamin horiot
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

void	fctputnbrs(va_list av)
{
  my_putnbrs(va_arg(av, int));
}

void	fctputnbrus(va_list av)
{
  my_putnbrus(va_arg(av, unsigned int));
}

void	fctputchar(va_list av)
{
  my_putchar(va_arg(av, int));
}

void	fctputstr(va_list av)
{
  my_putstr(va_arg(av, char *));
}

void	fctputstroct(va_list av)
{
  my_putstroct(va_arg(av, char *));
}
