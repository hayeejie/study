/*
 * @Author: hayee
 * @Date: 2022-03-17 16:38:25
 * @LastEditTime: 2022-03-17 16:45:55
 * @LastEditors: hayee
 * @Github: hayeejie
 * @FilePath: \github\摸底考试测试题\门牌制作.c
 * @ProgramDescription: 
 * 千山我独行,不必相送
 */
#include <stdio.h>
int main()
{
    int ans = 0;
    for (int i = 0; i <= 2020;i++)
    {
        int k = i;
        while(k)
        {
            if(k%10==2)
                ans++;
            k = k / 10;
        }
    }
    printf("总共需要%d个字符2", ans);
    return 0;
}