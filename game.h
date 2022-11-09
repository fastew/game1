#include "main.h"

#ifndef KEY_CODE
#define KEY_CODE

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

#endif

int keycontrol();
void titledraw();
int menudraw();
void infodraw();
int maplistdraw();
void drawmap(int*,int*);
void gloop(int);
void move(int*, int*, int, int, int*, int*);
void drawui(int*, int*, int*);

char map1[14][56];
char map2[14][56];
