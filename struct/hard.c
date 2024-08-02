#include <stdio.h>

typedef struct s_alpha
{
	char *person;
	int data[3];
} t_alpha;
int main()
{
	t_alpha w;
	w.person = "l";
	w.data[0]= 2003;
	w.data[1]= 5;
	w.data[2]= 8;

	printf("the name of my hasband %s, the birthday of my hasband%d-%d-%d", w.person, w.data[0], w.data[1], w.data[2]);
}