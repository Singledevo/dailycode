#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
    int n= strlen(str);
   for (int i = 0; i < n/2; i++)
   {
        char temp = str[i];
        str[i]= str[n-i-1];
        str[n-i-1]=temp;
   }
    
}



int main(){
    char mystr[]="prajkta";
    // printf("Enter the string: ");
    // scanf("%s",mystr);

    reverse(mystr);
    printf("reverse string : %s",mystr);
    return 0;

}