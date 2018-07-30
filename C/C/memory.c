//
//  memory.c
//  C
//
//  Created by barry on 2018/3/20.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void memory1() {
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");
    
    //動態分配內存
//    description = malloc(200 * sizeof(char));
    description = calloc(200, sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara Ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}

void memory2() {
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");

    //動態分配內存
    description = malloc(3 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student");
    }
    //假設您想要存儲更大的描述信息
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    
    free(description);
}

void memory() {
//    memory1();
    memory2();
}
