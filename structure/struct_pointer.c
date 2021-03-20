#include <stdio.h>
#include <string.h>

struct student {char name[20];
		int number;
		double grade;
	};

void change(struct student s);
void p_change(struct student* p);

int main()
{
	struct student s={"James",13,4.0};
	struct student* p;
	p=&s;
	change(s);
	printf("name: %s\n",s.name);
	printf("number : %d\n",s.number);
	printf("grade : %lf\n",s.grade);

	printf("\n");

	p_change(p);
	printf("name: %s\n",p->name);
	printf("number : %d\n",(*p).number);
	printf("grade : %lf\n",p->grade);

	return 0;
}

void change(struct student s)
{
	strcpy(s.name,"Harden");
	s.grade=4.5;
}

void p_change(struct student* p)
{
	strcpy(p->name,"Harden");
	p->grade=4.5;
}

