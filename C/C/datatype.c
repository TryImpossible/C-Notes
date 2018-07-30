//
//  data_type.c
//  C
//
//  Created by barry on 2018/3/16.
//  Copyright © 2018年 barry. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void datatype() {
    //    printf("char存儲大小：%lu\n", sizeof(char));
    //    printf("short存儲大小：%lu\n", sizeof(short));
    //    printf("int存儲大小：%lu\n", sizeof(int));
    //    printf("float存儲大小：%lu\n", sizeof(float));
    //    printf("double存儲大小：%lu\n", sizeof(double));
    //    printf("long存儲大小：%lu\n", sizeof(long));
    //
    //    printf("long double存儲大小：%lu\n", sizeof(long double));
    
    //    //引入float.h 浮點類型
    //    printf("float存儲最大字節數：%lu\n", sizeof(float));
    //    printf("float最小值：%E\n", FLT_MIN);
    //    printf("float最大值：%E\n", FLT_MAX);
    //    printf("精度值：%d\n", FLT_DIG);
    
    float f, x = 3.6, y = 5.2;
    int i = 4, a, b;
    a = x + y;
    b = (int)(x+y);
    f = 10 / i;
    printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);
    
}

