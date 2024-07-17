#include <stdio.h>
/*
Sequence of charachters terminate at null charachter.
ASCII code of null charachter is 0
*/
/*
// Manually take string

int main()
{
    char s[6] = {'A', 'S', 'E', 'E', 'F', '\0'};
    // the \0 is null charachter

    // above one is hectic so we use this instead

    char r[5] = {"ASEEF"};
    // In this way we don't have to write null character each the complier automatically ads that

    int i;

    // For printing string on screen we use various methods

    /*for ( i = 0; s[i] != '\0'; i++)
    {
        printf("%s",s[i]);
    }

    // Or we can simply use

    // printf("%s",s);

    // Or the predefined function

    puts(s);

    return 0;
}
*/

// Get string from user

int main()
{
    char s[20];

    int i;

    printf("Enter your name\n");

    //scanf("%s",s);

    //Here we didn't write & for address in scanf because s is compile as &s[0] 
    //when we have adress of 1st index the remaining will be in consecative orer

    // so we can also use

    //scanf("%s",&s[0]);

    // but when enter our name if we put space or use enter key or tab key the scanf
    // takes space as delimeter or null character and take only one word 

    // So the alternative for this is 

    gets(s);   // it only takes enter key as delimeter

    puts(s);

    return 0;
}