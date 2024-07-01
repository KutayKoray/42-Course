#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	int i;
	int li;

	li = size - 1;
	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && (i < li))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char k[] = "Kutayafdaa";
	char a[] = "Kutryasdas";

	printf("%d\n", strncmp(k, a, 8));
	printf("%d", ft_strncmp(k, a, 8));
}
