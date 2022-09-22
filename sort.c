#include <stdio.h>

int main() 
{
    int i=0,ar[]={23,25,1,4,3},j=0,temp;
    while(j<5)
    {
    for(i=0;i<5;i++)
    {
        if(ar[i]<ar[i+1])
        {
            continue;
        }
        else if(ar[i]>ar[i+1])
        {
            temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
           
            
        }
      // printf("%d ",ar[i]);
    }j++;
 }   for(i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
//printf("%d ",ar[0]);
    
}
