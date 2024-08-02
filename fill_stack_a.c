/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:13:20 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/02 12:31:34 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_node *creation(int nbr)
{
	t_node *new_node;
	new_node = (t_node*)malloc(sizeof(t_node));
	if (!new_node)
		return(NULL);
	new_node->value = nbr;
	new_node->next = NULL;
	return(new_node);
}

void add_node(t_node **stack_a, t_node *new_node)
{
	t_node *node;

	node = *stack_a;
	if (*stack_a)
	{
		while(node->next != NULL)
			node =	node->next;
		node->next = new_node;
	}
	else
		*stack_a = new_node;
}

void fill_stack(t_node **stack_a, char **mstr)
{
	t_node *node;
	int i;

	i = 0;
	while(mstr[i])
	{
		node = creation(ft_atoi(mstr[i]));
		add_node(stack_a, node);
		i++;
	}
}
int is_degit(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

int	is_valid(char *args)
{
	int	i;

	i = 0;
	if (args[i] == '-' || args[i] == '+')
		i++;
	if (args[i] == '\0')
		return (0);
	while (args[i])
	{
		if (is_degit(args[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_free(char **arg_str)
{
	int i;
	i = 0;
	while(arg_str[i])
	{
		free(arg_str[i]);
		i++;
	}
	free(arg_str);
}
int fill_stack_a(t_node **stack, char **av)
{
	char **arg_str;
	int i;
	int j;

	i = 1;
	while(av[i])
	{
		arg_str = ft_split(av[i], ' ');
		if(!arg_str[0])
			return(ft_free(arg_str), 0);
		j = 0;
		while(arg_str[j])
		{
			if(is_valid(arg_str[j]) == 0)
				return(ft_free(arg_str),0);
			if (ft_atoi(arg_str[j]) > INT_MAX || ft_atoi(arg_str[j]) < INT_MIN )
				return(ft_free(arg_str),0);
			
			j++;
		}
		fill_stack(stack, arg_str);
		ft_free(arg_str);
		i++;
	}
	return 1;
}
