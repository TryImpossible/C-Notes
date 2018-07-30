//
//  union.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};
void union_func1() {
    union Data data;
    printf("Memory size occupied by data: %lu\n", sizeof(data));
    
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");
    printf("data.i : %d\n", data.i);
    printf("data.i : %f\n", data.f);
    printf("data.i : %s\n", data.str);
}

void union_func2() {
    union Data data;
    data.i = 10;
    printf("data.i : %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f : %f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
}

void union_func() {
//    union_func1();
    
    union_func2();
    
//    union Data{
//        int i;
//        float f;
//        char str[9];
//        double d;
//    }data;
//    printf("Memory size occupied by data: %lu\n", sizeof(data));
}
