#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*strdup(const char *s)
{
	char *dest;
	size_t i;
	size_t j;

	i = ft_strlen(s) + 1;
	j = 0;
	dest = (char *) malloc(i * sizeof(*str));
	while (j < i)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
