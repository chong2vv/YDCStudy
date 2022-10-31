//
// Created by 王远东 on 2022/10/31.
//

#include "stdio.h"

enum
{
    mon = 1, tue, wed
}day;

enum DAY
{
    mon1 = 1, tue1, wed1
};

enum DAY2
{
    mon2 = 1, tue2, wed2
} day2;

void printfEnum() {
    day = mon;
    printf("%d", day);

    enum DAY day1 = tue1;
    printf("%d", day1);
    day2 = wed2;
    printf("%d", day2);
}

