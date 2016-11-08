#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct rank{
	char name[4];
	int move_count;
	rank *next;
}RANK;

void print_rank(){
	
	FILE *f1;
	rank *ranking;
	int i = 0;
	f1 = fopen("rank.def","r");

	printf("name\tmove count\n\n");
	while(!feof(f1)){
		fscanf(f1,"%s %d",ranking->name,&ranking->move_count);
		printf("%s\t%d",ranking->name,ranking->move_count);
		ranking = ranking->next;
	}
	system("pause");
	system("cls");
	fclose(f1);
	return;
}