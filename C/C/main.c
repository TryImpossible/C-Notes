//
//  main.c
//  C
//
//  Created by barry on 2018/3/15.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

//    printf("char存儲大小：%lu\n", sizeof(char));
//    printf("unsigned char存儲大小：%lu\n", sizeof(unsigned char));
//    printf("signed char存儲大小：%lu\n", sizeof(signed char));
//    printf("short存儲大小：%lu\n", sizeof(short));
//    printf("unsinged short存儲大小：%lu\n", sizeof(unsigned short));
//    printf("int存儲大小：%lu\n", sizeof(int));
//    printf("unsigned int存儲大小：%lu\n", sizeof(unsigned int));
//    printf("long存儲大小：%lu\n", sizeof(long));
//    printf("unsigned long存儲大小：%lu\n", sizeof(unsigned long));
//
//    printf("float存儲大小：%lu\n", sizeof(float));
//    printf("double存儲大小：%lu\n", sizeof(double));
//    printf("long double存儲大小：%lu\n", sizeof(long double));

    printf("Program name %s\n", argv[0]);
    if (argc == 2) {
        printf("The argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
    
//    printf("Hello, World!\n");

//    datatype(); //數據類型

//    new_variable(); //變量

//    constant(); //常量

//    storage(); //存儲類

//    operator(); //運算符

//    if_func(); //判斷

//    for_func(); //循環

//    function(); //函數

//    scope(); //作用域

//    array(); //數組

//    pointer(); //指針

//    callbackfunc(); //函數指針與囘調函數

//    string(); //字符串

//    struct_func(); //結構體

//    union_func(); //共用體

//    domain(); //位域

//    typedef_func(); //typedef

//    inoutput(); //輸入&輸出

//    fs(); //文件讀寫

//    preprocessor(); //預處理器

//    header(); //頭文件

//    typeconvert(); //類型轉換

//    error(); //錯誤處理

//    recursion(); //遞歸

//    variableparam(); //可變參數

//    memory(); //內存管理

//    command(); //命令行參數

    return 0;
}




