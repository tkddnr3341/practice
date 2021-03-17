#include <stdio.h>
int main()
{
	char str1[10]="lebron";
	char str2[10]={'h','a','r','d','e','n'};
	char str3[]="who is the best player among these two?";
	printf("%s \n%s \n%s \n",str1,str2,str3);		//printf는 문자열을 받는 것이 아닌 문자열의 주소를 받는다.
	return 0;
}
