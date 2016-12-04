#ifndef PRINT_H
#define PRINT_H

#include"map.h"

void print(stage *st,int move_count) {
	int x,y;
	printf("───────────────────────────\n");
	for (y = 0; y < 10; y++) {
		  for (x = 0; x < 35; x++) {
			  if (st->map[y][x] == '#') 
			  {
				  printf("■");
			  } 
			  else if (st->map[y][x] == ' ')
			  {
				  printf("  ");
			  }
			  else if (st->map[y][x] == '$')
			  {  
				  printf("○");
			  } 
			  else if (st->map[y][x] == '*')
			  {  
				  printf("★");  
			  }
			  else if (st->map[y][x] == 'X')
			  { 
				  printf("◎");
			  }
			  else if (st->map[y][x] == 'o') 
			  {  
				  printf("●"); 
			  }		
		printf("\n");
	}
	printf("───────────────────────────\n");
	printf("───────────────────────────\n");
	printf("\n");
	printf("  이동횟수 : %d\n\n", move_count);

	printf("  ○ : Stone   ★ : Player   ● : Hole");
}

#endif
