/*
** octal.c for octal in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Wed Nov 14 09:14:58 2012 benjamin horiot
** Last update Fri Nov 16 13:51:44 2012 benjamin horiot
*/

void		my_putstr(char *str)
{
  int		a;

  a = 0;
  while (str[a] != 0)
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

void		octal(char nbr)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (b != nbr)
    {
      if ((a % 10) == 7)
	a = a + 2;
      a = a + 1;
      b = b + 1;
    }
  my_putchar('\\');
  if (a < 100)
    {
      if (a < 10)
	my_putstr("00");
      else
	my_putchar('0');
    }
  my_putnbrs(a);
}

void		octalus(unsigned int nbr)
{
  if (nbr > 7)
    {
      octalus(nbr / 8);
      octalus(nbr % 8);
    }
  else
    my_putchar(nbr + 48);
}

void		bin(unsigned int nbr)
{
  if (nbr > 1)
    {
      bin(nbr / 2);
      bin(nbr % 2);
    }
  else
    my_putchar(nbr + 48);
}

void		hexa(unsigned int nbr, int up)
{
  if (nbr > 15)
    {
      hexa(nbr / 16, up);
      hexa(nbr % 16, up);
    }
  else
    {
      if (nbr <= 9)
	my_putchar(nbr + 48);
      else
	{
	  if (up == 1)
	    my_putchar(nbr + 55);
	  else
	    my_putchar(nbr + 87);
	}
    }
}
