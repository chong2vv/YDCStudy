//
// Created by 王远东 on 2022/10/31.
//
#include "stdio.h"
#define defVal 2
const int defVal2 = 3;

int x;
int y;

int addtwonum() {
    printf("%d, %d \n", x, y);
    if (x == 1) {
        return defVal2;
    } else if (x == 2) {
        return defVal2;
    }
    return x+y;
}