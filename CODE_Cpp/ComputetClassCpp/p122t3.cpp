/*** 
 * @Author: hayee
 * @Date: 2022-03-15 15:14:23
 * @LastEditTime: 2022-03-15 16:06:28
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\p122t3.cpp
 * @ProgramDescription: HAPPY2
 * @千山我独行,不必相送
 */
#include<iostream>
using namespace std;
class Date
{
    public:
        Date(int m, int d, int y)
        {
            m = 1;
            d = 1;
            y = 2005;
            cout << "日期" << 
        };
        void display();
    private:
        int month;
        int day;
        int year;
};
void Date::display()
{
    cout<< month << "/" << day << "/" << year << endl;
}
int main()
{
    Date d1();
    Date d2();
    Date d3();
    Date d4();
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}