//
//  function.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

static void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
//    printf("x = %d, y = %d", x, y);
}

void enter(char str[100]) { //定義外部函數enter
    fgets(str, 100, stdin);
}

void print(char str[]) { //定義外部函數print
    printf("%s\n", str);
}

static void delete_string(char str[], char ch) {
    int i, j;
    for(i = j = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j]='\0';
}

int DoMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
        if (c > max) {
            max = c;
        }
    } else {
        if (c > max) {
            max = c;
        }
    }
    return max;
}

void function() {
    
    printf("Max Value is %d\n", DoMax(1, 2, 3));
    
//    extern void enter(char str[]); //對函數的聲明
//    extern void print(char str[]); //對函數的聲明
//    char c, str[100];
//    printf("請輸入字符數組：");
//    enter(str);
//    print("請輸入要刪除的字符：");
//    scanf("%c", &c);
//    delete_string(str, c);
//    printf("刪除後的字符數組：");
//    print(str);
    
//    printf("Max value is :：%d\n", max(1, 2));
    
//    int a = 100, b = 200;
//    printf("交换前，a 的值： %d\n", a );
//    printf("交换前，b 的值： %d\n", b );
//    swap(&a, &b);
//    printf("交换後，a 的值： %d\n", a );
//    printf("交换後，b 的值： %d\n", b );
}
