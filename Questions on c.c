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

// 6. Write a program in C to display the multiplication table for a given integer

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

// 7. Write a program in C to display the multiplier table vertically from 1 to n.

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

// 8. Write a C program to display the n terms of odd natural numbers and their sum.

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

// 9. Write a program in C to display a pattern like a right angle triangle using an asterisk. The pattern like :
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

// 11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
// The pattern like
//  1
//  22
//  333
//  4444

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

// 12. Write a program in C to make such a pattern like a right angle triangle with the number increased by
// 1. The pattern like :

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

// 13. Write a program in C to make a pyramid pattern with numbers increased by 1.
//    1
//   2 3
//  4 5 6
// 7 8 9 10

// int main()
// {
//     int n=1;

//     for (int  i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4-i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d ",n);
//             n++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 14. Write a C program to make such a pattern as a pyramid with an asterisk

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
// 15. Write a C program to calculate the factorial of a given number

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

// 16. Write a C program to display the sum of n terms of even natural numbers.

// int main()
// {
//     int n,sum,even;

//     printf("Input number of terms :");
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         even = even + 2;
//         printf("%d",even);
//         sum=sum + even;
//     }
//     printf("\nThe Sum of even Natural Number upto %d terms :%d",n,sum);
//     return 0;
// }

// 17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

//   1
//  2 2
// 3 3 3
// 4 4 4 4

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4-i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

/*void main()
{
    float x, sum, t, d; // Declare variables to store input and intermediate values.
    int i, n;           // Declare variables for loop control and input.

    // Prompt the user to input the value of 'x'.
    printf("Input the Value of x :");
    scanf("%f", &x); // Read the value of 'x' from the user.

    // Prompt the user to input the number of terms.
    printf("Input the number of terms : ");
    scanf("%d", &n); // Read the value of 'n' from the user.

    sum = 1; // Initialize 'sum' to 1, as the first term is always 1.
    t = 1;   // Initialize 't' to 1 for the first term.

    // Loop to calculate the sum of the series.
    for (i = 1; i < n; i++)
    {
        d = (2 * i) * (2 * i - 1); // Calculate the denominator for the term.
        t = -t * x * x / d;        // Calculate the term value.
        sum = sum + t;             // Add the term to the sum.
    }

    // Print the final result along with the input values.
    printf("\nThe sum = %f\nNumber of terms = %d\nValue of x = %f\n", sum, n, x);
}*/

// 19. Write a program in C to display the n terms of a harmonic series and their sum. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

/*int main()
{
    int n;

    float d = 1, x = 1, sum;

    printf("enter limit : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        x = 1 / d;
        sum = sum + x;
        d++;
    }
    printf("Sum of Series upto %d terms : %f", n, sum);
    return 0;
}*/

// 20. Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.
/*
   *
  ***
 *****

*/

/*int main()
{
    int n=1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5-n ; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n ; k++)
        {
            printf("* ");
        }
        printf("\n");
        n=n+2;
    }
    return 0;
}*/

// 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

/*int main()
{
    int n, t = 11, sum, x = 9,e=100;

    printf("enter a limit :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", x);
        sum = sum + x;

        x = 9 * t;
        t = t + e;

        e=e*10;


    }
    printf("The sum of the saries = %d", sum);
    return 0;
}*/

// 22. Write a program in C to print Floyd's Triangle.

/*
1
01
101
0101
10101
*/

/*int main()
{
    int n=1,k,j,i,p,q;
    for (i = 1; i <= 5; i++)
    {

         if (i % 2 == 0) // Check if 'i' is even.
        {
            p = 1;
            q = 0;
        }
        else // If 'i' is odd.
        {
            p = 0;
            q = 1;
        }

        for (j = 1; j <= i; j++) // Loop for each element in the row.
        {
            if (j % 2 == 0) // Check if 'j' is even.
                printf("%d", p); // Print 'p' if 'j' is even.
            else
                printf("%d", q); // Print 'q' if 'j' is odd.
        }
        printf("\n");
    }
    return 0;
} */

// 23. Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].

// int main()
// {
//     int x,n,r=1,sum;

//     printf("Input the value of x :");
//     scanf("%d",&x);

//     printf("Input number of terms :");
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n ; j++)
//         {

//         }

//     }

// }

// 24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].

// 25. Write a C program that displays the n terms of square natural numbers and their sum.

/*
int main()
{
    int s,n,sum,sq;

    printf("Input the number of terms :");
    scanf("%d",&n);
    printf("The square natural upto 5 terms are :");

    for (int i = 1; i <= n; i++)
    {
        s=i*i;
        printf(" %d",s);
        sum=sum+s;
    }
    printf("\nThe Sum of Square Natural Number upto 5 terms = %d",sum);
    return 0;
} */

// 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

/*
int main()
{
    int n,x=1,t=11,e=100,sum;

    printf("Input the number of terms :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d +", x);
        sum = sum + x;

        x = 1 * t;
        t = t + e;
        e=e*10;
    }
    printf("The Sum is : %d",sum);
    return 0;
}
*/

// 27. Write a C program to check whether a given number is a 'Perfect' number or not.

/*
int main()
{
    int n, x;

    printf("Input the number :");
    scanf("%d", &n);

    printf("\nThe positive divisor : ");
    for (int i = 1; i <= n / 2; i++) // imp* because after n is divide in half , the number coming after wont ever be proper divisor of n.
    {

        if (n % i == 0)
        {
            x += i;
            printf("%d ", i);
        }
    }
    printf("\nThe sum of the divisor is : %d", x);

    if (x == n)
    {
        printf("\nSo, the number is perfect.");
    }
    else
        printf("\nSo, the number is not perfect.");

    return 0;
}
*/

// 28. Write a C program to find the 'Perfect' numbers within a given number of ranges

/*
int main()
{
    int n, m, x, y;

    printf("Input the starting range or number :");
    scanf("%d", &n);
    printf("\nInput the ending range of number :");
    scanf("%d", &m);
    printf("\nThe Perfect numbers within the given range :");

    while (n <= m)
    {
        x=0;

        for (int i = 1; i <= n / 2; i++)
        {

            if (n % i == 0)
            {
                x += i;
            }
        }
        if (x == n)
        {
            printf("%d ", x);
            n++;
        }
        else
            n++;
    }
    return 0;
}
*/

// 29. Write a C program to check whether a given number is an Armstrong number or not.

/*
int main()
{
    int n, x, cube, realnum;

    printf("Input a number:");
    scanf("%d", &n);

    realnum = n;
    while (realnum != 0)
    {
        x = realnum % 10;

        cube += x * x * x;

        realnum /= 10;
    }
    if (cube == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}
*/

// 30. Write a C program to find the Armstrong number for a given range of number.

/*
int main()
{
    int n, s, e, realnum, x, cube;

    printf("Input starting number of range:");
    scanf("%d", &s);
    printf("\nInput ending number of range :");
    scanf("%d", &e);

    n = s;
    printf("Armstrong numbers in given range are: ");

    while(e >= s)
    {
        x=0;n=s;cube=0;
        while (n != 0)
        {
            x = n % 10;

            cube += x * x * x;

            n /= 10;
        }
        if (cube == s)
        {
            printf("%d ", cube);
            s++;

        }
        else
            s++;

    }
    return 0;
}
*/

// 31. Write a program in C to display a pattern like a diamond.
/*
 *
 ***
 *****
 *******
 *********
 *******
 *****
 ***
 *

int main()
{
    for (int i = 0; i < 5; i++)
    {

        for (int j = 1; j < 5; j++)
        {
            printf(" ");

            for (int k = 5; k > 1; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
 */

// 32. Write a C program to determine whether a given number is prime or not.

int main()
{
    int n;

    printf("Input a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % n == 0 && i == n)
        {
            printf("%d is a prime number.", n);
        }
    }
    
    return 0;
}