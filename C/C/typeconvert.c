//
//  typeconvert.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void typeconvert1() {
    int sum = 17, count = 5;
    double mean;
    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean);
}

void typeconvert() {
    typeconvert1();
    
//    char* c = 'x';
//    printf ("%d",*(int *)c);
}
