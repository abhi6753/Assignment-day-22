//5. Write a program to read a one dimensional array, print sum of all elements along with\
inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int *ptr,num,sum=0,i;
    printf("Enter number of elements:\n");
    scanf("%d",&num);
    ptr = (int*)calloc(num,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        getch();
        return 0;
    }
    printf("Enter %d elements:\n",num);
    for(i=0;i<num;i++)
     scanf("%d",ptr+i);

    for(i=0;i<num;i++)
     sum +=*(ptr+i);
    printf("Sum of %d elements are %d",num,sum);
    free(ptr);
    getch();
    return 0;
}
