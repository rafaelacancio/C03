int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello"));   // 0
	printf("%d\n", ft_strcmp("Hello", "World"));   // negativo
	printf("%d\n", ft_strcmp("World", "Hello"));   // positivo
	printf("%d\n", ft_strcmp("42", "42Lisboa"));   // negativo
	return (0);
}

