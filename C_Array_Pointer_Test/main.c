//
//  main.c
//  C_Array_Pointer_Test
//
//  Created by Xiao Xiang on 16/2/26.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 3;
    int b = 2;
    int array[3];
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    int *p = &a;
    int i;
    for (i = 0; i < 10; i++){
        printf("*p = %d\n", *p);
        p++;
    }
    printf("-------------------------------\n");
    p = &a;
    for (i = 0; i < 10; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }
    return 0;
}
