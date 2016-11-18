#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#define left 75
#define right 77
#define up 72
#define down 80

void main(){
  int x,y;
  int p_x=2,p_y=2;
  int point;
  char xy[8][50] = {"┌──────────────┐",//삭제할거
                    "│●┼┼┼┼┼┼┼┼┼┼┼┼┼│",
                    "│┼┼┼┼┼┼┼┼┼┼┼┼┼┼│",
                    "│┼┼┼┼┼┼┼┼┼┼┼┼┼┼│", 
                    "│┼┼┼┼┼┼┼┼┼┼┼┼┼┼│",  
                    "│┼┼┼┼┼┼┼┼┼┼┼┼┼┼│",  
                    "│┼┼┼┼┼┼┼┼┼┼┼┼┼┼│",    
                    "└──────────────┘"};
  
  while(1){
    for(y=0;y<8;y++){ 
      for(x=0;x<50;x++){
        printf("%c",xy[y][x]);
      }   printf("\n");
    }
    point = getch();
    switch(point){
      case left:
        if(p_x == 2){
          break;
        } 
        xy[p_y][p_x] = '┼';
        p_x -= 2; 
        xy[p_y][p_x] = '●'; 
        break;
      case right:
        if(p_x == 48){
          break;
        }
        xy[p_y][p_x] = '┼';
        p_x += 2; 
        xy[p_y][p_x] = '●'; 
        break;
      case up:
        if(p_y == 1){ 
          break; 
        } 
        xy[p_y][p_x] = '┼';  
        p_y -= 1; 
        xy[p_y][p_x] = '●'; 
        break;
      case down:
        if(p_y == 7){ 
          break;
        } 
        xy[p_y][p_x] = '┼';
        p_y += 1; 
        xy[p_y][p_x] = '●';
        break;
    }
    system("cls");
  }
}
