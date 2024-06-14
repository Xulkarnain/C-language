#include <stdio.h>

// print sequence 12333456667899910

// int main()
// {

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d ", i);
//         for (int j = 0; j < 2 && i % 3 == 0; j++)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// print factorial of n

// int main()
// {
//     int n,m,x;

//     printf("ente a number :");
//     scanf("%d",&n);
//     m=n;

//     for (x = 1; n >= 1 ; n--)
//     {
//         x=x*n;
//     }
//     printf("%d! = %d",m,x);
// }

// Take two numbers from the user, say N, R. Print the value of NR

// int main()
// {
//     int n,m,r,x;
//     printf("enter a number :");
//     scanf("%d %d",&n,&r);

//     for ( x = 1,m=1; x<=r; x++)
//     {
//         m=m*n;
//     }
//     printf("%d^%d =%d",n,r,m);
//     return 0;
// }

// int main()
// {
//     int count = 0;
//     char x[3] = "PM";
//     for (;; count++)
//     {
//         if (count % 2 == 0)
//         {
//             x[0] = 'A';
//             x[1] = 'M';
//         }
//         else
//         {
//             x[0] = 'P';
//             x[1] = 'M';
//         }
//         for (int h = 0; h < 12; h++)
//         {
//             for (int m = 0; m < 60; m++)
//             {
//                 for (int s = 0; s < 60; s++)
//                 {
//                     printf("%02d %02d %02d %s\n", h, m, s, x);
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     int n, count = 0;
//     printf("Input n: ");
//     scanf("%d", &n);

//     for (; n > 0;)
//     {
//         n = n / 10;
//         count++;
//     }

//     printf("%d ", count);
//     return 0;
// }

int main()
{
    int n;
    scanf("%d",&n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}