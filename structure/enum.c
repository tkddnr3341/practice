#include <stdio.h>

enum days {SUN=6 , MON=0 , TUE , WED , THUR , FRI , SAT=5 };

int main()
{
	enum days d;
	int date;
	char *days_name[]={"MON" ,"TUE" , "WED" , "THU" , "FRI" , "SAT"};
	printf("date : ");
	scanf("%d",&date);
	d=date%7;
	printf("days : %s\n", days_name[d]);
	return 0;
}



