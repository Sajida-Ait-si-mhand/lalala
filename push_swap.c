/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:06:50 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/02 12:13:55 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"


int duplicate(t_node *stack)
{
	t_node *node1;
	t_node *node2;

	node1 = stack;
	while(node1)
	{
		node2 = node1->next;
		while(node2)
		{
			if(node1->value == node2->value)
				return(0);
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return(1);
}
void free_stack(t_node **stack)
{
	t_node *node;

	while(*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}
int main(int ac, char *av[])
{
	t_node *stack_a;
	t_node *stack_b;

	if (ac < 2)
	{
		write(1,"Waiting an arg...\n", 19);
		return(0);
	}
	stack_a = NULL;
	stack_b = NULL;
	if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
	{
		write(1, "ERROR/n", 6);
		free_stack(&stack_a);
		return(0);
	}
	printf("ok😭");
}

