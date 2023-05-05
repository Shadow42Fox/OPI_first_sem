#include <iostream>
#include <stdio.h>
#include <windows.h>


#define wieght 25
#define height 26
#define player '†'
#define border '#'




using namespace std;

void Draw(char field[height][wieght])
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		cout << field[i] << endl;
	}
}

void CreateField(char field[height][wieght])
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < wieght; j++)
		{
			if (i == 0 || j == 0 || j == wieght - 2 || i == height - 1)
				field[i][j] = border;
			else
				field[i][j] = ' ';
		}
		field[i][wieght - 1] = '\0';
	}
}



void moveKEYS(char field[height][wieght], char playerAction, int playerCoords[2], int &paint) {
	int lastcoords[2];
	lastcoords[0] = playerCoords[0];
	lastcoords[1] = playerCoords[1];
	if (playerAction == 'W' || playerAction == 'w')
	{
		playerCoords[0]--;
	}
	else if (playerAction == 'S' || playerAction == 's')
	{
		playerCoords[0]++;
	}
	else if (playerAction == 'A' || playerAction == 'a')
	{
		playerCoords[1]--;
	}
	else if (playerAction == 'D' || playerAction == 'd')
	{
		playerCoords[1]++;
	}
	else if (playerAction == 'E' || playerAction == 'e')
	{
		paint++;
	}
	if (field[playerCoords[0]][playerCoords[1]] == ' ' || field[playerCoords[0]][playerCoords[1]] == '*')
	{
		if (paint % 2 == 0)
			field[lastcoords[0]][lastcoords[1]] = ' ';
		else 
			field[lastcoords[0]][lastcoords[1]] = '*';
	}
	
	else {
		playerCoords[0] = lastcoords[0];
		playerCoords[1] = lastcoords[1];
	}

}





int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char field[height][wieght];
	int x, y, paint;
	x = wieght / 2;
	y = height / 2;
	paint = 0;
	int playerCoords[2] = { y, x };
	char playerAction;
	CreateField(field);
	while (true)
	{
		field[playerCoords[0]][playerCoords[1]] = player;
		Draw(field);
		Sleep(0);
		cin >> playerAction;
		moveKEYS(field, playerAction, playerCoords, paint);
	}
}