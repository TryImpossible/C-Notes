//
//  typedef.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;
void typedef_func1() {
    Book book;
    strcpy( book.title, "C 教程");
    strcpy( book.author, "Runoob");
    strcpy( book.subject, "编程语言");
    book.book_id = 12345;
    
    printf( "书标题 : %s\n", book.title);
    printf( "书作者 : %s\n", book.author);
    printf( "书类目 : %s\n", book.subject);
    printf( "书 ID : %d\n", book.book_id);
}


#define TRUE 1
#define FALSE 0
void typedef_func2() {
    printf("TRUE 的值是：%d\n", TRUE);
    printf("FALSE 的值是：%d\n", FALSE);
}


void typedef_func() {
    typedef unsigned char BYTE;
    BYTE b1, b2;
    
//    typedef_func1();
    
//    typedef_func2();
    
//    #define INTERGE int
//    unsigned INTERGE n;
//    typedef int INTERGE;
//    unsigned INTERGE n;
//
//    #define PTR_INT int *
//    PTR_INT p1, p2;        //p1、p2 类型不相同，宏展开后变为int *p1, p2;
//    typedef int * PTR_INT
//    PTR_INT p1, p2;        //p1、p2 类型相同，它们都是指向 int 类型的指针。

}
