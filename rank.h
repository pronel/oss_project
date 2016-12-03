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
	int sum = 0;//스테이지를 입력받는 변수
	printf("원하는 스테이지를 입력하세요\n");
	scanf("%d", &sum);

	FILE *f1;
	f1 = fopen("rank.txt", "r");
	rank *list, *head,
		*current, *fallow;
	list = current = fallow = (rank*)malloc(sizeof(rank));

	while (!feof(f1)) { //파일안에 있는정보를 노드에 저장
		fscanf(f1, "%d %s %d", &current->stage, current->name, &current->move_count);
		if (sum == current->stage)//원하는 스테이지의 기록을 노드에 저장
		{
			head = (rank*)malloc(sizeof(rank));

			fallow = current;
			current->next = head;
			current = current->next;
		}
		else
		{
			printf("없는 스테이지입니다\n");
			continue;
		}

	}
	fallow->next = NULL;//쓰레기값출력 방지

	rank *str;//출력용 포인터 생성
	str = list;
	while (str != NULL) { //노드에 있는 정보출력 
		printf("%d %s %d\n", str->stage, str->name, str->move_count);
		str = str->next;
	}

	fclose(f1);
	free(list);


}

