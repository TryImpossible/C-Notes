//
//  scope.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

int test(int, int);

int g = 20;
void scope() {
    
//    /* 局部變量聲明 */
//    int a, b;
//    int c;
//    /* 實際初始化 */
//    a = 10;
//    b = 20;
//    c = a + b;
//    printf("Value of a = %d, b= %d and c = %d\n", a, b, c);
    
    int g = 10;
    printf("Value of g = %d\n", g);
    
//    int a, b;
//    printf("%d\n",test(5, 3));
}

int test(int a, int b) {
    a = a + b;
    return a;
}
