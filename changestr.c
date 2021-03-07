#include <stdio.h>
#include <string.h>

void change_str(char string[],int len1);
int lenstr(char string[]);

int main()
{
	char str[]="King Lebron James ";
	printf("%s\n",str);
	strcpy(str,"Lakers Lebron");
	printf("%s\n",str);
	int len;
	len=lenstr(str);
	change_str(str,len);	
	printf("%s\n",str);
	return 0;
}

void change_str(char string[],int len1)
{
	char str[]="Jame Harden";
	int len2;
	len2=lenstr(str);
	if(len1>=len2)
	{
       		for (int i=0;i<len1;i++)
		{
			if (i<len2)
			{
				string[i]=str[i];
			}
			else 
			{
				string[i]='\0';
			}
		}
       	printf("%s\n",string);
	}
	else
	{
		printf("too long\n");
	}
}

int lenstr(char string[])
{
	int size=0;
	while (string[size]!='\0')
	{
		size+=1;
	}
	return size;
}
