//
//  variable.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

//變量聲明
extern int a, b;
extern int c;
extern float f;

void new_variable() {
    /* 變量定義 */
    int a, b;
    int c, d;
    float f;
    
    /* 初始化 */
    a = 10;
    b = 20;
    
    c = a + b;
    printf("Value of c:%d\n", c);
    
    f = 70.0 / 3.0;
    printf("value of f:%f\n", f);
    
    printf("a的地址是%p\nb的地址是%p\n", &a, &b);
    
    printf("d的值是%d\n", d);
    
}


//#define LENGTH 10
//#define WIDTH 5
//#define NEWLINE '\n'
void constant() {
    const int a = 85; //十進制
    const int b = 0213; //八進制
    const int c = 0x4b; //十六進制
    const int d = 30; //整數
    const int e = 30u; //無符號整數
    const int f = 30l; //長整數
    const int g = 30ul; //無符號長整數
    
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    
    printf("%c,%c,%c,%c", 0101, '\101', '\x41', 'A');
}
