/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:30:04 by sdummett          #+#    #+#             */
/*   Updated: 2021/12/02 15:21:33 by sdummett         ###   ########.fr       */
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
	char	*cmd_line;
	(void)cmd_line;
	(void)ac;

	
	shell_init(av, envp);
	while (true)
	{
		cmd_line = readline("pepesh € ");
		update_history();
	}

	return (0);
}
