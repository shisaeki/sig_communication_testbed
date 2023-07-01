/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:14:18 by shisaeki          #+#    #+#             */
/*   Updated: 2023/07/01 12:20:55 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <signal.h>

int main(int argc, char **argv)
{
	pid_t target_pid;

	if (argc != 2)
		return (0);
	target_pid = atoi(argv[1]);
	kill(target_pid, SIGINT);

	return (0);
}
