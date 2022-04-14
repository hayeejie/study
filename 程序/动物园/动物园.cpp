/*** 
 * @Author: hayee
 * @Date: 2013-01-01 07:34:27
 * @LastEditTime: 2022-04-13 23:03:15
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\程序\动物园\动物园.cpp
 * @ProgramDescription: 
 * @千山我独行,不必相送
 */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class hire
{
private:
	double agi, str, sp;
	char character;
public:
	void menu();
	double Fox();
	double Bunny();
	double Sloth();
	double hirescore();
	void showmenu();
	void WhetherToMeetTheResultsRequirements();
	void minimenu();
	hire(char c) : character(c){};
	hire operator+(hire &c1);
	void WhetherToPartner(hire &c1);
};
hire hire::operator+(hire &c1) {
	if (character == 'l' && c1.character == 'l')
	{
		cout << "很遗憾，你们不适合组队" << endl;
	}else if (character == 'm' && c1.character == 'm')
	{
		cout << "不错，你们可以组队" << endl;
	}else
	{
		cout << "恭喜，你们是完美搭档！" << endl;
	}
	return 0;
}
void hire::menu(){
	cout << "Select a numerical option:" << endl;
	cout << "=== menu ===" << endl;
	cout << "1.Fox" << endl;
	cout << "2.Bunny" << endl;
	cout << "3.Sloth" << endl;
	cout << "4.Quit" << endl;
}
double hire::Fox() {
	agi = str = sp = 0;
	cout << "Enter agility:" << endl;
	cin >> agi;
	cout << "Enter strength:" << endl;
	cin >> str;
	hirescore();
	cout << "Hire Score:" << hirescore() << endl;
	return hirescore();
}
double hire::Bunny(){
	agi = str = sp = 0;
	cout << "Enter agility:" << endl;
	cin >> agi;
	cout << "Enter speed:" << endl;
	cin >> sp;
	hirescore();
	cout << "Hire Score:" << hirescore() << endl;
	return hirescore();
}
double hire::Sloth(){
	agi = str = sp = 0;
	cout << "Enter strength:" << endl;
	cin >> str;
	cout << "Enter speed:" << endl;
	cin >> sp;
	hirescore();
	cout << "Hire Score:" << hirescore() << endl;
	return hirescore();
}
double hire::hirescore() {
	return 1.8 * agi + 2.16 * str + 3.24 * sp;
}
void hire::WhetherToMeetTheResultsRequirements() {
	double r = hirescore();
	if (r>31.3)
	{
		cout << "恭喜，你被录用了！" << endl;
		cout << "请选择搭档:" << endl;
		minimenu();
	}
}
void hire::WhetherToPartner(hire &c1){
	(*this) + c1;
}
void hire::minimenu() {
	int flag = 1;
	hire fox('l'), bunny('h'), sloth('m');
	while (flag == 1) {
		menu();
		int j;
		cin >> j;
		switch (j)
		{
			case 1:
				WhetherToPartner(fox);
				break;
			case 2:
				WhetherToPartner(bunny);
				break;
			case 3:
				WhetherToPartner(sloth);
				break;
			case 4:
				cout << "good bye!!" << endl;
				flag = 0;
				break;
			default:
				cout << "Invalid option" << endl;
				break;
		}
	}
}
void hire::showmenu() {
	int flag = 1;
	while (flag == 1)
	{
		menu();
		int i;
		cin >> i;
		switch(i){
			case 1:
				Fox();
				WhetherToMeetTheResultsRequirements();
				break;
			case 2:
				Bunny();
				WhetherToMeetTheResultsRequirements();
				break;
			case 3:
				Sloth();
				WhetherToMeetTheResultsRequirements();
				break;
			case 4:
				cout << "Good bye!" << endl;
				flag = 0;
				break;
			default:
				cout << "Indvalid option" << endl;
				break;
		}
	}	
}
int main()
{
	hire a('l');
	a.showmenu();
	return 0;
}