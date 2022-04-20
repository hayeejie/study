/*** 
 * @Author: hayee
 * @DaVolume: 2022-03-15 14:38:02
 * @LastEditTime: 2022-03-15 15:12:30
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\t6.cpp
 * @ProgramDescription: 
 * @千山我独行,不必相送
 */
#include <iostream>
using namespace std;
class Volume
{
    public:
        void set_Volume();
        int get_Volume();
    private:
        int length;
        int width;
        int height;
};
int main()
{
    Volume v1;
    Volume v2;
    Volume v3;
    v1.set_Volume();
    v2.set_Volume();
    v3.set_Volume();
    v1.get_Volume();
    v2.get_Volume();
    v3.get_Volume();
    cout << "三个长方体的体积为:" << v1.get_Volume() << " " << v2.get_Volume() << " " << v3.get_Volume() << endl;
    return 0;
}
void Volume::set_Volume()
{
    cin >> length;
    cin >> width;
    cin >> height;
}
int Volume::get_Volume()
{
    int z = (length * width) * height;
    return z;
}