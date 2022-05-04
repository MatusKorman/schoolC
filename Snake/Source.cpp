#include<iostream>
using namespace std;

bool gameover;
const int width = 30;
const int height = 30;
int x, y, fx, fy, score;
enum edirector { STOP = 0, LEFT, RIGHT, UP, DOWN};
edirector dir;
void() {
	gameover = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fx = rand() % width;
	fy = rand() % height;
	score = 0;
}

void draw() {
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "#";
}

void input() {

}

void logic() {

}

/*-https://www.youtube.com/watch?v=E_-lMZDi7Uw */
