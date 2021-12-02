/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:30:04 by sdummett          #+#    #+#             */
/*   Updated: 2021/12/02 17:40:06 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
** Faut il que le shell herite des variable d 'env d un precedent shell ?
** Comment set les variables d'env ?
*/

t_vars	*variables = NULL;

int	main(int ac, char **av, char **envp)
{
	char	*cmd;
	(void)ac;
	(void)av;
	(void)envp;

	shell_init(envp);
	while (true)
	{
		cmd = readline("pepesh € ");
		update_history();
		ft_parser(cmd);
		free(cmd);
	}	
	return (0);
}
