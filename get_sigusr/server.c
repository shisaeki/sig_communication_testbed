/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:47:15 by shisaeki          #+#    #+#             */
/*   Updated: 2023/07/02 15:11:19 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		write(STDOUT_FILENO, "SIGUSR1", 7);
	else
		write(STDOUT_FILENO, "SIGUSR2", 7);
	exit(0);
}

int	main()
{
	pid_t	pid;
	struct sigaction	sa;
	char	buffer[255];

	pid = getpid();
	sprintf(buffer, "Process ID: %d\n", (int) pid);
	write(STDOUT_FILENO, buffer, strlen(buffer));

	sigemptyset(&sa.sa_mask);
	sa.sa_handler = signal_handler;
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);

	while(1)
	{
	}

	return (0);
}
