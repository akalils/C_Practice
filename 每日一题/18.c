//
// Created by 黎圣  on 2023/9/10.
//
/*
 * 题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过癮，又多吃了一个
 * 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
 * 到第10天早上想再吃时，见只剩下一个桃子了。
 * 求第一天共摘了多少。
 */
#include "stdio.h"
int main()
{
    int x = 1;
    int y = 0;
    int day;
    for (day = 9; day >= 1; day--)
    {
        y = (x + 1) * 2;
        x = y;
    }
    printf("%d", y);
    return 0;
}
