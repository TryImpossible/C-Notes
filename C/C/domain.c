//
//  domain.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;
void domain_func1() {
    printf( "Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %lu\n", sizeof(status2));
}

struct {
    unsigned int age : 3;
} Age;
void domain_func2() {
    Age.age = 4;
    printf("Sizeof (Age) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);
    
    Age.age = 7;
    printf("Age.age : %d\n", Age.age);
    
    Age.age = 8;
    printf("Age.age : %d\n", Age.age);
}

void domain() {
    domain_func2();
}
