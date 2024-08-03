#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_node
{
	int index;
	int	value;
	struct s_node *next;
}			   t_node;

t_node *creation(int nbr);
void add_node(t_node **stack_a, t_node *new_node);
void fill_stack(t_node **stack_a, char **mstr);
int is_degit(char c);
int is_valid(char *arg_str);
void ft_free(char **arg_str);
int fill_stack_a(t_node **stack_a, char **av);
long double	ft_atoi(const char *str);
int duplicate(t_node *stack);
char	**ft_split(char const *s, char c);

#endif