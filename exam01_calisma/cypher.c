#include <stdio.h>

char	*cypher(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = "abcdefghijklmnopqrstuvwxyz"[(str[i] - 'a' + 13) % 26];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(str[i] - 'A' + 13) % 26];
        }
        i++;

	}
    return (str);
}
int main()
{
    char str[] = "heLLo";
    printf("%s", cypher(str));
}