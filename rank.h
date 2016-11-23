#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"

typedef struct RANK {
	int stage;
	char name[5];
	int move_count;
	struct RANK *next;
}rank;
void print_rank() {
	int select;
	printf("스테이지를 입력하세요. : \n");
	scanf("%d", select);

	FILE *f1;
	rank *list, *ptr, *str;//기록을 찾는 노드
	rank *compare, *temp, *node;//기록들을 비교하는 노드
	list = (rank*)malloc(sizeof(rank));
	compare = (rank*)malloc(sizeof(rank));
	ptr = str = list;
	temp = node = compare;
	f1 = fopen("rank.txt", "r");
	if (f1 == NULL)//파일의 유무를 확인
	{
		printf("error\n");
	}

	printf("stage : %d\n", select);
	printf("name\t move_count\n\n");

	while (!feof(f1))
	{
		fscanf(f1, "%d %s %d", list->stage, list->name, list->move_count);
	}
	while (list != NULL)//원하는 데이터를 cmpare에 저장
	{
		ptr = str;
		str = str->next;
		if (select == str->stage)
		{
			compare->stage = str->stage;
			strcpy(compare->name, str->name);
			compare->move_count = str->move_count;
		}
	}

	while (compare != NULL)
	{
		temp = node;
		node = node->next;

		if (temp->move_count > node->move_count)
		{
			temp = node->next;
			node->next = temp;
		}
	}
}