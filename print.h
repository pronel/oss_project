#include"map.h"
#ifndef PRINT_H 
#define PRINT_H
void print(stage *st) {
	int x,y;
	for (y = 0; y < 10; y++) {
		for (x = 0; x < 35; x++) {
			printf("%c", st->map[y][x]);
		}
		printf("\n");
	}
}

#endif