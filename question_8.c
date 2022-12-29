//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    printf("Enter a number:\n");
    scanf("%d",ptr);
    free(ptr); // I release the memory which ptr point but until ptr hold the adrress of that location.
    printf("You have entered %d",ptr); //I've release the memory which allocated using malloc()\
    but stil ptr has hold the address and after deleting that memory i used it and compiler don't gives any error\
    This terminology is called Dangling pointer.  
    getch();
    return 0;
}