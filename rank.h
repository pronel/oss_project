#include<stdio.h>
#include<stdlib.h>
//노드 구조정의
typedef struct ranking {
	int stage;
	char name[7];
	int move_count;
	struct ranking *next;
}rank;



int main(void)
{
	FILE *f1;
	f1 = fopen("rank.txt", "r");
	rank *list, *str, *head, *current, *fallow;
	list = current = fallow = (rank*)malloc(sizeof(rank));

	while (!feof(f1)) { //파일안에 있는정보를 노드에 저장
		fscanf(f1, "%d %s %d", &current->stage, current->name, &current->move_count);

		head = (rank*)malloc(sizeof(rank));

		fallow = current;
		current->next = head;
		current = current->next;
	}
	fallow->next = NULL;

	str = list;
	while (str != NULL) { //노드에 있는 정보출력 
		printf("%d %s %d\n", str->stage, str->name, str->move_count);
		str = str->next;
	}

	fclose(f1);
	free(list);


}

