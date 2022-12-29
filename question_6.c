//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int *ptr,size,i,largets;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    ptr = (int*) malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        getch();
        return 0;
    }
    for(i=0;i<size;i++)
     scanf("%d",ptr+i);
    largets = *ptr;
    for(i=0;i<size;i++)
    {
        if(largets<*(ptr+i))
          largets = *(ptr+i);
    }
    printf("Larget number = %d",largets);
    free(ptr);
    getch();
    return 0;
}
