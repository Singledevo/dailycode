#include<stdio.h>

int main()
{
    int size=0, number,max=-1;
    char name[40];
    int sha[25];
    printf("Enter the name: ");
    scanf("%s",name);
    for (int i = 0; name[i]!='\0'; i++)
    {
        size++;
    }
    printf("%d\n",size);
    
    
    
    for (int i = 0; i <=25; i++)
    {
        sha[i]=0;
    }
   
    //printf("%s",name);
    for (int i = 0; i <size; i++)
    {
        //scanf("%c",&name[i]);
        char ch= name[i];
        number= ch -'a';
        sha[number]++;
    }
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (max<sha[i])
        {
            ans=i;
            max=sha[i];
        }
        
    }
   char alpha = 'a'+ ans;
   printf("maximum alphabate is %c", alpha);
    
   
    
    
    
    
    return 0;
}