unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str1[20] = "Hello, ";
	char str2[] = "42!";
	unsigned int ret;

	ret = ft_strlcat(str1, str2, 20);
	printf("Concatenação: %s\n", str1);
	printf("Valor retornado: %u\n", ret);

	char str3[10] = "Hello, ";
	char str4[] = "42isFun!";
	ret = ft_strlcat(str3, str4, 10);
	printf("Concatenação com limite: %s\n", str3);
	printf("Valor retornado: %u\n", ret);

	return (0);
}

