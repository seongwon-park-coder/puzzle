#include <bangtal.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace bangtal;


ObjectID board[4][4], board_final[4][4];
ObjectID boardX[4][4] = {
	{299, 449, 599, 749},
	{299, 449, 599, 749},
	{299, 449, 599, 749},
    {299, 449, 599, 749}
    },
	boardY[4][4] = {
		{ 470, 470, 470, 470 },
		{ 320, 320, 320, 320 },
		{ 170, 170, 170, 170 },
		{ 20, 20, 20, 20 } };

struct Item{
	ObjectID pic;
	int x, y;
};

void shuffle(ObjectID object, int x, int y) {
	int temp, rn_1, rn_2;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			rn_1 = rand() % x;
			rn_2 = rand() % y;
			temp = board[i][j];
			board[i][j] = board[rn_1][rn_2];
			board[rn_1][rn_2] = temp;
		}
	}
}


void swap(ObjectID &object1, ObjectID &object2) {
	ObjectID t = object1;
	object1 = object2;
	object2 = t;
}



int main() {

	auto scene1 = Scene::create("puzzle", "images/원본.png");
	auto scene2 = Scene::create("puzzle", "images/배경.png");
	auto startButton = Object::create("images/start.png", scene1 ,600, 100, true);
	startButton->setScale(2.0f);
	startButton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		scene2->enter();

		return true;
		});

	auto pic1 = Object::create("images/01.png", scene2, boardX[0][0], boardY[0][0], true);
    auto pic2 = Object::create("images/02.png", scene2, boardX[0][1], boardY[0][1], true);
	auto pic3 = Object::create("images/03.png", scene2, boardX[0][2], boardY[0][2], true);
	auto pic4 = Object::create("images/04.png", scene2, boardX[0][3], boardY[0][3], true);
	auto pic5 = Object::create("images/05.png", scene2, boardX[1][0], boardY[1][0], true);
	auto pic6 = Object::create("images/06.png", scene2, boardX[1][1], boardY[1][1], true);
	auto pic7 = Object::create("images/07.png", scene2, boardX[1][2], boardY[1][2], true);
	auto pic8 = Object::create("images/08.png", scene2, boardX[1][3], boardY[1][3], true);
	auto pic9 = Object::create("images/09.png", scene2, boardX[2][0], boardY[2][0], true);
	auto pic10 = Object::create("images/10.png", scene2, boardX[2][1], boardY[2][1], true);
	auto pic11 = Object::create("images/11.png", scene2, boardX[2][2], boardY[2][2], true);
	auto pic12 = Object::create("images/12.png", scene2, boardX[2][3], boardY[2][3], true);
	auto pic13 = Object::create("images/13.png", scene2, boardX[3][0], boardY[3][0], true);
	auto pic14 = Object::create("images/14.png", scene2, boardX[3][1], boardY[3][1], true);
	auto pic15 = Object::create("images/15.png", scene2, boardX[3][2], boardY[3][2], true);
	auto blank = Object::create("images/blank.png", scene2, boardX[3][3], boardY[3][3], true);

	setMouseCallback{
		
	}
	


	startGame(scene1);
}