/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:14:16 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/02 19:13:10 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long double	ft_atoi(const char *str)
{
	int i;
	int sing;
	long double res;

	i = 0;
	sing = 1;
	res = 0;
	while(str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		sing = -sing;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <='9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(sing * res);
}