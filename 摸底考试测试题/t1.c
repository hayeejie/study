/*
 * @Author: hayee
 * @Date: 2022-03-10 20:10:49
 * @LastEditTime: 2022-03-10 22:08:57
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\摸底考试测试题\t1.c
 * @ProgramDescription: 数列
 * 千山我独行,不必相送
 */
#include <stdio.h>
int main()
{
    int a,b,c,d;
    a = 1, b = 1, c = 1;
    for (int i = 4; i < 20190325;i++) 
    {
        d = (a + b + c) % 10000;
        a = b;
        b = c;
        c = d;
    }
    printf("%d", d);
    return 0;
}