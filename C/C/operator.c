//
//  operator.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void func1() {
    int a = 21;
    int b = 10;
    int c;
    
    c = a + b;
    printf("Line 1 - c的值是%d\n", c);
    c = a - b;
    printf("Line 2 - c的值是%d\n", c);
    c = a * b;
    printf("Line 3 - c的值是%d\n", c);
    c = a / b;
    printf("Line 4 - c的值是%d\n", c);
    c = a % b;
    printf("Line 5 - c的值是%d\n", c);
    c = a++;
    printf("Line 6 - c的值是%d\n", c);
    c = a--;
    printf("Line 7 - c的值是%d\n", c);
}

void func2() {
    int c;
    int a = 10;
    c = a++;
    printf("先賦值後運算：\n");
    printf("Line 1 - c的值是%d\n", c);
    printf("Line 2 - a的值是%d\n", a);
    a = 10;
    c = a--;
    printf("Line 3 - c的值是%d\n", c);
    printf("Line 4 - a的值是%d\n", a);
    
    printf("先運算後賦值：\n");
    a = 10;
    c = ++a;
    printf("Line 5 - c的值是%d\n", c);
    printf("Line 6 - a的值是%d\n", a);
    a = 10;
    c = --a;
    printf("Line 7 - c的值是%d\n", c);
    printf("Line 8 - a的值是%d\n", a);
}

void func3() {
    int a = 21;
    int b = 10;
    int c;
    if (a == b) {
        printf("Line 1 - a等於b\n");
    }
    else
    {
        printf("Line 1 - a 不等于 b\n" );
    }
    if ( a < b )
    {
        printf("Line 2 - a 小于 b\n" );
    }
    else
    {
        printf("Line 2 - a 不小于 b\n" );
    }
    if ( a > b )
    {
        printf("Line 3 - a 大于 b\n" );
    }
    else
    {
        printf("Line 3 - a 不大于 b\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        printf("Line 4 - a 小于或等于 b\n" );
    }
    if ( b >= a )
    {
        printf("Line 5 - b 大于或等于 b\n" );
    }
}

void func4() {
    int a = 5;
    int b = 20;
    int c ;
    
    if ( a && b )
    {
        printf("Line 1 - 条件为真\n" );
    }
    if ( a || b )
    {
        printf("Line 2 - 条件为真\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        printf("Line 3 - 条件为真\n" );
    }
    else
    {
        printf("Line 3 - 条件不为真\n" );
    }
    if ( !(a && b) )
    {
        printf("Line 4 - 条件为真\n" );
    }
}

void func5() {
    /*
         &:值相同取本身，值不同取0;
         |:值相同取本身，值不同取1；
         ^:值相同取0，值不同1；
         ~：值翻轉，即0變成1，1變成0；
         <<: 左操作数的值向左移动右操作数指定的位数
         >>: 左操作数的值向右移动右操作数指定的位数
     */
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;
    
    c = a & b; /* 12 = 0000 1100 */
    printf("Line 1 - c 的值是%d\n", c);
    
    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - c 的值是 %d\n", c );
    
    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Line 3 - c 的值是 %d\n", c );
    
    c = ~a;          /*-61 = 1100 0011 */
    printf("Line 4 - c 的值是 %d\n", c );
    
    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - c 的值是 %d\n", c );
    
    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - c 的值是 %d\n", c );
}

void func6() {
    int a = 21;
    int c ;
    
    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
    
    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
    
    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
    
    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
    
    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
    
    c  = 200;
    c %=  a;
    printf("Line 6 - %= 运算符实例，c 的值 = %d\n", c );
    
    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
    
    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
    
    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
    
    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
    
    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
}

void func7() {
    int a = 4;
    short b;
    double c;
    int *ptr;
    
    //sizeof運算符實例
    printf("Line 1 - 變量 a 的大小 = %lu\n", sizeof(a));
    printf("Line 2 - 變量 b 的大小 = %lu\n", sizeof(b));
    printf("Line 3 - 變量 c 的大小 = %lu\n", sizeof(c));
    
    //& 和 *運算符實例
    ptr = &a;
    printf("a 的值是%d\n", a);
    printf("*ptr是%d\n", *ptr);
    
    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20: 30;
    printf( "b 的值是 %d\n", b );
    
    b = (a == 10) ? 20: 30;
    printf( "b 的值是 %d\n", b );

}

void func8() {
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;
    
    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("(a + b) * c / d 的值是 %d\n",  e );
    
    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("((a + b) * c) / d 的值是 %d\n" ,  e );
    
    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("(a + b) * (c / d) 的值是 %d\n",  e );
    
    e = a + (b * c) / d;     //  20 + (150/5)
    printf("a + (b * c) / d 的值是 %d\n" ,  e );
}

void operator() {
//    func1();
    
//    func2();
    
//    func3();
    
//    func4();
    
//    func5();
    
//    func6();
    
//    func7();
    
    func8();
}
