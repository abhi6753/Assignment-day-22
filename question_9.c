//9. Write a program to allocate memory dynamically of the size in bytes entered by the\
user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   size_t size;
   printf("Enter number how much you want to allocate memory:\n");
   scanf("%zu",&size);
   void *ptr;
   ptr = malloc(size);
   if(ptr==NULL)
   {
     printf("Sorry, Memory not allocated.\nTry Again");
     exit(0);
   }
   printf("%zu bytes allocated",size);
   free(ptr);
   getch();
   return 0;
}
