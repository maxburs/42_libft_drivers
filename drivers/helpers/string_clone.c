#include <stdlib.h>
#include <string.h>

char	*string_clone(char *str)
{
	char *new_str;
	int i;

	i = 0;
	while (str[i])
		i++;
	if (!(new_str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	new_str[i] = '\0';
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}