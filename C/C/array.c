//
//  array.c
//  C
//
//  Created by barry on 2018/3/17.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>



void one_array() {
    int n[10];
    int i, j;
    for (i = 0; i < 10; i++) {
        n[i] = 100 + i;
    }
    for (j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
}

void two_array() {
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("a[%d][%d]=%d\n", i, j, a[i][j]);
        }
    }
}

void three_array() {
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("a[%d][%d]=%d\n", i, j, a[i][j]);
        }
    }
}

double getAverage(int arr[], int size) {
    int i;
    double avg;
    double sum;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}

void array() {
//    one_array();
    
//    two_array();
    
//    int i;
//    char names[6][50]={{"马超"},"关平","赵云","张飞","关羽","刘备"};
//    for(i=0;i<6;i++)  {
//        printf("悍将名称：%s\n",names[i]);
//    }
    
//    three_array();
    
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance, 5);
    printf("平均值是： %f\n", avg);
}
