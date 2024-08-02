typedef struct s_author
{
	char *fname;
	char *lname;
}			t_author;

typedef struct s_book
{
	int year;
	char *titre;
	char *type;
	t_author author;
}			t_book;

#include <stdio.h>

int main()
{
	t_author au1;
	t_book b1;
	b1.author.fname = "Salma";
	b1.author.lname = "Khabach";
	b1.year = 2025;
	b1.titre = "How to talk to yourself";
	b1.type = "self development";
	printf("This is the new book of %d of our fav authour %s %s about %s of %s", b1.year, b1.author.fname, b1.author.lname, b1.titre ,b1.type);
}