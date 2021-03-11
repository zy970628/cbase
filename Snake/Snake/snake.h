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

#define WIDE 60				//������
#define HIGH 20				//����߶�

//һ������ĳ���
struct BODY
{
	int X;
	int Y;
};

//�����ߵĶ���
struct SNAKE
{
	struct BODY body[WIDE * HIGH];
	int size;
}snake;

//����ʳ�����
struct FOOD
{
	int X;
	int Y;
}food;
int score = 0; //��Ϸ����

int kx = 0;		//�û����°���������ֵ
int ky = 0;

int lastX = 0;     //��β������
int lastY = 0;

// ��������
void initSnake(void);
void initFood(void);
void initUI(void);
void playGame(void);
void initWall(void);
void showScore(void);
#endif // __SHNAKE_H__
