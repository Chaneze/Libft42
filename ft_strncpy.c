#include <string.h>

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] == '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}