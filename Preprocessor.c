#include <stdio.h>  // # is preprocessor directive after # comes preprocessor command

//#include includes file to the c file 

# include <D:\C questions\pointers.c>

#define PI 3.14  //it defines pi wherever pi will come it will be replaced with 3.14

// defining macro as function 

#define sum(a,b)  a+b

/*
int main()
{
    printf("the sum of 1 and 4 is %d",sum(1,4));

    return 0;
}
*/

// ## used to concatenate 2 number 

#define action(a,b)  a##b+a*b 

int main()
{
    printf("%d",action(3,4));

    return 0;
}