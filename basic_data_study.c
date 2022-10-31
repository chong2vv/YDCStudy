//
// Created by 王远东 on 2022/10/31.
//

#include "stdio.h"


extern int x;
extern int y;

void basic_data() {
    // 指针指向 void
    void *malloc(size_t size);
}


/**
 * 函数返回为空
 * @param status
 */
void exit (int status) {
    printf("%d", status);
}

/**
 * 函数参数为空
 * @return
 */
int rand(void ) {

    return 0;
}
