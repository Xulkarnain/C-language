// 1. Write a program in C to display the first 10 natural numbers.
#include <stdio.h>

// int main()
// {

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// 2. Write a C program to compute the sum of the first 10 natural numbers.

// int main()
// {
//     int n = 0;

//     printf("the first 10 natural numbers are :\n");
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d ", i);
//         n = n + i;
//     }
//     printf("\nthe sum is : %d", n);
// }

// 3. Write a program in C to display n terms of natural numbers and their sum.

// int main()
// {
//     int n,sum;

//     printf("enter a limit:");
//     scanf("%d",&n);

//     printf("the first %d natural numbers are \n", n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ",i);
//         sum=sum+i;
//     }
//     printf("\nThe Sum of Natural Number upto %d terms is : %d",n,sum);
//     return 0;
// }

// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average

// int main()
// {
//     int n;
//     float avg,sum;

//     printf("enter 10 numbers: \n");

//     for (int i = 1; i <= 10; i++)
//     {
//         scanf("%d \n", &n);

//         sum = sum + n;
//     }
//     printf("the sum of 10 numbers is :%.0f \n", sum);
//     avg = sum / 10;
//     printf("the avg of 10 numbers is : %f", avg);

//     return 0;
// }

// 5. Write a program in C to display the cube of the number up to an integer

// int main()
// {
//     int n, cube=1;

//     printf("Number is : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 3; i++)
//     {
//         cube = cube * n;
//     }
//     printf("and cube of the %d is : %d", n, cube);
//     return 0;
// }

//6. Write a program in C to display the multiplication table for a given integer

// int main()
// {
//     int n;

//     printf("Input the number (Table to be calculated) :");
//     scanf("%d",&n);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

//7. Write a program in C to display the multiplier table vertically from 1 to n.

// int main()
// {
//     int n=1,j,i;

// t:    for (int i = 1; i <= 10,n <= 8;)
//     {
//         printf("%d X %d = %d,",n,i,n*i);
//         n++;
//     }
    
//     printf("\n");
    
//     for (int i = 2,n=1; i<= 10,n<=8; )
//     {
//         printf("%d X %d = %d,",n,i,n*i);
//         n++;
//     }
//     i++;
//     goto t;
//     return 0;
// }

//8. Write a C program to display the n terms of odd natural numbers and their sum.

// int main()
// {
//     int n , sum, o=1;

//     printf("Input number of terms : ");
//     scanf("%d",&n);

//     for (int i = 1; i < n; i++)
//     {
//         o=o+2;
//         printf("%d ",o);
//         sum=sum+o;

//     }
//     printf("\nThe Sum of odd Natural Number upto %d terms : %d",n,sum);
//     return 0;
// }

//9. Write a program in C to display a pattern like a right angle triangle using an asterisk. The pattern like : 
//* 
//** 
//*** 
//****

// int main()
// {
    
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row. 
//The pattern like  
// 1 
// 22 
// 333 
// 4444

// int main()
// {
//     for (int  i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//12. Write a program in C to make such a pattern like a right angle triangle with the number increased by
//1. The pattern like :

/*
1 
2 3 
4 5 6 
7 8 9 10*/

// int main()
// {
//     int n=1;
//     for (int  i = 1; i <=4 ; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",n);
//             n++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//14. Write a C program to make such a pattern as a pyramid with an asterisk

/*     * 
      * * 
     * * * 
    * * * *    */

// int main()
// {
//     int rows;
//     printf("Number of rows: ");
//     scanf("%d", &rows);
 
//     // first loop to print all rows
//     for (int i = 1; i <= rows; i++) {
 
//         // inner loop 1 to print white spaces
//         for (int j = 1; j <= (rows - i); j++) {
//             printf(" ");
//         }
 
//         // inner loop 2 to print numbers
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//15. Write a C program to calculate the factorial of a given number

// int main()
// {
//     int n,x,m;

//     printf("enter a number : ");
//     scanf("%d",&n);
//     m=n;

//     for ( x = 1; n >= 1 ; n--)
//     {
//         x=x*n;
//     }
//     printf("factorial of %d is = %d",m,x);
//     return 0;
// }

