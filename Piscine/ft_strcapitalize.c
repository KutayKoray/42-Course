char	*lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_first;	

	i = 0;
	is_first = 1;
	lowercase(str);
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (is_first == 1)
			{
				str[i] -= 32;
				is_first = 0;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
		{
			is_first = 0;
		}
		else
		{
			is_first = 1;
		}
		i++;
	}
	return (str);
}
