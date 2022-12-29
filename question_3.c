//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,sum=0;
    printf("Enter how many number you want to sum:\n");
    scanf("%d",&n);
    ptr = (int*)malloc(sizeof(int)*n);
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        getch();
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
      sum +=*(ptr+i);
    printf("Sum of entered %d number is %d",n,sum);
    free(ptr);
    getch();
    return 0; 

}
