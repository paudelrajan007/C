#include<stdio.h>
void Display(int rows,int column, int matrix1[rows][column],int matrix2[rows][column],int result_matrix[rows][column]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            result_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
void printmatrix(int rows,int column,int matrix[rows][column]){
       for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int rows,column;
     printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &column);
       

    int matrix1[rows][column], matrix2[rows][column], result[rows][column];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    Display(rows, column, matrix1, matrix2, result_matrix
    );

    // Print the result
    printf("Resultant matrix after addition:\n");
    printmatrix(rows, column, result_matrix);

    return 0;
}
