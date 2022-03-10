/*
 * @Author: hayee
 * @Date: 2022-03-10 13:27:46
 * @LastEditTime: 2022-03-10 13:49:45
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\洛谷顺序结构题单\P1425.c
 * @ProgramDescription: 小鱼游泳时间
 * 千山我独行,不必相送
 */
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (d-b<0) 
    {
        e = (--c) - a; 
        f = d + 60 - b;
    }
    else 
    {
        e = c - a; f = d - b;
    }
    printf("%d %d",e,f);
    return 0;
}