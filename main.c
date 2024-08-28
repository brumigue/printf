#include <stdio.h>
#include "ft_printf.h" 

int	main(void)
{
	char			c;
	char			*str;
	void			*ptr;
	int				decimal;
	int				integer;
	int				hex_lower;
	int				hex_upper;
	unsigned int	u_integer;

	c = 'A';
	str = "String!";
	ptr = str;
	decimal = 42;
	integer = -42;
	u_integer = 42;
	hex_lower = 0x2a;
	hex_upper = 0x2A;
	printf("Test de %%c:\n");
	printf("printf:    |%c|\n", c);
	ft_printf("ft_printf: |%c|\n\n", c);
	printf("Test de %%s:\n");
	printf("printf:    |%s|\n", str);
	ft_printf("ft_printf: |%s|\n\n", str);
	printf("Test de %%p:\n");
	printf("printf:    |%p|\n", ptr);
	ft_printf("ft_printf: |%p|\n\n", ptr);
	printf("Test de %%d:\n");
	printf("printf:    |%d|\n", decimal);
	ft_printf("ft_printf: |%d|\n\n", decimal);
	printf("Test de %%i:\n");
	printf("printf:    |%i|\n", integer);
	ft_printf("ft_printf: |%i|\n\n", integer);
	printf("Test de %%u:\n");
	printf("printf:    |%u|\n", u_integer);
	ft_printf("ft_printf: |%u|\n\n", u_integer);
	printf("Test de %%x:\n");
	printf("printf:    |%x|\n", hex_lower);
	ft_printf("ft_printf: |%x|\n\n", hex_lower);
	printf("Test de %%X:\n");
	printf("printf:    |%X|\n", hex_upper);
	ft_printf("ft_printf: |%X|\n\n", hex_upper);
	printf("Test de %%%%:\n");
	printf("printf:    |%%|\n");
	ft_printf("ft_printf: |%%|\n\n");
	return (0);
}
