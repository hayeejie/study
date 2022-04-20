/*
 * @Author: hayee
 * @Date: 2022-03-10 22:50:35
 * @LastEditTime: 2022-03-10 22:54:53
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\摸底考试测试题\t5.c
 * @ProgramDescription: 数的分解
 * 千山我独行,不必相送
 */
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int panduan(int i, int j, int k)
{
	int t = 1;
	while (i)
	{
		if (i % 10 == 2 || i % 10 == 4)
		{
			t = 0;
			break;
		}
		else
			i = i / 10;
	}
	while (t == 1 && j)
	{
		if (j % 10 == 2 || j % 10 == 4)
		{
			t = 0;
			break;
		}
		else
			j = j / 10;
	}
	while (t == 1 && k)
	{
		if (k % 10 == 2 || k % 10 == 4)
		{
			t = 0;
			break;
		}
		else
			k = k / 10;
	}
	return t;
}

int main()
{
	int i, j, k;
	long long sum = 0;
	for (i = 1; i <= 672; i++)
	{
		for (k = 674; k <= 2017; k++)
		{
			j = 2019 - i - k;
			if ((i < j && j < k) && (panduan(i, j, k) == 1))
				sum++;
		}
	}
	printf("%I64d\n", sum);
	system("pause");
	return 0;
}
