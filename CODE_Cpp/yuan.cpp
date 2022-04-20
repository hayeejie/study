#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class hire {
public:
	hire (char c) :character(c) {};
	void menu();
	void showmenu();
	void minimenu();
	void choose1(hire& h);
	void choose2();
	double fox();
	double bunny();
	double sloth();
	void operator +(hire & h1) {
		if ((character == 'l' && h1.character == 'l')) cout << "?????????????????" << endl;
		else if ((character == 'm' && h1.character == 'm')) cout << "????????????????" << endl;
		else cout << "?????????????????" << endl;
	}
	double hirescore() {
		return 1.0 * agility + 2.16 * strength + 3.24 * speed;
	}
	void display() {
		cout << "agility is" << agility << "," << "strength is " << strength << "," << "speed is" << speed << endl;
	}
private:
	double agility, strength, speed;
	char character;
};
void hire::menu() {
	agility = strength = speed = 0;
	cout << "=============" << endl;
	cout << "===1.fox  ===" << endl;
	cout << "===2.bunny===" << endl;
	cout << "===3.sloth===" << endl;
	cout << "=============" << endl;
}
double hire::fox() {
	agility = strength = speed = 0;
	cout << "Enter agility " << endl;
	cin >> agility;
	cout << " Enter strength" << endl;
	cin >> strength;
	cout << "Hire score:" << hirescore() << endl;
	return hirescore();
}
double hire::bunny() {
	agility = strength = speed = 0;
	cout << "Enter agility " << endl;
	cin >> agility;
	cout << " Enter speed" << endl;
	cin >> speed;
	cout << "Hire score:" << hirescore() << endl;
	return hirescore();
}
double hire::sloth() {
	agility = strength = speed = 0;
	cout << "Enter strength " << endl;
	cin >> strength;
	cout << " Enter speed" << endl;
	cin >> speed;
	cout << "Hire score:" << hirescore() << endl;
	return hirescore();
}
void hire::choose2() {
	double ret = hirescore();
	if (ret > 31.3) {
		cout << "????????????" << endl;
		cout << "??????" << endl;
	}

}
void hire::showmenu() {
	int flag = 0;
	while (true) {
		menu();
		cout << " please choose an animal or exist:";
		char x;
		cin >> x;
		switch (x) {
		case '1':
			fox();
			display();
			choose2();
			minimenu();
			flag = 0;
			break;
		case'2':
			bunny();
			display();
			choose2();
			minimenu();
			flag = 0;
			break;
		case'3':
			sloth();
			display();
			choose2();
			minimenu();
			flag = 0;
			break;
		case'4':
			cout << "good bye!!" << endl;
			flag = 0;
			break;
		default:
			break;
		}
	}

}
void hire::minimenu() {
	int flag = 0;
	hire fox('l'), bunny('h'), sloth('m');
	while (true) {
		menu();
		char x;
		cin >> x;
		switch (x) {
		case '1':
			choose1(fox);
			break;
		case'2':
			choose1(bunny);
			break;
		case'3':
			choose1(sloth);
			break;
		case'4':
			cout << "good bye!!" << endl;
			flag = 0;
			break;
		default:
			break;
		}
	}
}
void hire::choose1(hire& h) {
	(*this) + h;
}
int main() {
	hire appl1('l');
	appl1.showmenu();
	return 0;
}