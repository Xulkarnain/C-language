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

int main()
{
    int x=5 , *j;

    j= &x;

    printf("%d %u \n",x,j);
    printf("%d %u \n",*j,&x);
    printf("%u\n",*&j);
    printf("%u",j+1);

    
}