//
//  struct.c
//  C
//
//  Created by barry on 2018/3/19.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

void printBook(struct Books *book);

void struct_func1() {
    struct Books Book1;
    struct Books Book2;
    
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;
    
    /* Book2 详述 */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;
    
//    /* 输出 Book1 信息 */
//    printf( "Book 1 title : %s\n", Book1.title);
//    printf( "Book 1 author : %s\n", Book1.author);
//    printf( "Book 1 subject : %s\n", Book1.subject);
//    printf( "Book 1 book_id : %d\n\n", Book1.book_id);
//
//    /* 输出 Book2 信息 */
//    printf( "Book 2 title : %s\n", Book2.title);
//    printf( "Book 2 author : %s\n", Book2.author);
//    printf( "Book 2 subject : %s\n", Book2.subject);
//    printf( "Book 2 book_id : %d\n", Book2.book_id);
    
    printBook(&Book1);
    printBook(&Book2);
    
}

void printBook(struct Books *book) {
    printf("Book title: %s\n", book->title);
    printf("Book author: %s\n", book->author);
    printf("Book subject: %s\n", book->subject);
    printf("Book book_id: %d\n", book->book_id);
    printf("\n");
}

void struch_func2() {
    struct bs {
        unsigned a: 1;
        unsigned b: 3;
        unsigned c: 4;
    }bit, *pbit;
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d, %d, %d\n", bit.a, bit.b, bit.c);
    pbit = &bit;
    pbit -> a=0;
    pbit -> b &= 3;
    pbit -> c &= 1;
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
    
//    struct packed_struct{
//        unsigned int f1: 1;
//        unsigned int f2: 1;
//        unsigned int f3: 1;
//        unsigned int f4: 1;
//        unsigned int type: 4;
//        unsigned int my_int: 9;
//    } pack;
}     

void struct_func3() {
    typedef struct {
        unsigned char a;
        unsigned int b;
        unsigned char c;
    } debug_size1_t;
    
    typedef struct {
        unsigned char a;
        unsigned char b;
        unsigned int c;
    } debug_size2_t;
    
    printf("debug_size1_t size=%lu,debug_size2_t size=%lu\r\n", sizeof(debug_size1_t), sizeof(debug_size2_t));

}

#define MAXTITL 41
#define MAXAUTL 31
#define MAVXBKS 100
char *s_gets(char *st, int n);
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void struct_func4() {
    struct book library[MAVXBKS];
    int i;
    int index;
    printf("請問你要錄入多少本書的信息\n");
    do {
        scanf("%d", &index);
    } while (index > MAVXBKS);
    getchar();
    for (i = 0; i < index; i++) {
        printf("請輸入第%d本書的名稱：\n", i+1);
        s_gets(library[i].title, MAXTITL);
        printf("輸入作者的名字：\n");
        s_gets(library[i].author, MAXAUTL);
        printf("請輸入書本的價格：\n");
        scanf("%f", &library[i].value);
        getchar();
    }
    for (i = 0; i < index; i++) {
        printf("%d\t%s 是 %s 寫的定價為%f元\n", i, library[i].title, library[i].author, library[i].value);
    }
    system("pause");
}

char *s_gets(char *st, int n) {
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    //查找换行符
        if (find)    //  查找地址不为空
            *find = '\0';    //在此处放入一个空字符
        else
            while (getchar() != '\n')
                continue;    //处理剩余字符
    }
    return ret_val;
}

void struct_func() {
//    struct_func1();
    
//    struch_func2();
    
//    struct_func3();
    
    struct_func4();
}
