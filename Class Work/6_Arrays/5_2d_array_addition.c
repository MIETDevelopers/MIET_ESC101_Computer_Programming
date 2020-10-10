//C Program to perform Two Dimensional Matrix Addition
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
    //Array Declaration and Variable Declaration
    int mat1[ROWS][COLS],mat2[ROWS][COLS],mat3[ROWS][COLS];
    int r,c;
    // To read elements of matrix 1
    for (r = 0; r < ROWS; r++) 
    {
        for(c = 0; c < COLS; c++) 
        {
            printf("\nENTER VALUE AT mat1[%d][%d] :", r, c);
            scanf("%d", &mat1[r][c]);
        }
    }
    printf("\n\t----------------------------------------------------\n");
    // To read elements of matrix 2
    for (r = 0; r < ROWS; r++) 
    {
        for(c = 0; c < COLS; c++) 
        {
            printf("\nENTER VALUE AT mat2[%d][%d] :", r, c);
            scanf("%d", &mat2[r][c]);
        }
    }
    // To Print elements of matrix 1
    printf("\n--------- MATRIX-1: \n");
    for (r = 0; r < ROWS; r++) 
    {
        for(c = 0; c < COLS; c++)
        {
            printf("%d ",mat1[r][c]);
        }
 printf("\n");
    }
    // To print elements of matrix 2
    printf("\n--------- MATRIX-2: \n");
    for (r = 0; r < ROWS; r++) 
    {
        for(c = 0; c < COLS; c++)
        {
            printf("%d ",mat2[r][c]);
        }
 printf("\n");
    }
    // To perform matrix addition
    printf("\n--------- ADDITION OF MATRICES: \n");
    for (r = 0; r < ROWS; r++) 
    {
        for(c = 0; c < COLS; c++)
        {
     mat3[r][c]=mat1[r][c]+mat2[r][c];
            printf("%d ",mat3[r][c]);
        }
        printf("\n");
    }
return 0;
}