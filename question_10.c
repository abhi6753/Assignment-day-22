//10. Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr,size,i,min,max;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    ptr  = (int*)malloc(sizeof(int)*size);
    if(ptr == NULL)
    {
        printf("memory not allocated");
        getch();
        return 0;
    }
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
      scanf("%d",ptr+i);
    min =max= *(ptr);
    for(i=1;i<size;i++)
    {
        if(min>*(ptr+i))
        {
            min = *(ptr+i);
        }
        if(max < *(ptr+i))
            max = *(ptr+i);
    }
    printf("Minimum = %d\nMaximum = %d",min,max);
    free(ptr);
    getch();
    return 0;    
}