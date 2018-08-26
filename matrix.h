#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED


void createMatrix(int *rowNo, int *columnNo){
    printf("Ender rows and columns of the matrix in the format of Number space Number: ");
    scanf("%d %d",rowNo,columnNo);
    fflush(stdin);
}

void populateMatrix(int rowNo,int columnNo, int matrix[SIZE][SIZE]){
     printf("\nEnter the matrix: \n");
     for(int i=0; i<rowNo; ++i){
        for(int j=0; j<columnNo; ++j ){
            printf("Enter the element for array slot[%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]); //& to populate array
            fflush(stdin);

        }
    }
}
void displayMatrix(int row, int column, int matrix[SIZE][SIZE]){
    printf("\nMatrix: \n");
    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

void tranposeMatrix(int row, int column,int matrix[SIZE][SIZE],int tranposeMatrix[SIZE][SIZE]){
    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j){
            tranposeMatrix[j][i] = matrix[i][j];
            printf("%d  ",tranposeMatrix[i][j]);
        }
    }
}

void displayTranspose(int row, int column,int tranposeMatrix[SIZE][SIZE]){
    printf("\nTransposed Matrix: \n");
    for(int i = 0; i<row; ++i){
        for(int j=0; j<column; ++j){
            printf("%d  ",tranposeMatrix[i][j]);
        }
        printf("\n");
    }
}



#endif // MATRIX_H_INCLUDED
