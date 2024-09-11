#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringAppend(char *dest, char *src)
{
    while (*dest !='\0')
    {
        *dest++;
    }
    while (*src!='\0')
    {
        *dest= *src;
        *dest++;
        *src++;
    }
    
    *dest=='\0';
}
int main()
{
    char *str2="shashank";
    char *str1="prajakta";
    char *app=(char *)malloc(30);
    // printf("ENter the str1 : ");
    // scanf("%s",&str1);
    // printf("ENter the str2: ");
    // scanf("%s",&str2);
    strcpy(app,str1);


    stringAppend(app,str2);
    printf("%s",app);
    free(app);
}