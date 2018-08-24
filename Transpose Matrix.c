#include <stdio.h>

//User defined functions
void createMatrix(int *rowNo,int *columnNo);
void populateMatrix(int rowNo, int columnNo, int matrix[10][10]);
void displayMatrix(int row, int column, int matrix[10][10]);
void transposeMatrix(int row, int column,int matrix[10][10],int tranposeMatrix[10][10]);
void displayTranspose(int row, int column,int transposeMatrix[10][10]);

int main(){

    int matrix[10][10], transpose[10][10],row,column;
    createMatrix(&row,&column); //Pass by value
    populateMatrix(row,column,matrix);
    displayMatrix(row, column,matrix);
    transposeMatrix(row,column,matrix,transpose);
    displayTranspose(row,column,transpose);
    return 0;
}

void createMatrix(int *rowNo, int *columnNo){
    printf("Ender rows and columns of the matrix in the format of Number space Number: ");
    scanf("%d %d",rowNo,columnNo);
    fflush(stdin);

}

void populateMatrix(int rowNo,int columnNo, int matrix[10][10]){
     printf("\nEnter the matrix: \n");
     for(int i=0; i<rowNo; ++i){
        for(int j=0; j<columnNo; ++j ){
            printf("Enter the element for array slot[%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]); //& to populate array
            fflush(stdin);

        }

    }

}
void displayMatrix(int row, int column, int matrix[10][10]){
    printf("\nMatrix: \n");
    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int row, int column,int matrix[10][10],int tranposeMatrix[10][10]){
    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j){
            tranposeMatrix[j][i] = matrix[i][j];
        }
    }
}

void displayTranspose(int row, int column,int transposeMatrix[10][10]){
    printf("\nTransposed Matrix: \n");
    for(int i = 0; i<row; ++i){
        for(int j=0; j<column; ++j){
            printf("%d  ",transposeMatrix[i][j]);
        }
        printf("\n");
    }
}

