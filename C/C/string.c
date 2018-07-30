//
//  char.c
//  C
//
//  Created by barry on 2018/3/19.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void str_func1() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting2[] = "Hello";
    printf("Greeting message: %s\n", greeting);
    printf("Greeting message: %s\n", greeting2);
}

void str_func2() {
    char str1[12] = "Hello";
//    char str1[12] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[12] = "World";
    char str3[12];
    int len;
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);

    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);

    len = strlen(str1);
    printf("strlen(str1): %d\n", len);
    
    char *index;
//    index = strstr(str1, "el");
    index = strchr(str1, 'l');
    printf("l 在 Hello中出現的位置：%s\n", index);
}

void string(){
//    str_func1();
    
    str_func2();
}
