/*
 * @Author: hayee
 * @Date: 2022-03-10 12:54:11
 * @LastEditTime: 2022-03-10 13:24:52
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\洛谷顺序结构题单\P5706.c
 * @ProgramDescription: 分肥宅水
 * 千山我独行,不必相送
 */
#include<stdio.h>
int main()
{
    int n, m;
    double t, y;
    scanf("%lf%d", &t,&n);
    m = n * 2;
    y = t / (double)n;
    printf("%.3lf\n%d",y,m);
    return 0;
}