//
// Created by 黎圣  on 2023/5/7.
//
#include "stdio.h"
//int main()
//{
//    int a = 20;//4个字节-32bit
//    //原码：00000000000000000000000000010100
//    //反码：00000000000000000000000000010100
//    //补码：0000 0000 0000 0000 0000 0000 0001 0100
//    //十六进制：0x00000014
//
//    int b = -10;
//    //原码：10000000000000000000000000001010
//    //反码：11111111111111111111111111110101
//    //补码：1111 1111 1111 1111 1111 1111 1111 0110
//    //十六进制：0xfffffff6
//
//    return 0;
//}
//C语言类型
//1.内置类型
//char short int long float double
//整形：char:unsigned char;signed char
//short int long
//浮点型:float:单精度浮点型 double:双精度浮点型
//2.自定义类型（构造类型）
//数组类型 struct enum union
//指针类型
//空类型


//计算机中的有符号数有三种表示方法，即原码、反码、补码  正数和无符号数的原码、反码、补码相同
//原码：直接将数字按照正负数的形式翻译成二进制
//反码：原码符号位不变，其他位依次按位取反
//补码：反码+1
//整数在内存中存的是二进制序列的补码

//大端存储模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
//小端存储模式，是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中


//int check_sys()
//{
//    int a = 1;
//    char *p = (char*)&a;
//    return *p;
//}
//int main()
//{
//    //写一段代码告诉我们当前机器的字节序
//    //如果小端则返回1
//    //如果大端则返回0
//    int ret = check_sys();
//    if(ret == 1)
//        printf("小端");
//    else
//        printf("大端");
//    return 0;
//}

//int main()
//{
//    char a = -1;//-1
//    //11111111
//    //11111111111111111111111111111111 - 整形提升后
//    //有符号位的char在整形提升时高位补1
//    signed char b = -1;//-1
//    //11111111
//    //11111111111111111111111111111111 - 整形提升后
//
//    unsigned char c = -1;//255
//    //11111111
//    //00000000000000000000000011111111 - 整形提升后
//    //无符号位的char在整形提升时高位补0
//    printf("%d\n%d\n%d\n", a, b, c);
//    return 0;
//}

//int main()
//{
//    char a= -128;
//    //10000000000000000000000010000000
//    //11111111111111111111111101111111
//    //11111111111111111111111110000000 - 补码
//    //11111111111111111111111110000000 - 整形提升后的补码
//    //无符号数的原反补相同
//
//    printf("%u\n", a);//%u打印十进制的无符号数
//    return 0;
//}

//有符号的char范围是：-128 -> 127，最高位是符号位
//无符号的char范围是：0 -> 255，最高位不是符号位

//int main()
//{
//    unsigned int i;
//    for(i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//    }
//    return 0;
//}

//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}

int main()
{
    float f = 5.5;
    //5.5
    //101.1 - 二进制
    //(-1)^0 * 1.011 * 2^2

    return 0;
}
