#include <stdio.h> 
#include <string.h>

#define WORD 4
#define LANGUAGE 2
#define MAX 30

int choosedic();
int dic_version(int a);
void D3_search(char D3[WORD][LANGUAGE][MAX],int code);
void D2_pa_search(char* D2_pa[WORD][LANGUAGE],int code);

int main()
{
	char D3_dic[WORD][LANGUAGE][MAX]={
		{"book","책"},
		{"Hunter","헌터"},
		{"class","급"},
		{"suicide","자살"}
	};
	
	char* D2_pa[WORD][LANGUAGE]={
		{"basket","바구니"},
		{"ball","공"},
		{"player","선수"},
		{"block","블락"}
	};
	int select;
	select=choosedic();
	if((select==0)||(select==1))
	{
		D3_search(D3_dic,select);
	}
	else
	{
		D2_pa_search(D2_pa,select);
	}		
	return 0;
}


int choosedic(void)
{
	int select1;
	int select2;
	do
	{
		printf("choose between dictionary1(1) and dictionary2(2): ");
		scanf("%d",&select1);
	}while( (select1!=1)&&(select1!=2));
	select2=dic_version(select1);
	return select2;
}

int dic_version(int a)
{
	int select;
	int code;
	while( (select!=1)&&(select!=2))
	{
		printf("choose between english korean dictionary(1) and korean english dictionary(2): ");
		scanf("%d",&select);
	}
	if (a==1)
	{
		if (select==1)
		{
			code=0;
		}
		else
		{
			code=1;
		}
	}
	else
	{
		if (select==1)
		{
			code=2;
		}
		else
		{
			code=3;
		}
	}
	return code;
}

void D3_search(char D3[WORD][LANGUAGE][MAX],int code)
{
	char search[MAX];
	char answer[MAX];
	int found;
	int i=0;
	printf("search: ");
	scanf("%s",search);
	do
	{
		found = strcmp( D3[i][code] , search );
		i++;
	}while( (found!=0) && (i<WORD) );
	
	if (found!=0)
	{
		printf("word is not listed in dictionary\n");
	}
	else 
	{
		strcpy(answer , D3[i-1][1-code]);
		printf("means: %s\n",answer);
	}

}
	
void D2_pa_search(char* D2_pa[WORD][LANGUAGE],int code)
{
	char* search;
	char* answer;
	printf("search: ");
	scanf("%s",search);
	printf("%s\n",search);
	for (int i=0;i<WORD;i++)
	{
		if (search==D2_pa[i][code-2])
		{
			answer=D2_pa[i][3-code];
			printf("means: %s\n",answer);
		}
	}
}

	

