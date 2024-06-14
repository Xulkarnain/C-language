// Q1 print hello 10 times

#include <stdio.h>

// int main()
// {
//     int n=1;

//     while (n<=10)
//     {
//         printf("hello\n");
//         n++;
//     }
//     return 0;
// }

// Q2 print numbers from 1-10

// int main()
// {
//     int n=1;

//     while (n<=10)
//     {
//         printf("%d \n",n);
//         n++;
//     }
//     return 0;
// }

// Q3 print even numbers upto 20

// int main()
// {
//     int n=1;
//     while (n<=20)
//     {
//         if (n%2==0)
//         {
//             printf("%d \n",n);
//         }
//         n++;
//     }
//     return 0;
// }

// Q4 print odd numbers upto 20

// int main()
// {
//     int n=1;
//     while (n<=20)
//     {
//         if (n%2!=0)
//         {
//             printf("%d \n",n);
//         }
//         n++;
//     }
//     return 0;
// }

// Q5 take input n from user print odd number upto n

// int main()
// {
//     int n,m=1;

//     printf("enter a number ");
//     scanf("%d",&n);

//     while (m<=n)
//     {
//         if (m%2!=0)
//         {
//             printf("%d",m);
//         }
//         m++;
//     }
//     return 0;
// }

// Q6 take input n from user print even number upto n

// int main()
// {
//     int n,m=1;

//     printf("enter a number ");
//     scanf("%d",&n);

//     while (m<=n)
//     {
//         if (m%2==0)
//         {
//             printf("%d \n",m);
//         }
//         m++;
//     }
//     return 0;
// }

// Q7 data question

// int main()
// {
//     int n=1,emp_no;
//     char name;

//     while (n<=5)
//     {
//         printf("enter your emp_no : \n");
//         scanf("%d",&emp_no);
//         printf("enter your name : ");
//         scanf(" %c",&name);
//         n++;
//     }
//     printf("eof");
//     return 0;
// }

// Q8 ata add ba and da

// int main()
// {
//     int n=1,emp_no,ba,da,sal;
//     char name;

//     while (n<=5)
//     {
//         printf("enter your emp_no : \n");
//         scanf("%d",&emp_no);
//         printf("enter your name : ");
//         scanf(" %c",&name);
//         printf("enter ba and da : \n");
//         scanf("%d %d",&ba,&da);

//         sal=ba+da;
//         printf("total sal of emp_no %d is = %d \n",emp_no,sal);
//         n++;
//     }
//     printf("eof");
//     return 0;
// }

// Q9 repeat 8 add gender bonus 100 if female

// int main()
// {
//     int n=1,emp_no,ba,da,sal;
//     char name,gen;

//     while (n<=5)
//     {
//         printf("enter your emp_no : \n");
//         scanf("%d",&emp_no);
//         printf("enter your name : ");
//         scanf(" %c",&name);
//         printf("enter ba and da : \n");
//         scanf("%d %d",&ba,&da);
//         printf("enter your gender : ");
//         scanf(" %c",&gen);

//         sal=ba+da;
//         if (gen=='F')
//         {
//             sal=sal+100;
//             printf("sal after gender bonus = %d \n",sal );
//         }
//         printf("total sal of emp_no %d = %d \n",emp_no,sal);
//         n++;
//     }
//     printf("eof");
//     return 0;
// }

// Q10 repeat 9 amd 200 to sal if married

// int main()
// {
//     int n=1,emp_no,ba,da,sal;
//     char name,gen,MS;

//     while (n<=5)
//     {
//         printf("enter your emp_no : \n");
//         scanf("%d",&emp_no);
//         printf("enter your name : ");
//         scanf(" %c",&name);
//         printf("enter ba and da : \n");
//         scanf("%d %d",&ba,&da);
//         printf("enter your gender : ");
//         scanf(" %c",&gen);
//         printf("Are you married : ");
//         scanf(" %c",&MS);

//         sal=ba+da;

//         if (gen=='F')
//         {
//             sal=sal+100;
//             printf("sal after gender bonus = %d \n",sal );
//         }
//         if (MS=='Y')
//         {
//             sal=sal+200;
//             printf("sal after MS bonus = %d \n",sal);
//         }

//         printf("total sal of emp_no %d = %d \n",emp_no,sal);
//         n++;
//     }
//     printf("eof");
//     return 0;
// }

// int main()
// {
//     int n, m=1, x;

//     printf("enter a number");
//     scanf("%d", &n);
//     n = x;

// l:
//     if (n >= 1)
//     {
//         m = m * n;
//         n--;
//         goto l;
//     }
//     printf("factorial of  %d = %d",x, m);
//     return 0;
// }

//  int main()
// {    int n,m,p;
//        m=1;
//     printf("Enter a number");
//     scanf("%d",&n);
//     p=n*m;
//    L: if (n>m)
//     {
//         p=p*m;
//          m++;
//       printf("factorial  is %d",p);
//        goto L;
//     }

//  return 0;
// }

// int main()
// {
//    int n=1;

//    while (n<=10)
//    {
//       printf("%d",n);
//       n++;
//       while (n%3==0)
//       {
//          printf("%d %d %d",n,n,n);
//          n++;
//       }
//    }
//    return 0;
// }

// int main()
// {
//    int n,m,x=1;

//    scanf("%d",&n);

//    m=n;

//    while (n>=1)
//    {
//       x=x*n;
//       n--;
//    }
//    printf("%d! = %d",m,x);
//    return 0;

// }

// int main()
// {
//    int n,r,x=1,m=1;

//    scanf("%d %d",&n,&r);

//    while (x<=r)
//    {
//       m=m*n;
//       x++;
//    }
//    printf("%d",m);
//    return 0;
// }

// Check prime number  N

int main()
{
   int n,m=2;

   scanf("%d",&n);

   for (;n==2 || n==3;)
   {
      printf("the number is prime ");
   }
   for (;n%m != 0;)
   {
      
   }
   
}