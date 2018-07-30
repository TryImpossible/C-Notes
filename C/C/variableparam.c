//
//  variableparam.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...) {
    va_list valist;
    double sum = 0.0;
    int i;
    //為num個參數初始化valist
    va_start(valist, num);
    //訪問所有賦給valist的參數
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }
    //清理為valist保留的內容
    va_end(valist);
    return sum / num;
}

void debug_arg(unsigned int num, ...) {
    unsigned int i = 0;
    unsigned int *addr;
    for (i = 0; i <= num; i++) {
        printf("i=%d, value=%d\r\n", i, *(addr + i));
    }
}

#ifdef X64
#define t long long
#else
#define t int
#endif

void variableparam() {
//    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
//    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
    
    debug_arg(3, 66, 88, 666);
}
