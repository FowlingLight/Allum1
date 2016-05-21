/*
** convfct3.c for convfct3 in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Nov 15 09:39:35 2012 benjamin horiot
** Last update Fri Nov 16 11:36:46 2012 benjamin horiot
*/

#include <stdarg.h>
#include "my.h"

void	fcthexalow(va_list av)
{
  hexa(va_arg(av, int), 0);
}

void	fcthexaup(va_list av)
{
  hexa(va_arg(av, int), 1);
}

void	fctspace(const char *format, int a)
{
  int	b;

  a = a + 1;
  b = 0;
  while (b <= (format[a] - 48))
    {
      my_putchar(' ');
      b = b + 1;
    }
}

void	fctsign(va_list av)
{
  if (va_arg(av, int) > 0)
    my_putchar('+');
}

void	fctcent(va_list av)
{
  my_putchar('%');
}
