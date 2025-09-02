char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[] = "Hello, 42 Lisboa!";
	char str2[] = "42";
	char str3[] = "World";

	char *res1 = ft_strstr(str1, str2);
	char *res2 = ft_strstr(str1, str3);
	char *res3 = ft_strstr(str1, "");

	if (res1)
		printf("Encontrado: %s\n", res1);
	else
		printf("Não encontrado: %s\n", str2);

	if (res2)
		printf("Encontrado: %s\n", res2);
	else
		printf("Não encontrado: %s\n", str3);

	if (res3)
		printf("Encontrado string vazia: %s\n", res3);

	return (0);
}

