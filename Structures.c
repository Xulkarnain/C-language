#include <stdio.h>

//simple structure

/*
struct date
{
    int d,m,y;
};

int main()
{
   struct date today,d1,date;    // Here struct is just key word and date is new user defined data type and taday,d1 are variables

   today.d=27;
   today.m=01;       // Here we have to specify the variables we want to enter data to
   today.y=2024;

   // we can simply assign all data into other sae type of variable

   d1=today;

   // input data from user

   printf("enter todays date : ");
   scanf("%d/%d/%d",&date.d,&date.m,&date.y);
   printf("%d/%d/%d",date.d,date.m,date.y);
}
*/

// Using Functions in Structure

struct student
{
    int Rollno,class;
    char name[20];
    float marks;
};

struct student input()
{
    struct student a;

    printf("Enter Rollno , Class , Name , marks");

    scanf("%d",&a.Rollno);
    scanf("%d",&a.class);

    fflush(stdin);           // this is used to clear the buffer value in name other wise it is storing in float 
    
    // this doesn't clear buffer value don't know why

    fgets(a.name, 20 , stdin);
    scanf("%f",&a.marks);
    return(a);


}

void display(struct student b)
{
    printf("%d %d %s %f",b.Rollno,b.class,b.name,b.marks);

}

void main()
{
    struct student b;

    b=input();

    display(b);
}