#include "main.h"
/**
 * environment - get the enviroment variables.
 * @env: pointer to a pointer to strings
 */
void environment(char **env)
{
	unsigned int i;
	size_t count_len;

	i = 0;
	while (env[i] != NULL)
	{
		count_len = 0;
		while (env[i][count_len] != '\0')
		{
			count_len++;
		}
		write(1, env[i], count_len);
		write(1, "\n", 1);
		i++;
	}
}
