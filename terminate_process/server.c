/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:47:39 by shisaeki          #+#    #+#             */
/*   Updated: 2023/07/02 12:29:39 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

void	signal_handler(int	signum)
{
	char	*message = "Exit server Process";
	write(STDOUT_FILENO, message, strlen(message));
	exit(0) ;
}

int	main()
{
	pid_t				pid;
	struct sigaction	sa;
	char				buffer[255];

	pid = getpid();
	sprintf(buffer, "Process ID: %d\n", (int) pid);
	write(STDOUT_FILENO, buffer, strlen(buffer));

	sigemptyset(&sa.sa_mask);
	sa.sa_handler = signal_handler;
	sa.sa_flags = 0;
	sigaction(SIGINT, &sa, NULL);

	while(1)
	{
	}

	return (0);
}
