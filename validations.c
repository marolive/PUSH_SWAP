#include "push_swap.h"
#include <stdio.h> //remover
#include <string.h> //remover

void valid_arg(int c, char **arg)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (c > 2)
	{
		while(arg[i])
		{
			if (!is_repeated(arg))
			{
				printf("%c", arg[i][j]);
			}
			else
			{
				printf("%c\n", arg[i][j]);
				printf("nao é digito\n");
				j++;
			}
			i++;
		}
	}
	else
		printf("Errouuu\n");

}

/*int	ft_isdig(char **arg)
{
	int i;
	int j;
	int sig;
	
	i = 1;
	while (arg[i])
	{
		sig = 0;
		j = 0;
		while (arg[i][j])
		{
			if ((arg[i][j] == '-' || arg[i][j] == '+') && sig != 1)
			{
				j++;
				sig = 1;
			}
			else if ((arg[i][j] >= '0' && arg[i][j] <= '9' && arg[i][j + 1] != '-' && arg[i][j + 1] != '+') || (arg[i][j+1] == '\0'))
			{
				sig = 0;
				j++;
			}
			else
				return (0);
		}
		if (sig > 0)
			return (0);
		i++;
	}
	return (1);
}

void is_number(char **arg)
{
	int i;
	int j;

	i = 1;
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (!ft_isdig(arg))
				printf("error");
			j++;
		}
		i++;
	}
}*/

int is_repeated(char **arg)
{
	int i;
	int j;

	i = 1;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (!strncmp(arg[i], arg[j], 10))
				printf("ErroR\n");
			j++;
		}
		i++;
	}
	return(0);
}

int main(int argc, char *argv[])
{
	valid_arg(argc, argv);
	return 0;
}
