//
//  for.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void for_func_1(){
    int a = 10;
    while (a < 20) {
        printf("a 的值：%d\n", a);
        a++;
    }
}

void for_func_2() {
    for (int a = 10; a < 20; a++) {
        printf("a的值：%d\n", a);
    }
}

void for_func_3() {
    int a = 10;
    do {
        printf("a 的值：%d\n", a);
        a++;
    } while (a < 20);
}

void for_func_4() {
    int i, j;
    for (i = 2; i < 100; i++) {
        for (j = 2; j < (i/j); j++) {
            printf("i/j = %d\n", (i/j));
            printf("i%j = %d\n", (i%j));
            if (!(i%j)) {
                break;
            }
        }
        if (j > (i/j)) {
            printf("%d 是質數\n", i);
        }
    }
}

void for_func_5() {
    int i = 1, j;
    while (i <= 5) {
        j = 1;
        while (j <= i) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
}

void for_func_6() {
    int i = 1, j;
    do {
        j = 1;
        do {
            printf("*");
            j++;
        } while (j <= i);
        i++;
        printf("\n");
    } while (i <= 5);
}

void for_func_7() {
    int a = 10;
    while (a < 20) {
        printf("a 的值：%d\n", a);
        a++;
        if (a > 15) {
            break;
        }
    }
}

void for_func_8() {
    int a = 10;
    do {
        if (a == 15) {
            a = a + 1;
            continue;
        }
        printf("a的值：%d\n", a);
        a++;
    } while (a < 20);
}

#include <math.h>
void for_func_9() {
    int i,j;
    printf("100以内的素数有：\n");
    for(i=2;i<100;i++){
        for (j=2;j<100;j++) {
            if (i%j==0) break;
        }
        if (i <= j) {
            printf("%d \t", i);
        }
        
        for(j=2;j<sqrt(i);j++){
            if(i%j==0){
                break;
            }
        }
        if(j>sqrt(i)){
            printf("%d,\t",i);
        }
    }
}

void for_func() {
//    for_func_1();

//    for_func_2();
    
//    for_func_3();
    
//    for_func_4();
    
//    for_func_5();
    
//    for_func_6();
    
//    for_func_7();
    
//    for_func_8();
    
    for_func_9();
}

