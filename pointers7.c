#include <stdio.h>

#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

void set_value(int m_array[][COLS]) {
    int row, col;
    for (row = 0; row < ROWS; row++) {
        for (col = 0; col < COLS; col++) {
            m_array[row][col] = 1;
            printf("%d", m_array[row][col]);
        }
        printf("\n");
    }
}

void main() {
    char *last_address = (char*)multi + ROWS*COLS*sizeof(int);
    set_value(multi);
    printf("\nThe first address of multi is %p", multi);
    printf("\nThe last address of multi is %p", last_address);
}