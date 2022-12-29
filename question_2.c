//2. Write a program to ask the user to input a number of data values he would like to\
enter then create an array dynamically to accommodate the data values. Now take\
the input from the user and display the average of data values.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    int size,i;
    float sum=0,avg =0;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    ptr = (float*)calloc(size,sizeof(float));
    if(ptr==NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    printf("Enter %d values:\n",size);
    for(i=0;i<size;i++)
    {
       scanf("%f",ptr+i);      
    }
    for(i=0;i<size;i++)
     sum +=*(ptr+i);
    avg = sum/size;
    printf("Average = %.2f",avg);
    free(ptr); // release the memory
    getch();
    return 0;
}