#include <stdio.h>
#define AVRAG 9

typedef struct s_av
{
	char *name;
	int grade[AVRAG];
} t_av;

int main()
{
	t_av total;
	total.name = "2/3";
	total.grade[0] = 10;
	total.grade[1] = 15;
	total.grade[2] = 16;
	total.grade[3] = 18;
	total.grade[4] = 9;
	total.grade[5] = 8;
	total.grade[6] = 8;
	total.grade[7] = 8;
	total.grade[8] = 8;

	int sum = 0;
	for (int i = 0; i < AVRAG; i++)
	{
		sum += total.grade[i];
	}
	
	float najah = sum / (float)AVRAG;
	printf("L9ism :%s, xhal nisbat najah :%.2f", total.name, najah);
}


// #include <stdio.h>

// #define AVRAG 5

// typedef struct s_student {
//     char *name;
//     int grades[AVRAG];
// } t_student;

// int main() {
//     t_student s1;
//     s1.name = "2/3";
// 	s1.grades[0] = 10;
// 	s1.grades[1] = 15;
// 	s1.grades[2] = 16;
// 	s1.grades[3] = 18;
// 	s1.grades[4] = 9;

//     int sum = 0;
//     // for (int i = 0; i < AVRAG; i++) {
//     //     sum += s1.grades[i];
//     // }
// 	for (int i = 0; i < AVRAG; i++)
// 	{
// 		sum += s1.grades[i];
// 	}
//     // float average = sum / (float)NUM_GRADES;
// 	float najah = sum / (float)AVRAG;

//     printf("Student: %s\n", s1.name);
//     // printf("Average Grade: %.2f\n", najah);
// 	printf("L9ism :%s, xhal nisbat najah :%f", s1.name, najah);


//     return 0;
// }


