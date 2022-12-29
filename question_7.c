//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input()
{
    int* ptr;
    ptr = (int*)malloc(sizeof(int));
    printf("Enter number:\n");
    scanf("%d",ptr);
}
int main()
{
    input();
    printf("value  = %d",*ptr); //ptr is local variable of input function it has\
                                deleted after end of input function so we can't access\
                                through main which ptr points that location that is memory leak.
    free(ptr); // we can't release that location because no any pointr point that location
    getch();
    return 0;

}
