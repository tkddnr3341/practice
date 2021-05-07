#include <stdio.h>
#include <string.h>
#define MEMORY 100

typedef enum menu {ADD,PRINT,SEARCH,EXIT} MENU;
typedef struct music {char title[40] ;char artist[40] ;int genre;} MUSIC;
MUSIC mp3[MEMORY];
int used_memory=0;

MENU MENUCODE();

int main()
{
	MENU menucode;
	menucode=MENUCODE();

	switch(menucode)
	{
		case ADD:
		MUSIC new;
		scanf("%s",new.title);
		scanf("%s",new.artist);
		scanf("%d",&new.genre);
		strcpy(mp3[used_memory].title,new.title);
		strcpy(mp3[used_memory].artist,new.artist);
		used_memory+=1;
		break;

		case PRINT:
		for (int i=0;i<used_memory;i++)
		{
			printf("%s",mp3[i].title);
		}

		case SEARCH:
		int found;
		char search[40];
		for (int i=0;i<used_memory;i++)
		{
			found=strcmp(search,mp3[i].title);
			if (found==0)
			{
				printf("song found\n title: %s\n artist: %s\n location: c:\\mp3\\%d",mp3[i].title,mp3[i].artist,mp3[i].genre);
				break;
			}
			printf("%d\n",i);
		}
		if (found!=0)
		{
			printf("song not found\n");
		}
		break;

		case EXIT:
			return 0;
	}
	return 0;
}
		
MENU MENUCODE()
{
	int  number;
	printf("1.ADD\n 2.PRINT\n 3.SEARCH\n 4.EXIT\n");
	scanf("%d",&number);
	return number;
}
