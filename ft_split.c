#include "token.h"












char *quoted_arg(int *num_of_args, char *command, char quote)
{
	*num_of_args += 1;
	while (*command && *command != quote)
		command++;
	return (command);
}





int count_args(char *command)
{
	int	num_of_args;

	num_of_args = 0;
	while (*command)
	{
	while(*command == ' ')
		command++;
	if(*command == '"' || *command == 39)
		command = quoted_arg(&num_of_args, command, *command);
	else if(*command == '|')
	{
		num_of_args++;
		command++;
	}
	else
	{
		if (*command != ' ' && *command)
		{
			num_of_args++;
			command++;
			while (*command && *command != ' ')
				command++;
		}
	}
	}
	return (num_of_args);
}



t_token *ft_split(char *command)
{
	int num_of_args;

	num_of_args = count_args(command);
	printf("num_of_args: [%d]\n", num_of_args);
	printf("thisis %c\n", 39);
}

#include <libc.h>
int main(int ac, char *av[])
{
	t_token *result = ft_split(av[1]);

//	for (int i = 0; result[i] != NULL; i++)
//	{
//		printf("arg: [%s]\n", result[i].arg);
//		printf("type: [%d]\n", result[i].type);
//	}
}
