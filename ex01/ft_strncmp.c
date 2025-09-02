int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 5));      // 0
	printf("%d\n", ft_strncmp("Hello", "World", 3));      // negativo
	printf("%d\n", ft_strncmp("World", "Hello", 2));      // positivo
	printf("%d\n", ft_strncmp("42", "42Lisboa", 2));      // 0
	printf("%d\n", ft_strncmp("42", "42Lisboa", 5));      // negativo
	printf("%d\n", ft_strncmp("abc", "abcd", 0));         // 0
	return (0);
}
