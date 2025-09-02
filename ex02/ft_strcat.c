char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "42!";

	ft_strcat(str1, str2);

	printf("Concatenação: %s\n", str1);
	return (0);
}

