char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "42isFun!";

	ft_strncat(str1, str2, 2);
	printf("Concatenação com 2 caracteres: %s\n", str1);

	char str3[50] = "Hello, ";
	ft_strncat(str3, str2, 10);
	printf("Concatenação com 10 caracteres: %s\n", str3);

	return (0);
}

