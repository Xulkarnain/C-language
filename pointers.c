#include <stdio.h>

// print the address of variable

// int main()
// {
//     int n=10;

//     printf("%d",&n);
// }

// use of indirection operator *

/*
int main()
{
    int x=5;

    printf("%d",*&x);  // * here this is indirection operator it returns the content whose address is said    
}
*/

// declaration of pointer

/*
int main()
{
    int x = 5;
    int *p;    // * here is just symbol not operator

    p=&x;    // pointer is used to store address of variable or other pointer

    printf("%u",p);  //here %u is used because it can print upto 65535 bytes
}
*/

/*
int main()
{
    int x=5 , *j;
    float y=5, *k;
    char z='5', *l;

    l=&x;
    printf("%d",*l); //warning suspicious pointer detected use same type of pointer for allocation of address.

    j= &x;

    // printf("%d %u \n",x,j);
    // printf("%d %u \n",*j,&x);
    // printf("%u\n",*&j);
    // printf("%u",j+1);

    
}
*/

//IMPORTANT CONCEPT = Function in pointers

//Call by refrence

//Write a program to swap two integers using fuctions without using return value

/*
void swap(int *,int *);  //declared a function for swaing two values takes value as int pointer

void main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    swap(&a,&b);   // stores address of a and b

    printf("%d %d",a,b);

}

void swap(int *p, int *q)   // stores the address of a and b in pointer p and q
{
    int t;

    t=*p;        // stores the value of a in t
    *p=*q;       // stores the value of b in a 
    *q=t;        // stores the value of t in b

}
*/

