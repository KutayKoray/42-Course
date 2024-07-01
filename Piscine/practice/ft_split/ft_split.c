int is_sep(char a)
{
    return (a == ' ' || a == '\t' || a == '\0' || a == '\n');
}

int word_count(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (!is_sep(str[i]))
        {
            count++;
        }
        i++;
    }
    return count;
}

int ft_strlen(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] && !is_sep(str[i]))
    {
        count++;
        i++;
    }
    return count;
}

char *ft_word(char *str)
{
    int i = 0;
    char *new_str = (char *)malloc(sizeof(char) * ft_strlen());
    return new_str;
}

char **ft_split(char *str)
{
    int i = 0;
    int word = word_count(str);
    char **strs = (char **)malloc(sizeof(char *) * (word + 1));

    while (strs[i])
    {
        strs[i] = ft_word(str);
        i++;
    }
}