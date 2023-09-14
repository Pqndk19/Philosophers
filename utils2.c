/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:02:12 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/09/12 14:02:15 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void error_msg(char *error_msg)
{
	write(1, "ERROR: ", 7);
	write(1, error_msg, len(error_msg));
	write(1, "\n", 1);
}

suseconds_t	get_time()
{
	struct timeval time;

	gettimeofday(&time, NULL);
	return((time.tv_sec * 1000) + (time.tv_usec / 1000));
}
