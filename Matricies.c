/*

3.  Write a C program to perform Scalar matrix multiplication.
4.  Write a C program to multiply two matrices.
5.  Write a C program to check whether two matrices are equal or not.
6.  Write a C program to find sum of main diagonal elements of a matrix.
7.  Write a C program to find sum of minor diagonal elements of a matrix.
8.  Write a C program to find sum of each row and column of a matrix.
9.  Write a C program to interchange diagonals of a matrix.
10.  Write a C program to find upper triangular matrix.
11.  Write a C program to find lower triangular matrix.
12.  Write a C program to find sum of upper triangular matrix.
13.  Write a C program to find sum of lower triangular matrix.
14.  Write a C program to find transpose of a matrix.
15.  Write a C program to find determinant of a matrix.
16.  Write a C program to check Identity matrix.
17.  Write a C program to check Sparse matrix.
18.  Write a C program to check Symmetric matrix.
*/

//1.  Write a C program to add two matrices.

#include <stdio.h>

/*
int main()
{
    int arr[2][3],err[2][3],add[2][3];

    printf("enter first matricies : \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }    
    }
    
    printf("Enter second matricies : \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d",&err[i][j]);
        }    
    }

    printf("Added matricies : \n");

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
           add[i][j]=arr[i][j] + err[i][j];
           printf("%d ",add[i][j]);
        }    
        printf("\n");
    }
    return 0;
}
*/

//2.  Write a C program to subtract two matrices.

/*
main()
{
    int arr[3][5],err[3][5],sub[3][5];

    printf("enter first matricies : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }    
    }

    printf("Enter second matricies : \n");

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            scanf("%d",&err[i][j]);
        }    
    }

    printf("subtracted matricies : \n");

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
           sub[i][j]=arr[i][j] - err[i][j];
           printf("%d ",sub[i][j]);
        }    
        printf("\n");
    }
}
*/

//3.  Write a C program to perform Scalar matrix multiplication.

int main()
{
    int arr[2][3],err[2][3],mult[2][2];

    printf("enter first matricies : \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }    
    }

    printf("Enter second matricies : \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 ; j++)
        {
            scanf("%d",&err[i][j]);
        }    
    }

    printf("multiplied matricies : \n");

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
           mult[i][j]=arr[i][j] * err[i][j];
           printf("%d ",mult[i][j]);
        }    
        printf("\n");
    }
    return 0;
}