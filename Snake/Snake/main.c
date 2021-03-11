#define _CRT_SECURE_NO_WARNINGS
#include "snake.h"



int main(void)
{
	//ȥ�����
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


//��ʼ���ߺ���
void initSnake(void)
{
	snake.size = 2;		//��ʼ���߳���

	snake.body[0].X = WIDE / 2;			//��ʼ����ͷ
	snake.body[0].Y = HIGH / 2;

	snake.body[1].X = WIDE / 2 - 1;		//��ʼ���ߵ�һ������
	snake.body[1].Y = HIGH / 2;

	return;
}

//��ʼ��ҳ��ؼ�
void initUI()
{
	//����
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
	//ȥ����β
	coord.X = lastX;
	coord.Y = lastY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//��ʳ�� 
	coord.X = food.X;
	coord.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
	//������ƶ�����������Ϸλ��
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);


}

//��ʼ��ʳ�ﺯ��
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
	//�ж���ײǽ
	while (snake.body[0].X >= 0 && snake.body[0].X < WIDE && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
	{

		//������
		initUI();

		//�����û�����
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
		//�ж���ײ����
		for (size_t i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
				return;
		}

		//�ж���ͷײʳ��
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			initFood();
			snake.size++;
			score += 10;

		}

		//�洢��β����
		lastX = snake.body[snake.size - 1].X;
		lastY = snake.body[snake.size - 1].Y;
		//��ǰһ���������һ�θ�ֵ
		for (size_t i = snake.size; i > 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}
		snake.body[0].X += kx;				//��ͷ��������û������ƶ�
		snake.body[0].Y += ky;

		Sleep(300);
		//system("cls");
	}
	return;
}

void showScore(void)
{
	//������ƶ�����������Ϸλ��
	COORD coord;
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	printf("GAME OVER!!!!\n");
	printf("���ĳɼ���  %d\n", score);
}