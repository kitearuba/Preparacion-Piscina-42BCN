//
// Created by chris on 8-3-2024.
//

#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("Enter number of columns:");
    scanf("%d", &columns);

    scanf("%c");

    printf("Enter a character to use:");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; ++i) {

        for (int j = 1; j <= columns; ++j) {
            printf( "%c", symbol);
        }
        printf("\n");
    }

    return 0;
}