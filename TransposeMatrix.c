#include <stdio.h>

#define SIZE 10
//User defined functions
void createMatrix(int *rowNo,int *columnNo);
void populateMatrix(int rowNo, int columnNo, int matrix[SIZE][SIZE]);
void displayMatrix(int row, int column, int matrix[SIZE][SIZE]);
void tranposeMatrix(int row, int column,int matrix[SIZE][SIZE],int tranposeMatrix[SIZE][SIZE
                    ]);
void displayTranspose(int row, int column,int transposeMatrix[SIZE][SIZE]);

#include "matrix.h"


int main(){

    int matrix[SIZE][SIZE], transpose[SIZE][SIZE],row,column;
    createMatrix(&row,&column); //Pass by value
    populateMatrix(row,column,matrix);
    displayMatrix(row, column,matrix);
    tranposeMatrix(row,column,matrix,transpose);
    displayTranspose(row,column,transpose);
    return 0;
}
