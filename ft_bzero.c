#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';//ou 0 tout court
		i++;
	}
}
