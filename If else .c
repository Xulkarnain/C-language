#include <stdio.h>

// print hello 10 times

// int main()
// {
//     int n;
//     n=1;

// L :    if (n<=10)
//     {
//         printf("Hello \n");
//         n++;
//         goto L;
//     }
//     return 0;
// }

// print number from 1-10

// int main()
// {
//     int n=1;

// L :    if (n<=10)
//     {
//         printf("%d \n",n);
//         n++;
//         goto L;
//     }
//     return 0;
// }

// print even number upto 20

// int main()
// {
//     int n;
//     n=2;

// L : if (n%2==0)

//     if (n<=20){
//     {
//         printf("%d",n);
//         n=n+2;
//         goto L;
//     }
// }
//    return 0;
// }

// print odd numbe upto n

// int main()
// {
//     int n=1;

// L:  if (n%2!=2)
// {
//     if (n<=20)
//     {
//         printf("%d ",n);
//         n=n+2;
//         goto L;
//     }
// }
//     return 0;
// }

// take input m from user print odd number upto m

// int main()
// {
//     int n=1,m;

//     printf("enter your number");
//     scanf("%d",&m);

//  L:   if (n%2!=0)
//     {
//         if (n<=m)
//         {
//             printf("%d",n);
//             n=n+2;
//             goto L;
//         }
//     }
//     return 0;
// }

// Q8

// int main()
// {
//     int n, emp_no, ba, da, sal;
//     n = 1;
//     char name[50];

// L:
//     if (n <= 5)
//     {
//         printf("enter your emp no:");
//         scanf("%d", &emp_no);
//         printf("enter your name : ");
//         scanf(" %c", &name);
//         printf("enter ba");
//         scanf("%d", &ba);
//         printf("enter da");
//         scanf("%d", &da);

//         sal = ba + da;
//         printf("total sal = %d \n", sal );
//         n++;
//         goto L;
//     }

//     return 0;
// }

// Q9

// int main()
// {
//     int n=1,emp_no,ba,da,sal;
//     char name,gen;

// L :    if (n<=5)
//     {
//         printf("enter your emp no:");
//         scanf("%d", &emp_no);
//         printf("enter your name : ");
//         scanf(" %c", &name);
//         printf("enter ba");
//         scanf("%d", &ba);
//         printf("enter da");
//         scanf("%d", &da);

//         sal = ba + da;
//         printf("total sal = %d \n", sal );
//         printf("enter your gen");
//         scanf(" %c",&gen);
//         n++;
//         goto T;
// T :

//         if (gen=='F')
//         {
//             sal=sal+100;
//             printf("total sal with bonus = %d \n",sal);
//             goto L;
//         }
//         else
//         goto L;
//         }
//     }

// Q.10

// int main()
// {
//     int n=1,emp_no,ba,da,sal;
//     char name,gen,MS;

// L :     if (n<=5)
//     {
//         printf("enter your emp no:");
//         scanf("%d", &emp_no);
//         printf("enter your name : ");
//         scanf(" %c", &name);
//         printf("enter ba :");
//         scanf("%d", &ba);
//         printf("enter da :");
//         scanf("%d", &da);

//         sal = ba + da;
//         printf("total sal = %d \n", sal );
//         printf("enter your gen :");
//         scanf(" %c",&gen);
//         printf("enter your MS :");
//         scanf(" %c",&MS);
//         n++;

//         if (gen=='F')
//         {
//             sal=sal+100;
//             printf("total sal after gen bonus = %d \n",sal);

//         }

//        if (MS=='Y')
//        {
//         sal=sal+200;
//         printf("total sal after MS bonus = %d \n", sal);

//        }

//        if (emp_no==1)
//        {
//         printf(" %d  %c %d %d  %c  %c",emp_no,name,ba,da,gen,MS);
//         printf("total salary of emp_no 1 = %d \n",sal);
//         goto L;
//        }
//        if (emp_no==2)
//        {
//         printf(" %d  %c %d %d  %c  %c \n",emp_no,name,ba,da,gen,MS);
//         printf("total salary of emp_no 2 = %d \n",sal);
//         goto L;
//        }
//        if (emp_no==3)
//        {
//         printf(" %d  %c %d %d  %c  %c \n",emp_no,name,ba,da,gen,MS);
//         printf("total salary of emp_no 3 = %d \n",sal);
//         goto L;
//        }
//        if (emp_no==4)
//        {
//         printf(" %d  %c %d %d  %c  %c \n",emp_no,name,ba,da,gen,MS);
//         printf("total salary of emp_no 4 = %d \n",sal);
//         goto L;
//        }
//        if (emp_no==5)
//        {
//         printf(" %d  %c %d %d  %c  %c \n",emp_no,name,ba,da,gen,MS);
//         printf("total salary of emp_no 5 = %d \n",sal);
//         goto L;
//        }
//        else
//         goto L;
//     }

//     if (n==6)
//     {
//         printf("End of file");
//     }
//     return 0;
// }

// int main()
// {
//     int n = 1, emp_no, ba, da, sal, child;
//     char name, gen, MS;

// L:
//     if (n <= 5)
//     {
//         printf("enter your emp no:");
//         scanf("%d", &emp_no);
//         printf("enter your name : ");
//         scanf(" %c", &name);
//         printf("enter ba :");
//         scanf("%d", &ba);
//         printf("enter da :");
//         scanf("%d", &da);

//         sal = ba + da;
//         printf("enter your gen :");
//         scanf(" %c", &gen);
//         printf("enter your MS :");
//         scanf(" %c", &MS);

//         if (gen == 'F')
//         {
//             sal = sal + 100;
//             printf("total sal after gen bonus = %d \n", sal);
//         }

//         if (MS == 'Y')
//         {
//             sal = sal + 200;
//             printf("total sal after MS bonus = %d \n", sal);
//             printf("enter how many child do you have \n");
//             scanf("%d", &child);

//             if (child == 1)
//             {
//                 sal = sal + 300;
//                 printf("sal after child bonus = %d \n", sal);
//             }

//             if (child == 2)
//             {
//                 sal = sal + 500;
//                 printf("sal after child bonus = %d \n", sal);
//             }

//             if (child == 3)
//             {
//                 sal = sal + 700;
//                 printf("salary after child bonus = %d \n", sal);
//             }
//             else
//                 goto T;
//         }
//  T :       if (ba > 1000)
//             {
//                 sal = sal - 0.1 * sal;
//                 printf("total salary after tax = %d \n", sal);
//             }
//             if (ba > 2000)
//             {
//                 sal = sal - 0.2 * sal;
//                 printf("total salary after tax = %d \n", sal);
//             }
//             if (ba > 3000)
//             {
//                 sal = sal - 0.3 * sal;
//                 printf("total salary after tax = %d \n", sal);
//             }
//         n++;

//         if (emp_no == 1)
//         {
//             printf("Emp  name  ba  da  gen  MS  child \n");
//             printf(" %d   %c   %d  %d   %c  %c   %d \n", emp_no, name, ba, da, gen, MS,child);
//             printf("Final salary of emp_no 1 = %d \n", sal);
//             goto L;
//         }
//         if (emp_no == 2)
//         {
//             printf("Emp  name  ba  da  gen  MS  child \n");
//             printf(" %d   %c   %d  %d   %c  %c   %d \n", emp_no, name, ba, da, gen, MS,child);
//             printf("total salary of emp_no 2 = %d \n", sal);
//             goto L;
//         }
//         if (emp_no == 3)
//         {
//             printf("Emp  name  ba  da  gen  MS  child \n");
//             printf(" %d   %c   %d  %d   %c  %c   %d \n", emp_no, name, ba, da, gen, MS,child);
//             printf("total salary of emp_no 3 = %d \n", sal);
//             goto L;
//         }
//         if (emp_no == 4)
//         {
//             printf("Emp  name  ba  da  gen  MS  child \n");
//             printf(" %d   %c   %d  %d   %c  %c   %d \n", emp_no, name, ba, da, gen, MS,child);
//             printf("total salary of emp_no 4 = %d \n", sal);
//             goto L;
//         }
//         if (emp_no == 5)
//         {
//             printf("Emp  name  ba  da  gen  MS  child \n");
//             printf(" %d   %c   %d  %d   %c  %c   %d \n", emp_no, name, ba, da, gen, MS,child);
//             printf("total salary of emp_no 5 = %d \n", sal);
//             goto L;
//         }
//         else
//             goto L;
//     }

//     if (n == 6)
//     {
//         printf("End of file");
//     }
//     return 0;
// }

// Q16 check if given number is even or odd

// int main()
// {
//     int n;
//     printf("enter a number \n");
//     scanf("%d", &n);

//     if (n % 2 != 0)
//     {
//         printf("%d is odd", n);
//     }
//     else
//         printf("%d is even", n);

//     return 0;
// }

// Q17 print thefirst 10 multipies of 10

// int main()
// {
//     int n=1;

//     printf("table of 10\n");

// T:    if (n<=10)
//     {
//         printf("2 X %d = %d \n",n,2*n);
//         n++;
//         goto T;
//     }
//     return 0;

// }

// Q18 print the first 10 multiplies of n

// int main()
// {
//     int n,m=1;

//     printf("enter a number \n");
//     scanf("%d",&n);

// T :    if (m<=10)
//     {
//         printf("%d X %d = %d \n",n,m,n*m);
//         m++;
//         goto T;
//     }
//     return 0;
// }

// Q19 print the first R multiple of n

// int main()
// {
//     int r,n,m=1;

//     printf("enter r and n\n");
//     scanf("%d%d",&r,&n);

// T :    if (m<=r)
//     {
//         printf("%d x %d = %d \n",n,m,n*m);
//         m++;
//         goto T;
//     }
//     return 0;
// }

// Q20 print multiplies of n starting from n*s and stopping at n*r

// int main()
// {
//     int n,s,r;

//     printf("enter n s r \n");
//     scanf("%d%d%d",&n,&s,&r);

// t:    if (s<=r)
//     {
//         printf("%d X %d = %d \n",n,s,n*s);
//         s++;
//         goto t;
//     }

// }

// Q21 if r>s start at n*s an stop at n*r
// if s>r start at n*r and stop at n*s

// int main()
// {
//     int n,s,r;

//     printf("enter n s r \n");
//     scanf("%d%d%d",&n,&s,&r);
// t:
//     if (s<=r)
//     {
//         printf("%d X %d = %d \n",n,s,n*s);
//         s++;
//         goto t;
//     }
// l:    if(r<=s)
//     {
//         printf("%d x %d = %d \n",n,r,n*r);
//         r++;
//         goto l;
//     }
//     return 0;
// }

// Q22 print the sequence 12333456667899910

// int main()
// {
//     int n=1;

//     printf("the sequence is \n");
// l:
//     if (n%3==0)
//     {
//         printf("%d %d %d ",n,n,n);
//         n++;
//         goto l;
//     }
//     if (n<=10)
//     {
//         printf("%d ",n);
//         n++;
//         goto l;
//     }
//     return 0;
// }

//Q 23 take inut n from user print the factorial of n

// int main()
// {
//     int n, x = 1,m;

//     printf("enter your number\n");
//     scanf("%d", &n);
//     m=n;

// l:
//     if (n >= 1)
//     {
//         x = x * n;
//         n--;
//         goto l;
//     }
//     printf("%d! = %d",m, x);
//      if (n == 0)
//     {
//         return 0;
//     }
//     return 0;
// }

// Q24 take two numbers from user say N an R,print N^R

// int main()
// {
//     int N,R,x=1,m=1;

//     printf("enter a number ");
//     scanf("%d %d",&N,&R);
//     // printf("%d",m);

//  l: if (x<=R)
//     {
//         m=m*N;
//         x++;
//         goto l;
//     }
//     printf("the %d^%d = %d",N,R,m);
//     return 0;
// }

// Q25. Take input ‘N’ from the user and check whether it is prime or not.
// int main()
// {
//     int n, m = 2;
//     printf("Enter no");
//     scanf("%d", &n);

//     if (n == 2 || n == 3)
//     {
//         printf("the number is prime");
//         return 0;
//     }

// l:
//     if (n % m != 0)
//     {
//         m++;
//     }
//     else
//     {
//         printf("the no. is not prime");
//         return 0;
//     }
//     if (m < n)
//     {
//         goto l;
//     }
//     if (m == n && n % m == 0)
//         printf("the no. is prime");
//     else
//         printf("the no. is not prime");
//     return 0;
// }
// Q26. Take input ‘N’ from the user.
//- If N = 1, print 0 1 2 3 4 5 4 3 2 1 0.
//- If N = 2, print 0 1 2 3 4 5 4 3 2 1 0 1 2 3 4 5 4 3 2 1 0, and so on for any given value of N.
//(Note: Zero doesn’t repeat twice; …3 2 1 0 0 1 2 3…. is wrong. The main problem is avoiding double 0.)

// int main()
// {
//     int n,m=0;

//     printf("take input n from user");
//     scanf("%d",&n);

//         l:    if (m<5)
//         {
//             printf("%d",m);
//             m++;
//             goto l;
//         }
//         m++;
//     s:    if (m>=1)
//         {
//             m--;
//             printf("%d",m);
//             goto s;
//         }

//     while (n>1)
//     {
//         m=1;

//     k:    if (m<5)
//         {
//             printf("%d",m);
//             m++;
//             goto k;
//         }
//         m++;
//     m:    if (m>=1)
//         {
//             m--;
//             printf("%d",m);
//             goto m;
//         }
//         n--;
//     }
//     return 0;
// }

// 27. Print all prime numbers from 3 to N.n

// int main()
// {
//     int n = 3, m = 2, p;

//     scanf("%d", &p);

//     if (n == 3)
//         {
//             printf(" %d ", n);
//             n++;
//         }

//     while (n <= p)
//     {

//     l:
//         m = 2;
//     t:
//         if (n % m != 0)
//         {
//             m++;
//             goto t;
//         }
//         if (n % m == 0 && n == m)
//         {
//             printf(" %d ", n);
//             n++;
//             goto l;
//         }
//         if (n % m != 0)
//         {
//             n++;
//             goto t;
//         }
//         n++;
//     }
//     return 0;
// }

// fibonachi series from 0 to infinity

// int main()
// {
//    unsigned int X=0,Y=1,Z,l,n=1;

//     printf("enter a limit \n");
//     scanf(" %d ",&l);

//  t:   if (n<=l)
//     {
//        Z=X+Y;
//        X=Y;
//        Y=Z;
//        printf(" %d ",Z);
//        n++;
//        goto t;
//     }
//     return 0;
// }

// Q31 take three numbers from user and check greatest among them

// int main()
// {
//     int x,y,z;

//     scanf("%d %d %d",&x,&y,&z);

//     if (x>y && x>z)
//     {
//         printf("%d is gratest",x);
//     }
//     else if (y>z && y>x)
//     {
//         printf("%d is greatest",y);
//     }
//     else if (z>>y && z>x)
//     {
//         printf("%d is greatest",z);
//     }
//     return 0;

// }

//  Q32. Take 3 numbers from the user, say N, S, R. Print the 3 numbers in descending order.
// - If N = 1, S = 6, R = 3,
// Output: 631 (SRN)

// int main()
// {
//     int n,s,r;

//     scanf("%d %d %d",&n,&s,&r);

//     if (n>s && n>r)
//     {
//         printf("%d",n);
//         if (s>r)
//         printf("%d%d",s,r);
//         if (r>s)
//         printf("%d%d",r,s);
//     }
//     if (s>n && s>r)
//     {
//         printf("%d",s);
//         if (n>r)
//         printf("%d%d",n,r);
//         if (r>n)
//         printf("%d%d",r,n);
//     }
//     if (r>s && r>n)
//     {
//         printf("%d",r);
//         if (s>n)
//         printf("%d%d",s,n);
//         if (n>s)
//         printf("%d%d",n,s);
//     }
//     return 0;
// }

// 33. Take N, R as input from the user. Print the value of NCR ( NCR = 𝑁!𝑅!(𝑁−𝑅)! )

// int main()
// {
//     int n, r, factn = 1, factr = 1, x, factx = 1, NCR;

//     scanf("%d %d", &n, &r);

//     x = n - r;
// l:
//     if (n >= 1)
//     {
//         factn = factn * n;
//         n--;
//         goto l;
//     }
// t:
//     if (r >= 1)
//     {
//         factr = factr * r;
//         r--;
//         goto t;
//     }
// m:
//     if (x >= 1)
//     {
//         factx = factx * x;
//         x--;
//         goto m;
//     }

//     NCR = factn / (factr * factx);

//     printf("%d", NCR);
//     return 0;
// }

// Q34. Calculate Compound Interest.
// ( 𝑨 = 𝑃(1 + 𝑟𝑛)𝑛𝑡 , 𝑪𝑰 = 𝑃(1 + 𝑟𝑛)𝑛𝑡−𝑃 )

//  Q35. Make a digital clock in 24-hour format that prints time as
// H M S

// int main()
// {
//     int H = 0, M = 0, S = 0, n = 1;
// t:
//     while (S <= 59)
//     {
//         printf("%d %d %d \n", H, M, S);
//         S++;

//         while (S == 60)
//         {
//             S = 0;
//             M++;
//             while (M == 59)
//             {
//                 M = 0;
//                 H++;
//                 while (H == 24)
//                 {
//                     H = 0;
//                 }
//             }
//         }
//     }
// }

// or saqibs coe 

// int main()
// {

//     for (;;)
//     {
//         for (int h = 0; h < 24; h++)
//         {
//             for (int m = 0; m < 60; m++)
//             {
//                 for (int s = 0; s < 60; s++)
//                 {
//                     printf("%02d %02d %02d\n", h, m, s);
//                 }
//             }
//         }
//     }
// }

// Q36. Make a digital clock in 12-hour format that prints time as
// H M S am/pm

// int main()
// {
//     int H = 12, M = 59, S = 59, n = 1;
//     char a='a',p='p';
//     printf("H  M  S  am/pm");
// t:
//     while (S <= 60)
//     {
//         if(H>=12)
//         {
//         printf("%d %d %d %c \n",H, M, S,a);
//         S++;
//         }

//         else if (H<12)
//         {
//             printf("%d %d %d %c \n",H, M, S,p);
//             S++;
//         }

//         while (S == 61)
//         {
//             S = 0;
//             M++;
//             while (M == 61)
//             {
//                 M = 0;
//                 H++;
//                 while (H == 13)
//                 {
//                     H = 0;

//                 }
//             }
//         }
//     }
// }

// Q37. Take a number 'N' from the user. Count the number of digits in it.

// int main()
// {
//     int n;

//     scanf("%d",&n);

//     if (n<10)
//     {
//         printf("%d is 1 digit number",n);
//     }
//     else if (n<100)
//     {
//         printf("%d is 2 digit number",n);
//     }
//     else
//     printf("%d is 3 digit number",n);
//     return 0;
// }

// Q38. Take a number ‘N’ from the user. Check whether it is an Armstrong number or not.

// int main()
// {
//     int
// }


//write a C program to check digits of a number is prime or not

int main()
{
    int n, m = 2,count;
    printf("Enter no");
    scanf("%d", &n);

    
    for (; n > 0; ) {
        n = n / 10;
        count++;
    }

    if (n == 2 || n == 3)
    {
        printf("the number is prime");
        return 0;
    }

l:
    if (n % m != 0)
    {
        m++;
    }
    else
    {
        printf("the no. is not prime");
        return 0;
    }
    if (m < n)
    {
        goto l;
    }
    if (m == n && n % m == 0)
        printf("the no. is prime");
    else
        printf("the no. is not prime");
    return 0;
}