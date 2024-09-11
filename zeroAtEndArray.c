/*shifting the 0 element present in a aaray at last in the same aaray*/

#include<stdio.h>
int main()
{
    int n, m=0;
    printf("Enter the size of aaray: ");
    scanf("%d",&n);
    int arr[n];
    // int newarr[]={0,0,0,0,0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // to display aaray
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            arr[m]=arr[i];
            m++;
        } 

    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",newarr[i]);
    // }
   for (int i = m; m< n; i++)
    {
        arr[m++]= 0;
     }
// while (m<n)
// {
    
// }

    
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}