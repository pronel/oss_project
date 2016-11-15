#include<stdio.h>
#include<stdlib.h>  //system(x)를 사용하기 위해 선언
#include"map.h"  // 맵 스테이지 갯수(Maxstage)를 셈하기 위해서 참조


typedef struct rank{
	int stage;
	char name[4];
	int move_count;
	rank next*;
}RANK;

void print_rank(){
	
	FILE *f1;
	rank *list;
	rank *ranking = (rank*)malloc(sizeof(rank)); //랭킹을 읽어올 구조체를 동적할당

	list = ranking;

	int stage = 1;
	f1 = fopen("rank.def","r");

	printf("stage : %d\n",stage);    // map.h파일을 불러오면 while(stage <= Maxstage)를 사용하여 코드 크기를 줄여야함
	printf("name\tmove count\n\n");
	fscanf(f1,"%d %s %d",ranking->stage,ranking->name,&ranking->move_count);

	while(!feof(f1)&&stage==1){
		if(stage != ranking->stage){
			stage++;
			break;
		}
		printf("%s\t%d",ranking->stage,ranking->name,ranking->move_count);
		ranking = ranking->next;
		fscanf(f1,"%d %s %d",ranking->stage,ranking->name,&ranking->move_count);
	}

	printf("stage : %d\n",stage);
	printf("name\tmove count\n\n");
	fscanf(f1,"%d %s %d",ranking->stage,ranking->name,&ranking->move_count);

	while(!feof(f1)&&stage==2){
		if(stage != ranking->stage){
			stage++;
			break;
		}
		printf("%s\t%d",ranking->stage,ranking->name,ranking->move_count);
		ranking = ranking->next;
		fscanf(f1,"%d %s %d",ranking->stage,ranking->name,&ranking->move_count);
	}

	system("pause");
	system("cls");

	free_rank(list);
	fclose(f1);
	return;
}

void free_rank(rank *list){
	if(list->next != NULL){
		free(list);
		return;
	}
}
