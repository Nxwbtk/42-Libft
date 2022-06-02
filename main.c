#include <stdio.h>
#include <ctype.h>
#include <string.h>

void    ft_bzero(void *s, unsigned int n);

int main()
{
	char st[50];

	st = "HelloWorld";
	ft_bzero(st,3);
	printf("%s", st);
	return (0);
}

