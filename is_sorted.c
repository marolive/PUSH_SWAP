#include "push_swap.h"
#include <stdio.h>
#include <string.h>

int stack_is_sorted(char **arg)
{
	int i;
	int j;

	i = 1;
	j = i + 1;
	while(arg[i])
	{
		//printf("%s\n", arg[i]);
		while(arg[i] < arg[j] && arg[j])
		{
			i++;
			j = i + 1;
		}
		if(arg[i] > arg[j])
		{
			printf("ok\n");
			exit (0);
		}
		else
		{
			printf("lista ordenada\n");
			exit (0);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc > 2)
	{
		while(argv[i])
		{
			//if(!stack_is_sorted(argv))
			//	printf("OK\n");
			stack_is_sorted(argv);
			i++;
		}
	}
	else
		printf("error\n");
	return 0;
}
