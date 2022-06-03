#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *st = "HelloWorld";

	ft_bzero(st,3);
	printf("%s", st);
	return (0);
}

