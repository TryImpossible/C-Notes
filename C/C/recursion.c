//
//  recursion.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

double factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int fibonaci(int i) {
    if (i == 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    return factorial(i - 1) + factorial(i - 2);
}

void recursion() {
//    int i = 15;
//    printf("%d的階乘為%f\n", i, factorial(i));
    
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\t\n", fibonaci(i));
    }
}
