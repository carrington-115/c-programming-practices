#include <stdio.h>

// lab exercises

int main(void){
    // int* a, b, c;
    int* a;
    int* b;
    int* c;
    int** addr_a = &a;
    int** addr_b = &b;
    int** addr_c = &c;
    scanf("%d%d%d", &a, &b, &c);
    int* addition = a + b + c;
    int** addr_result = &addition;
    // int* addition = a+b+c;
    printf("\n%d + %d + %d = %d", a, b, c, addition);
    printf("\nAt addreses %p, %p, %p, and %p respectively", addr_a, addr_b, addr_c, addr_result);
    return 0;
}

int* add(int a, int b){
    int* addr_a = &a;
    return addr_a;
}