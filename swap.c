// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   swap.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/08/03 20:14:03 by saait-si          #+#    #+#             */
// /*   Updated: 2024/08/03 23:22:33 by saait-si         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "push_swap.h"

void swap(t_node **stack)
{
    t_node *head;
    t_node *node_next;
    int tmp;
    
    if (stack && *stack && (*stack)->next)
    {
        head = *stack;
        node_next = (*stack)->next;
        
        tmp = head->value;
        head->value = node_next->value;
        node_next->value = tmp;    
    }
}

// int main()
// {
// 	t_node node1;
//     t_node node2;
// 	node2.value = 1;       // Initializes node2
// 	node2.next = NULL; 

// 	node1.value = 0;       // Initializes node2
// 	node1.next = &node2;       // Initializes node2
    
//     t_node *first = &node1;
//     t_node **stack = &first;
    
    
//     swap(stack);
//     printf("node1: %d, node2: %d ",first->value, first->next->value);
    
//     return 0;
// }
void sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}