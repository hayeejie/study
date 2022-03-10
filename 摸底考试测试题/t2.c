/*
 * @Author: hayee
 * @Date: 2022-03-10 20:47:17
 * @LastEditTime: 2022-03-10 22:33:13
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\摸底考试测试题\t2.c
 * @ProgramDescription: jia
 * 千山我独行,不必相送
 */
#include<stdio.h>
int main()
{
    long long num1 = 1;
	int num2 = 4 * 3 * 2 * 1;
	for (int i = 2020; i >= 2017; i--)
	{
		num1 *= i;
	}
	printf("%lld",num1 / num2);
	return 0;
}