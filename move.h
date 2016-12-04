#if defined(_MSC_VER)
	#ifndef _CRT_SECURE_NO_DEPRECATE#if defined(_MSC_VER)
	#ifndef _CRT_SECURE_NO_DEPRECATE
	#define _CRT_SECURE_NO_DEPRECATE (1)
	#endif
#pragma warning(disable : 4996)
#endif
#ifndef MOVE_H // ��������� �ߺ� ������ �������� ���.(������)
#define MOVE_H

#include<stdio.h>
#include<conio.h>
#include"map.h"
#include"print.h"

#define left 75
#define right 77
#define up 72
#define down 80

void move(int sta) {
	stage *st = (stage*)malloc(sizeof(stage));
	int x, y;
	int p_x, p_y;
	int point, hole = 0;
	int move_count = 0;
	map(sta, st);
	system("cls");
	for (y = 0; y < 10; y++) {
		for (x = 0; x < 34; x++) {
			if (st->map[y][x] == '*') {
				p_x = x;
				p_y = y;
			}
			if (st->map[y][x] == 'o') {
				hole++;
			}
		}
	}
	while (1) {
		if (hole == 0) {
			printf("stage clear!");
			int i;
			for (i = 0; i < 5000000; i++) {}
			move_count = 0;
			move(++sta);
			break;
		}
		print(st,move_count/2);
		point = getch();
		switch (point) {
		case left:
			if (st->map[p_y][p_x - 1] == '#' || st->map[p_y][p_x - 1] == 'X' || st->map[p_y][p_x - 1] == 'o') {
				break;
			}
			else if (st->map[p_y][p_x - 1] == '$') {
				if (st->map[p_y][p_x - 2] == 'o') {
					hole--;
					st->map[p_y][p_x - 2] = 'X';
				}
				else if (st->map[p_y][p_x - 2] != ' ') {
					break;
				}
				else {
					st->map[p_y][p_x - 2] = '$';
					st->map[p_y][p_x - 1] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_x -= 1;
			st->map[p_y][p_x] = '*';
			break;

		case right:
			if (st->map[p_y][p_x + 1] == '#' || st->map[p_y][p_x + 1] == 'X' || st->map[p_y][p_x + 1] == 'o') {
				break;
			}
			else if (st->map[p_y][p_x + 1] == '$') {
				 if (st->map[p_y][p_x + 2] == 'o') {
					hole--;
					st->map[p_y][p_x + 2] = 'X';
				}
				 else if (st->map[p_y][p_x + 2] != ' ') {
					break;
				}
				else {
					st->map[p_y][p_x + 2] = '$';
					st->map[p_y][p_x + 1] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_x += 1;
			st->map[p_y][p_x] = '*';
			break;

		case up:
			if (st->map[p_y - 1][p_x] == '#' || st->map[p_y - 1][p_x] == 'X' || st->map[p_y - 1][p_x] == 'o') {
				break;
			}
			else if (st->map[p_y - 1][p_x] == '$') {
				if (st->map[p_y - 2][p_x] == 'o') {
					hole--;
					st->map[p_y - 2][p_x] = 'X';
				}
				else if (st->map[p_y - 2][p_x] != ' ') {
					break;
				}
				else {
					st->map[p_y - 2][p_x] = '$';
					st->map[p_y - 1][p_x] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_y -= 1;
			st->map[p_y][p_x] = '*';
			break;

		case down:
			if (st->map[p_y + 1][p_x] == '#' || st->map[p_y + 1][p_x] == 'X' || st->map[p_y + 1][p_x] == 'o') {
				break;
			}
			else if (st->map[p_y + 1][p_x] == '$') {
				if (st->map[p_y + 2][p_x] == 'o') {
					hole--;
					st->map[p_y + 2][p_x] = 'X';
				}
				else if (st->map[p_y + 2][p_x] != ' ') {
					break;
				}
				else {
					st->map[p_y + 2][p_x] = '$';
					st->map[p_y + 1][p_x] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_y += 1;
			st->map[p_y][p_x] = '*';
			break;
		}
		move_count++;
		system("cls");
	}
}

#endif
	#define _CRT_SECURE_NO_DEPRECATE (1)
	#endif
#pragma warning(disable : 4996)
#endif
#ifndef MOVE_H 
#define MOVE_H

#include<stdio.h>
#include<conio.h>
#include"map.h"
#include"print.h"

#define left 75
#define right 77
#define up 72
#define down 80

void move(int sta) {
	stage *st = (stage*)malloc(sizeof(stage));
	int x, y;
	int p_x, p_y;
	int point, hole = 0;
	int move_count = 0;
	map(sta, st);
	system("cls");
	for (y = 0; y < 10; y++) {
		for (x = 0; x < 34; x++) {
			if (st->map[y][x] == '*') {
				p_x = x;
				p_y = y;
			}
			if (st->map[y][x] == 'o') {
				hole++;
			}
		}
	}
	while (1) {
		if (hole == 0) {
			printf("stage clear!");
			move_count = 0;
			move(++sta);
			break;
		}
		print(st,move_count/2);
		point = getch();
		switch (point) {
		case left:
			if (st->map[p_y][p_x - 1] == '#' || st->map[p_y][p_x - 1] == 'X' || st->map[p_y][p_x - 1] == 'o') {
				break;
			}
			else if (st->map[p_y][p_x - 1] == '$') {
				if (st->map[p_y][p_x - 2] == 'o') {
					hole--;
					st->map[p_y][p_x - 2] = 'X';
				}
				else if (st->map[p_y][p_x - 2] != ' ') {
					break;
				}
				else {
					st->map[p_y][p_x - 2] = '$';
					st->map[p_y][p_x - 1] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_x -= 1;
			st->map[p_y][p_x] = '*';
			break;

		case right:
			if (st->map[p_y][p_x + 1] == '#' || st->map[p_y][p_x + 1] == 'X' || st->map[p_y][p_x + 1] == 'o') {
				break;
			}
			else if (st->map[p_y][p_x + 1] == '$') {
				 if (st->map[p_y][p_x + 2] == 'o') {
					hole--;
					st->map[p_y][p_x + 2] = 'X';
				}
				 else if (st->map[p_y][p_x + 2] != ' ') {
					break;
				}
				else {
					st->map[p_y][p_x + 2] = '$';
					st->map[p_y][p_x + 1] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_x += 1;
			st->map[p_y][p_x] = '*';
			break;

		case up:
			if (st->map[p_y - 1][p_x] == '#' || st->map[p_y - 1][p_x] == 'X' || st->map[p_y - 1][p_x] == 'o') {
				break;
			}
			else if (st->map[p_y - 1][p_x] == '$') {
				if (st->map[p_y - 2][p_x] == 'o') {
					hole--;
					st->map[p_y - 2][p_x] = 'X';
				}
				else if (st->map[p_y - 2][p_x] != ' ') {
					break;
				}
				else {
					st->map[p_y - 2][p_x] = '$';
					st->map[p_y - 1][p_x] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_y -= 1;
			st->map[p_y][p_x] = '*';
			break;

		case down:
			if (st->map[p_y + 1][p_x] == '#' || st->map[p_y + 1][p_x] == 'X' || st->map[p_y + 1][p_x] == 'o') {
				break;
			}
			else if (st->map[p_y + 1][p_x] == '$') {
				if (st->map[p_y + 2][p_x] == 'o') {
					hole--;
					st->map[p_y + 2][p_x] = 'X';
				}
				else if (st->map[p_y + 2][p_x] != ' ') {
					break;
				}
				else {
					st->map[p_y + 2][p_x] = '$';
					st->map[p_y + 1][p_x] = '*';
				}
			}
			st->map[p_y][p_x] = ' ';
			p_y += 1;
			st->map[p_y][p_x] = '*';
			break;
		}
		move_count++;
		system("cls");
	}
}

#endif
