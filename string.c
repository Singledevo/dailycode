#include<stdio.h>

char arr[20];

int main(){
    
    printf("Enter the string: "); 
    scanf("%s",arr); // as we are giving our string in array,
    //and array is by default pointing to its first element so no need to give "&" in scanf() function.
    printf("%s",arr);
    return 0;
}