#include <stdio.h>
typedef	struct s_point
{
	int x;
	int y;
}			  t_point;

int main()
{
	t_point d;
	d.x = 10;
	d.y = 40;

	printf("HEY THERE THIS IS THE HIGHT OF YOUR PLAYER: %dcm\n, AND THIS IS THE WIDTH : %dcm", d.y, d.x);
	printf("========");
	t_point sajida;
	sajida.x = 0;
	sajida.y = 1;

	printf("HEY THERE THIS IS THE HIGHT OF YOUR PLAYER: %dcm\n, AND THIS IS THE WIDTH : %dcm", sajida.y, sajida.x);
	
	return(0);
}