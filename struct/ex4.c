
typedef struct s_time
{
	int minutes;
	int hours;
	int seconds;
}	t_time;

int add (t_time duree1, t_time duree2)
{
	t_time time;
	time.hours = duree1.hours + duree2.hours;
	time.minutes = duree1.minutes + duree2.minutes;
	time.seconds = duree1.seconds + duree2.seconds;

	if (time.seconds >= 60)
		time.seconds = time.seconds - 60;
		time.minutes = time.minutes + 1;

	if (time.minutes >= 60)
		time.minutes = time.minutes - 60;
		time.hours = time.hours + 1;

	return time;	
}
#include <stdio.h>
int main()
{
	t_time duree1 = {2, 37, 8};
	t_time duree2 = {0, 0, 8};
	int sum = add(duree1, duree2);
	printf("This is the sum :%d", sum);
}