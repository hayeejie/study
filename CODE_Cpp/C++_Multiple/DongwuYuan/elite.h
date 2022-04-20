#pragma once
#include<iostream>
#include"hire.h"
using namespace std;
class elite :public hire {
public:
	elite() {};
	elite(double insight, double logic);
	void showmenu();
	void minimenu();
	void judge();
	void display();
private:
	double insight;
	double logic;
};