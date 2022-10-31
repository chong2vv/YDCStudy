//
// Created by 王远东 on 2022/10/31.
//

#include "stdio.h"

void creatList() {
    int list[10];
    for (int i = 0; i < 10; ++i) {
        list[i] = i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("Element[%d] = %d\n", i, list[i] );
    }
}