//
//  pointer.c
//  C
//
//  Created by barry on 2018/3/19.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void pointer_func1() {
    int var1;
    char var2[10];
    
    printf("var1 變量的地址：%p\n", &var1);
    printf("var2 變量的地址：%p\n", &var2);
}

void pointer_func2() {
    int var = 20; //實際變量的聲明
    int *ip; //指針變量的聲明
    
    ip = &var; //在指針變量中存儲var的地址
    printf("Address of var variable: %p\n", &var);
    
    //在指針變量中存儲的地址
    printf("Address stored in ip variable: %p\n", ip);
    
    //使用指針訪問值
    printf("Value of *ip variable: %d\n", *ip);
}

void pointer_func3() {
    int *ptr = NULL;
    if (ptr) {
        printf("p非空\n");
    }
    if (!ptr) {
        printf("p為空\n");
    }
    printf("ptr的值是%p\n", ptr);
    
}

const int MAX = 3;
void pointer_func4() {
    int var[] = {10, 100, 1000};
    int i, *ptr;
    
//    ptr = var;
//    for (i = 0; i < MAX; i++) {
//        printf("存儲地址： var[%d] = %x\n", i, ptr);
//        printf("存儲地址： var[%d] = %d\n", i, *ptr);
//
//        ptr++;
//    }
    
//    ptr = &var[MAX - 1];
//    for (i = MAX; i > 0; i--) {
//        printf("存儲地址： var[%d] = %x\n", i-1, ptr);
//        printf("存儲地址： var[%d] = %d\n", i-1, *ptr);
//
//        ptr--;
//    }
    
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1]) {
        printf("存儲地址： var[%d] = %x\n", i, ptr);
        printf("存儲地址： var[%d] = %d\n", i, *ptr);
        
        ptr++;
        i++;
    }
}

void pointer_func5() {
    int var[] = {10, 100, 1000};
    int i, *ptr[MAX];
    
    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
}

const int SIZE = 4;
void pointer_func6() {
    char *names[] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
}

void pointer_func7() {
    int var;
    int *ptr;
    int **pptr;
    
    var = 3000;
    ptr = &var;
    pptr = &ptr;
    
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
}

void pointer_func8(unsigned long *par) {
    *par = time(NULL);
    return;
}

double pointer_func9(int *arr, int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
        sum += arr[i];
    }
    avg = (double)sum / size;
    return avg;
}

int *getRandom() {
    static int r[10];
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }
    return r;
}

void Test(char *a, int b) {
    printf("%s\n", a);
    char *p = (char*)&a;
    a != *p;
    printf("%p %p %p %p\n", &a, p, a, *p);
    printf("%p\n",&b);
}

void pointer() {
//    pointer_func1();
    
    int *ip;
    double *dp;
    float *fp;
    char *ch;
    
//    pointer_func2();
    
//    pointer_func3();
    
//    pointer_func4();
    
//    pointer_func5();
    
//    pointer_func6();
    
//    pointer_func7();
    
//    unsigned long sec;
//    pointer_func8(&sec);
//    printf("Number of seconds: %ld\n", sec);
    
//    int balance[5] = {1000, 2, 3, 17, 50};
//    double avg;
//
//    avg = pointer_func9(balance, 5);
//    printf("Average value is: %f\n", avg);
    
//    int *p;
//    int i;
//    p = getRandom();
//    for (i = 0; i < 10; i++) {
//        printf("*(p + [%d]): %d\n", i, *(p + i));
//    }
    
//    Test("Hello", 16);
    //指针转换问题
     char *a="Hello";//&a变量里面存储着a所指向的变量地址
     //char **p=&a;
     char *b=(char*)&a;
     char **p=&a;
     printf("%p %p %p %p\n",&a,b,a,*b);
     printf("%p %c\n",&(*a),*(&(*(a+1))));
     printf("%p %c\n",a,*a);//此时a->H，*a=H;
     printf("%p %c\n",(*p),*(*p));
     //p=&a,*p=a所指向的第一个元素的地址还需要一解才能访问正确数据
     //所以1级指针需要解2次 所以进行强制转换
     printf("%c \n",*(*(char**)b));
     //原试解 现在b=&a,*b= &a->a所以如果此时想正确访问H必须在解
}

