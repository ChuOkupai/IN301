#include <stdio.h>
#include <stdlib.h>

int	it_strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	re_strlen(char *s)
{
	if (! *s)
		return (0);
	return (1 + re_strlen(s + 1));
}

int	it_strcmp(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;

	i = 0;
	len1 = it_strlen(s1);
	len2 = it_strlen(s2);
	while (i <= len1 || i <= len2)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	re_strcmp(char *s1, char *s2)
{
	if (! *s1 || ! *s2)
		return (*s1 - *s2);
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (strcmp(s1 + 1, s2 + 1));
}

char*	it_strrev(char *src)
{
	char	*dst;
	int		len;
	int		i;
	
	len = it_strlen(src);
	dst = malloc(len + 1);
	if (! dst)
		return (0);
	for (i = 0; i < len; i++)
		dst[i] = src[len - i - 1];
	dst[i] = '\0';
	return (dst);
}

int	ft_strmir(char *s1, char *s2)
{
	char	*rs2;
	
	rs2 = it_strrev(s2);
	return (it_strcmp(s1, rs2)) ? 0 : 1;
}

int	ft_strinstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	if (! it_strlen(needle))
		return (0);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] == haystack[i + j])
			{
				if (j == it_strlen(needle) - 1)
					return (1);
				j++;
			}
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		printf("strlen argv[%d] = %d\n", i, it_strlen(argv[i]));
	if (argc > 2)
	{
		printf("strcmp = %d\n", it_strcmp(argv[1], argv[2]));
		printf("strmir = %d\n", ft_strmir(argv[1], argv[2]));
		printf("strinstr = %d\n", ft_strinstr(argv[1], argv[2]));
	}
	return (0);
}
