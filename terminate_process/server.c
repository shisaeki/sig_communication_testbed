/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:47:39 by shisaeki          #+#    #+#             */
/*   Updated: 2023/07/01 12:12:53 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
	pid_t	pid;
	char buffer[255];

	pid = getpid();
	sprintf(buffer, "Process ID: %d\n", (int) pid);
	write(STDOUT_FILENO, buffer, strlen(buffer));

	while(1)
	{
	}

	return (0);
}
