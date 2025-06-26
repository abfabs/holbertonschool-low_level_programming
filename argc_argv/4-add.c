#include <stdio.h>
#include <stdlib.h>

int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i;
    int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
