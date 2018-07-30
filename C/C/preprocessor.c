//
//  preprocessor.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

#define MAX_ARRAY_LENGTH 20

#undef FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
    #define MESSAGE "You wish!"
#endif

#ifdef DEBUG
    /* Your debugging statements here */
#endif

#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n");
void preprocessor_func1() {
    message_for(Carole, Debra);
}

#define tokenpaster(n) printf("token" #n " = %d\n", token##n);
void preprocessor_func2() {
    int token35 = 42;
    tokenpaster(35);
}

#if !defined (MESSAGE)
    #define MESSAGE "You wish!"
#endif
void preprocessor_func3() {
    printf("Here is the message: %s\n", MESSAGE);
}

#define MAX(x,y) ((x) > (y) ? (x) : (y))
void preprocessor_func4() {
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));
}

#define square(x) ((x) * (x))
#define square_1(x) (x * x)
void preprocessor_func5() {
    printf("square 5+4 is %d\n", square(5+4));
    printf("square_1 5+4 is %d\n", square_1(5+4));
}

#define MAX(x, y) ((x>y)?(x):(y))
#define SWAP1(x, y) {x=x+y;y=x-y;x=x-y;}
#define SWAP2(x, y) {x=x^y;y=x^y;x=x^y;}
void preprocessor_func6() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max number is:%d\n",MAX(a,b));
    printf("交换前：x=%d,y=%d\n",a,b);
    SWAP1(a,b);
    printf("交换后：x=%d,y=%d\n",a,b);
    SWAP2(a,b);
    printf("再次交换后：x=%d,y=%d\n",a,b);
}

void preprocessor() {
//    printf("File: %s\n", __FILE__);
//    printf("Date: %s\n", __DATE__);
//    printf("Time: %s\n", __TIME__);
//    printf("Line: %d\n", __LINE__);
//    printf("ANSI: %d\n", __STDC__);
  
//    preprocessor_func1();
    
//    preprocessor_func2();
    
//    preprocessor_func3();
    
//    preprocessor_func4();
    
//    preprocessor_func5();
    
    preprocessor_func6();
}
