// COMP1511 H09C 23T3 Week 3 tutorial

#include <stdio.h>

// this size is a little arbitrary, you can try changing it to see what happens
// if you're interested
#define SIZE 4

void a(void);
void b(void);
void c(void);
void d(void);

int main(void) {
    char dummy = ' ';
    printf("a:\n");
    a();
    scanf("%c", &dummy);

    printf("b:\n");
    b();
    scanf("%c", &dummy);

    printf("c:\n");
    c();
    scanf("%c", &dummy);

    printf("d:\n");
    d();

    return 0;
}


void a(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void b(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col % 2 == 0) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void c(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col != 1 && row != 1) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void d(void) {
    int row = 0;
    while (row < SIZE) {
        printf("X");
        int col = 1;
        while (col < 3) {
            if (row == 0 || row == 3) {
                printf("X");
            } else {
                printf("O");
            }
            col++;
        }
        printf("X");
        row++;
        printf("\n");
    }
}
