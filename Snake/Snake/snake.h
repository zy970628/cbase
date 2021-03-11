#pragma once
#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define WIDE 60				//界面宽度
#define HIGH 20				//界面高度

//一个身体的长度
struct BODY
{
	int X;
	int Y;
};

//定义蛇的对象
struct SNAKE
{
	struct BODY body[WIDE * HIGH];
	int size;
}snake;

//定义食物对象
struct FOOD
{
	int X;
	int Y;
}food;
int score = 0; //游戏分数

int kx = 0;		//用户按下按键的坐标值
int ky = 0;

int lastX = 0;     //蛇尾部坐标
int lastY = 0;

// 声明函数
void initSnake(void);
void initFood(void);
void initUI(void);
void playGame(void);
void initWall(void);
void showScore(void);
#endif // __SHNAKE_H__
