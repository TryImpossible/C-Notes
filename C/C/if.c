//
//  if.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void if_func_1() {
    /* 局部变量定义 */
    int a = 10;
    
    /* 使用 if 语句检查布尔条件 */
    if( a < 20 )
    {
        /* 如果条件为真，则输出下面的语句 */
        printf("a 小于 20\n" );
    }
    printf("a 的值是 %d\n", a);
}

void if_func_2() {
    /* 局部变量定义 */
    char grade = 'B';
    
    switch(grade)
    {
        case 'A' :
            printf("很棒！\n" );
            break;
        case 'B' :
        case 'C' :
            printf("做得好\n" );
            break;
        case 'D' :
            printf("您通过了\n" );
            break;
        case 'F' :
            printf("最好再试一下\n" );
            break;
        default :
            printf("无效的成绩\n" );
    }
    printf("您的成绩是 %c\n", grade );
}

void if_func_3() {
    /* 局部变量定义 */
    int a = 100;
    int b = 200;
    
    switch(a) {
        case 100:
            printf("这是外部 switch 的一部分\n");
            switch(b) {
                case 200:
                    printf("这是内部 switch 的一部分\n");
            }
    }
    printf("a 的准确值是 %d\n", a );
    printf("b 的准确值是 %d\n", b );
    
}

void if_func() {
//    if_func_1();
    
//    if_func_2();
    
    if_func_3();
}
