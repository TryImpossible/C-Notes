//
//  intoutput.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>

void inoutput() {
//    int testInteger = 5;
//    printf("Number = %d\n", testInteger);
    
//    float f;
//    printf("Enter a Number: ");
//    scanf("%f", &f);
//    printf("Value = %f\n", f);
    
//    int c;
//    printf("Enter a value:");
//    c = getchar();
//    printf("\nYou entered:");
//    putchar(c);
//    printf("\n");
    
//    char str[100];
//    printf("Enter a value:");
//    gets(str);
//    printf("\nYou entered:");
//    puts(str);
    
//    char str[100];
//    int i;
//    printf("Enter a value:");
//    scanf("%s %d", str, &i);
//    printf("\nYou entered: %s %d", str, i);
//    printf("\n");
    
    char str[100];
    printf("Enter a value:");
    fgets(str, 100, stdin);
    printf("\nYou entered:");
    fputs(str, stdout);
    printf("\n");
    
}
