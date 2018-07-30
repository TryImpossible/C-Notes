//
//  commandline.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>


void commandline(int argc, const char * argv[]) {
    if (argc == 2) {
        printf("The argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
}
