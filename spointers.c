#include <stdio.h>


//WAP to print length of string

/*
int length(char *);

int main()
{
    

    printf("%d", length("computer"));

return 0;
}

int length(char *p)
{
    int i;
    for ( i = 0; *(p + i) != '\0' ; i++)
    {
    }
    return i;
}
*/

//WAP to reverse a string

/*
char* reverse(char *);

int main()
{
    char str[]="computer";
    printf(" %s ",reverse(str));
    return 0;
}

char* reverse(char *p)
{
    int i,l;
    char t;

    for ( i = 0; *(p + i) != '\0'; i++);
    

    for ( l = 0; l < i/2 ; l++)
    {
        t = *(p + l);
        *(p + l) = *(p + i - 1 -l);
        *(p + i - 1 - l) = t;
    }
    return p;
    
}
*/