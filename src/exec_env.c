#include "../inc/minishell.h"

int	exec_env(t_shell *shell)
{
	int	i;

	i = 0;
	while (shell->env[i])
	{
		if (ft_strchr(shell->env[i], '='))
			printf("%s\n", shell->env[i]);
		i++;
	}
	return (0);
}
//aquí tengo que ponerle que imprima esto _=/usr/bin/env? o vale con los env que tengan un '='?