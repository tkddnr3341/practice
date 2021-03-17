#include <stdio.h>
#include <string.h>

struct stu {char name[20];
		int number;
		double grade;
};

int main()
{
	struct stu student[3];
	char search[20];
	for (int i=0 ; i<3 ; i++)
	{
		printf("student %d\n",i);
		printf("name : ");
		scanf("%s",student[i].name);
		printf("number : ");
		scanf("%d", &student[i].number);
		printf("grade : ");
		scanf("%lf",&student[i].grade);
	}

	scanf("%s",search);
	for (int i=0;i<3;i++)
	{
		if( strcmp(search , student[i].name)==0 )
		{
			printf("number : %d\n",student[i].number);
			printf("grade : %lf\n",student[i].grade);
		}
	}
	return 0;
}

