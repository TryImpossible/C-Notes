//
//  error.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;
void error1() {
    FILE *pf;
    int errnum;
    pf = fopen("/Users/barry/Desktop/unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "錯誤號： %d\n", errno);
        perror("通過perror輸出錯誤");
        fprintf(stderr, "打開文件錯誤： %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
}

void error2() {
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if (divisor == 0) {
        fprintf(stderr, "除數為0 退出運行...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient變量的值為：%d\n", quotient);
    exit(EXIT_SUCCESS);
}

void error() {
//    error1();
    error2();
}
