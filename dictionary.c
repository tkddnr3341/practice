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
	select=choosedic(D3_dic,D2_pa);
	if((select==1)||(select==2))
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
	int select1=1;
	int select2;
	while( (select1!=1)||(select1!=2))
	{
		printf("choose between dictionary1(1) and dictionary2(2): ");
		scanf("%d",&select1);
		printf("%d\n",select1);
	}
	select2=dic_version(select1);
	return select2;
}

int dic_version(int a)
{
	int select;
	int code;
	while( (select!=1)||(select!=2))
	{
		printf("choose between english korean dictionary and korean english dictionary");
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
	scanf("search: %s",search);
	for (int i=0;i<WORD;i++)
	{
		if (strcmp(D3[i][code],search)==0)
		{
			strcpy(answer,D3[i][1-code]);
			printf("means: %s",answer);
		}
	}
}
	
void D2_pa_search(char* D2_pa[WORD][LANGUAGE],int code)
{
	char* search;
	char* answer;
	scanf("search: %s",search);
	for (int i=0;i<WORD;i++)
	{
		if (search==D2_pa[i][code-2])
		{
			answer=D2_pa[i][3-code];
			printf("means: %s",answer);
		}
	}
}

	

