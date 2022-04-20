#include"elite.h"
#include"hire.h"

elite::elite(double insight, double logic){
	this->insight = insight;
	this->logic = logic;
}
void elite::showmenu() {
	insight = logic = 0;
	int flag = 1;
	while (flag) {
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
			judge();
			flag = 0;
			break;
		case'2':
			bunny();
			display();
			choose2();
			minimenu();
			judge();
			flag = 0;
			break;
		case'3':
			sloth();
			display();
			choose2();
			minimenu();
			judge();
			flag = 0;
			break;
		case'4':
			cout << "good bye!!" << endl;
			break;
		default:
			std::cout << "退出" << endl;
			break;
		}
	}

}
void elite::minimenu() {
	insight = logic = 0;
	int flag = 1;
	hire fox('l'), bunny('h'), sloth('m');
	while (flag) {
		menu();
		char x;
		cin >> x;
		switch (x) {
		case '1':
			choose1(fox);
			display();
			flag = 0;
			break;
		case'2':
			choose1(bunny);
			display();
			flag = 0;
		case'3':
			choose1(sloth);
			display();
			flag = 0;
			break;
		case'4':
			cout << "good bye!!" << endl;
			break;
		default:
			std::cout << "退出" << endl;
			break;
		}
	}
}
void elite::judge() {
	while (true) {
		cout << "请输入insight：" << endl;
		cin >> insight;
		cout << "请输入logic：" << endl;
		cin >> logic;
		if ((insight < 0 || insight > 100) && (logic < 0 || logic > 100)) {
			cout << "Invalid values" << endl;
			break;
		}
		else if (insight >= 95 && logic >= 95) {
			cout << "Congratulations! Welcome to join our elite team!" << endl;
			break;
		}
		else {
			cout << "Unfortunately, you are not fit to our elite team." << endl;
			break;
		}
	}
}
void elite::display(){
	cout << "insight is" << insight << "," << "logic is " << logic << endl;
}