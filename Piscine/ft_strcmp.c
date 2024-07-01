#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char a[] = "Kutay";
	char b[] = "Kut";
	printf("%d", ft_strcmp(a, b));
}
