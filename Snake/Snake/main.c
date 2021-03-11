#define _CRT_SECURE_NO_WARNINGS
#include "snake.h"



int main(void)
{
	//去除光标
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);

	srand((unsigned int)time(NULL));
	initWall();
	initSnake();
	initFood();
	initUI();

	playGame();
	showScore();

	return EXIT_SUCCESS;
}


//初始化蛇函数
void initSnake(void)
{
	snake.size = 2;		//初始化蛇长度

	snake.body[0].X = WIDE / 2;			//初始化蛇头
	snake.body[0].Y = HIGH / 2;

	snake.body[1].X = WIDE / 2 - 1;		//初始化蛇的一节身体
	snake.body[1].Y = HIGH / 2;

	return;
}

//初始化页面控件
void initUI()
{
	//画蛇
	COORD coord = { 0 };
	for (size_t i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}
	//去除蛇尾
	coord.X = lastX;
	coord.Y = lastY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//画食物 
	coord.X = food.X;
	coord.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
	//将光标移动到不干扰游戏位置
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);


}

//初始化食物函数
void initFood(void)
{
	food.X = rand() % WIDE;			//0~59
	food.Y = rand() % HIGH;			//0~19

	return;
}
void initWall(void)
{
	for (size_t i = 0; i <= HIGH; i++)
	{
		for (size_t j = 0; j <= WIDE; j++)
		{
			if (j == WIDE)
			{
				printf("|");
			}
			else if (i == HIGH)
			{
				printf("_");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void playGame(void)
{
	char key = 'd';
	//判断蛇撞墙
	while (snake.body[0].X >= 0 && snake.body[0].X < WIDE && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
	{

		//更新蛇
		initUI();

		//接受用户按键
		if (_kbhit())
		{
			key = _getch();
		}
		switch (key)
		{
		case 'w': kx = 0; ky = -1; break;
		case 's': kx = 0; ky = 1; break;
		case 'a': kx = -1; ky = 0; break;
		case 'd': kx = 1; ky = 0; break;
		default:
			break;
		}
		//判断蛇撞身体
		for (size_t i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
				return;
		}

		//判断蛇头撞食物
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			initFood();
			snake.size++;
			score += 10;

		}

		//存储蛇尾坐标
		lastX = snake.body[snake.size - 1].X;
		lastY = snake.body[snake.size - 1].Y;
		//蛇前一段身体给后一段赋值
		for (size_t i = snake.size; i > 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}
		snake.body[0].X += kx;				//蛇头坐标根据用户按键移动
		snake.body[0].Y += ky;

		Sleep(300);
		//system("cls");
	}
	return;
}

void showScore(void)
{
	//将光标移动到不干扰游戏位置
	COORD coord;
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	printf("GAME OVER!!!!\n");
	printf("您的成绩是  %d\n", score);
}