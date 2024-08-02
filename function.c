/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:14:16 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/02 12:09:01 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	int sign;
	long  result;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	while(str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	else if(str[i] == '-')
		sign = -sign;
		
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(sign * result);
}