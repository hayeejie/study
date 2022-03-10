/*
 * @Author: hayee
 * @Date: 2022-03-10 22:35:22
 * @LastEditTime: 2022-03-10 22:49:48
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\摸底考试测试题\t4.c
 * @ProgramDescription:切面
 * 千山我独行,不必相送
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2, b = 2;
    for(int i=0; i<10; i++)
    {
        a=a+pow(b,i);
    }
    printf("%d\n",a);
    return 0;
}