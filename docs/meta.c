#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n=9;
    int *ptr=&n;
    printf("%x\n",ptr);
    printf("%x",&n);
    return 0;
}