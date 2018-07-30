//
//  callbackfunc.c
//  C
//
//  Created by barry on 2018/3/19.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>

int getmax(int x, int y) {
    return x > y ? x : y;
}

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNextValue();
    }
}

int getNextRandomValue(void) {
    return rand();
}

void callbackfunc() {
//    int (*p)(int, int) = &getmax;
//    int a, b, c, d;
//    printf("請輸入三個數字：");
//    scanf("%d %d %d", &a, &b, &c);
//    d = p(p(a,b), c);
//    printf("最大的數字是：%d\n", d);
    
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
}
