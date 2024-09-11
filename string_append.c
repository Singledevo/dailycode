#include<stdio.h>
void stringappend( char *dest, char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src !='\0')
    {
        *dest=*src;
        *dest++;
        *src++;
    }
    
}
int main()
{   
    char str1[40], str2[30];
    printf("ENter the string : ");
    scanf("%s",str1);

    printf("Enter the str2 : ");
    scanf("%s",str2);

    stringappend(str1,str2);
    printf("%s",str1);

    return 0;
}