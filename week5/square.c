#include <stdio.h>

int square(int x) {
    // x = x * x;
    // printf("value inside square function: %d\n", x);
    // return x;
    return x * x;
}

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    input = square(input);

    printf("value after square: %d\n", input);

    return 0;
}