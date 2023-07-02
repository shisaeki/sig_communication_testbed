/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:04:43 by shisaeki          #+#    #+#             */
/*   Updated: 2023/07/02 15:11:16 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <signal.h>

int	main(int argc, char **argv)
{
	pid_t	target_pid;

	if (argc != 3)
		return (0);
	target_pid = atoi(argv[1]);
	if (!strcmp(argv[2], "1"))
		kill(target_pid, SIGUSR1);
	else
		kill(target_pid, SIGUSR2);

	return (0);
}
