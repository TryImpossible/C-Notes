//
//  storage.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void autoFunc() {
    auto int i = 9;
    printf("%d\n", i);
    getchar();
}

#include <time.h>
#define TIME 1000000000
int m, n = TIME; //全局變量
void registerFunc() {
    time_t start, stop;
    register int a, b = TIME; //寄存器變量
    int x, y = TIME; //一般變量
    
    time(&start);
    for (a = 0; a < b; a++);
    time(&stop);
    printf("寄存器變量用時：%ld秒\n", stop - start);
    
    time(&start);
    for (x = 0; x < y; x++);
    time(&stop);
    printf("一般變量用時：%ld秒\n", stop - start);
    
    time(&start);
    for (m = 0; m < n; m++);
    time(&stop);
    printf("全局變量用時：%ld秒\n", stop - start);
}

void staticFunc() {
    static int a = 1; a++;
    printf("%d\n", a);
}

void staticFunc2() {
    int var = 0;
    static int static_var = 0;
    printf("var equal:%d\n", var);
    printf("static_var equal:%d\n", static_var);
    printf("");
    var++;
    static_var++;
    //static修飾的局部變量只初始化一次
}

void storage() {
//    autoFunc();
    
//    registerFunc();
    
//    staticFunc();
//    staticFunc();
    
    int i;
    for (i = 0; i < 3; i++) {
        staticFunc2();
    }
}
