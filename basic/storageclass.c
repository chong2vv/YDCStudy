//
// Created by 王远东 on 2022/10/31.
//

#include "stdio.h"

/**
 * auto 存储类
 * auto 只能修饰局部变量
 */
void autoclass() {
    int y = 11;
    auto int x = 10;
}

/**
 * register 存储类
 */
void registerclass() {
    register int  miles;
}

int count=10;

/**
 * static 存储类
 * static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
 * 全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
 */
void staticclass(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */
    static int thingy=5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}