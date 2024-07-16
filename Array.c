#include <stdio.h>

// 1. Find max & min array elements

/*
int main()
{
    int arr[5]={3,5,2,6,3};
    int min,max;

    max = arr[0];
    min = arr[0];


    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("the maximus array element is %d",max);
    printf("\nthe minimum array element is %d",min);
    return 0;
}
*/

// 2. Count frequency of each element.

/*
int main()
{
    int arr[5]={2,5,4,2,1};
    int freq[5];
    int min,max;

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            freq[i] = arr[i];
        }
        if (arr[i] < min)
        {
            freq[i] = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",freq[i]);
    }
    return 0;
}
*/

// 3. Decimal into Octal conversion

// int main()
// {
//     long decimalnum, remainder, quotient, octalnum = 0;
//     int octalNumber[100], i = 0, j;

//     printf("Enter the decimal number: ");
//     scanf("%ld", &decimalnum);
//     quotient = decimalnum;

//     // Storing remainders until number is equal to zero
//     while (quotient != 0)
//     {
//         octalNumber[i] = quotient % 8;
//         quotient = quotient / 8;
//         i++;
//     }

//     // Converting stored remainder values in corresponding octal number
//     for (j = i-1 ; j > 0; j--)
//         octalnum = octalnum * 10 + octalNumber[j];
//     printf("Equivalent octal value of decimal no %d is: %d  ", decimalnum, octalnum);
//     return 0;
// }

// 4. Armstrong number in an array

// counting the number of elements in array

/*
int main()
{
    int a[]={1,23,4,3,533,63,45,34,65,34,75,45,35,67,34,345,7,6,345,76,5234,5654,6,4,7,4,5,3,7,43,5,7,3,5,7,5,7,34,6,78,5,4,46,4,3,6};
    int s;

    s= sizeof(a)/sizeof(a[0]);

    printf("%d",s);
    return 0;
}
*/

// 5. Separate out +ve, -ve and 0s

/*
int main()
{
    int arr[5]={4,-5,3,66,-7};
    int post[]={0};
    int neg[]={0};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>0)
        {
            post[i]=arr[i];
            printf("positive %d \n",post[i]);
        }
        if (arr[i]<0)
        {
            neg[i]=arr[i];
            printf("negative %d",neg[i]);
        }
    }
    return 0;
}
*/

// 6. Reverse the array elements

/*
int main()
{
    int arr[5]={3,5,65,23,64};

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/
// 7. Sum of 10 integers

/*
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int err[10]={10,9,8,7,6,5,4,3,2,1};
    int add[10];

    for (int i = 0; i < 10; i++)
    {
        add[i]=arr[i] + err[i];
        printf("%d  ",add[i]);
    }
    return 0;
}
*/

// 8. Compare sum of given elements  // I cant understan the question

// 9. Sum of even numbers in array

/*
int main()
{
    int arr[10]={23,43,234,66,5,4,32,5,32,5};
    int add;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            add = add + arr[i];
        }
    }
    printf("%d",add);
    return 0;
}
*/

// 10. Print odd numbers in array

/*
int main()
{
    int arr[10]={3,5,4,6,8,6,7,8,1,9};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
*/

// 11. Find sum and average

/*
int main()
{
    int arr[10]={33,2,23,23,34,23,54,64,98,43};
    int sum,avg;

    for (int i = 0; i < 10; i++)
    {
        sum= sum + arr[i];

        avg = sum/10;
    }
    printf("the sum of arrays is %d. And the average of array is %d",sum,avg);
    return 0;
}
*/

// 12. Print max & min array element

/*
int main()
{
    int arr[5] = {34, 64, 63, 77, 34};
    int max, min;

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("the minimum array element is %d\n", min);
    printf("the maximum array element is %d", max);
    return 0;
}
*/

// 13. Search a number in an array  //please provide it with exaple i can't completely understand this

/*
int main()
{
    int arr[10] = {21, 42, 53, 43, 64, 7, 45, 8, 2, 5};
    int x, s;

    printf("Enter the number you want to search : ");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            printf("the element %d is in array ", x);
        }
    }
    return 0;
}
*/

//14. Sort array in ascending order

int main()
{
    int arr[10]={21, 42, 53, 43, 64, 7, 45, 8, 2, 5};
    int asc[10],x;
    x=arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>x)
        {
            
        }
        
    }
    
}