#include <stdio.h>

int x = 1;
int y = 2;
int addtwonum();

extern int count;
extern void staticclass(void);

int main() {
    printf("Hello, World!\n");
    int result = addtwonum();
    printf("%d", result);

    while (count--) {
        staticclass();
    }
    return 0;
}
