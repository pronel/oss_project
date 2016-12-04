#include"move.h"

#define left 75
#define right 77
#define enter 13

int main() {
	int choose;
	char name[7];
	int stage;
	int point=0;
	while (1) {

		
		if (point == 0) {
			printf("☞시작\t\t  종료\n");
		}
		if (point == 1) {
			printf("  시작\t\t☞종료\n");
		}
		choose = getch();
		if (choose == left)
			point = 0;
		if (choose == right)
			point = 1;
		if (choose == enter && point == 0) {
			system("cls");
			printf("stage(1~5) : ");
			scanf("%d", &stage);
			move(stage - 1);
		}
		else if(choose == enter && point == 1){
			exit(1);
		}
		system("cls");
	}
	return 0;
}
