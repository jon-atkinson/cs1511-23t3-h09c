#include <stdio.h>

#define MAX_SIZE 100


int square(int x);
void print_array(int length, int array[length]);
void square_array(int length, int array[length]);

int main(void) {

    int inputs[MAX_SIZE];

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);
    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        inputs[i] = input;
    }

    printf("Values before square_array: ");
    print_array(size, inputs);

    //call square, copying the value of input into `int x`
    square_array(size, inputs);

    printf("Values after square_array:  ");
    print_array(size, inputs);

    return 0;
}

// Returns the square of a given integer.
int square(int x) {
    return x * x;
}


// Squares all elements of an array, modifying the array in the process.
void square_array(int length, int array[length]) {

    for (int i = 0; i < length; i++) {
        array[i] = square(array[i]);
    }
}

// prints out an array
void print_array(int length, int array[length]) {
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i != length - 1) {
            printf(", ");
        } else {
            printf("]\n");
        }
    }
}