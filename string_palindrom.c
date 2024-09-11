#include<stdio.h>
int n;
int palindrom(char arr[], int n )
{
    int s=0;
    int e=n-1;
      while (s<=e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
      
    }
     return 1;
}
int main()
{
    
    char str1[30];
    printf("Enter the string: ");
    scanf("%s",str1);
    
    for (int i = 0; str1[i]!='\0'; i++)
    {
        n++;
    }
    printf("%d\n",n);
    
    int result =palindrom(str1,n);
    if (result==1)
    {
        printf("string is palindrom");
    }
    else
    {
        printf("string is not palindrome");
    }
    
    
    
    return 0;
}