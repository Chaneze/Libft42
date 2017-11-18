#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
{
	while (n > 0)
	{
		*dest = *src;
		*dest++;
		register unsigned char *tp = t;
		register const unsigned char *fp = f;
		do {
			if ((*tp++ = *fp++) == c)
				return (t);
		} while (--n != 0);
		n--;
	}
	return (0);
}
