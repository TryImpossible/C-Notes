//
//  fs.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void fs_func1() {
    FILE *fp = NULL;
    fp = fopen("/Users/barry/Desktop/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}

void fs_func2() {
    FILE *fp = NULL;
    char buff[255];
    fp = fopen("/Users/barry/Desktop/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);
    
    fgets(buff, sizeof(buff), fp);
    printf("2: %s\n", buff);
    
    fgets(buff, sizeof(buff), fp);
    printf("3: %s\n", buff);
    fclose(fp);
}

void fs_func3() {
    FILE *fp = NULL;
    fp = fopen("/Users/barry/Desktop/test.txt", "r+");
    fprintf(fp, "This is testing for fprintf...\n");
    fseek(fp, 10, SEEK_SET);
    if (fputc(65, fp) == EOF) {
        printf("fputc fail");
    }
    fclose(fp);
}

void fs() {
//    fs_func1();
    
//    fs_func2();
    
    fs_func3();
}
