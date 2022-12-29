//1. Define a function to input variable length string and store it in an array without memory wastage
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char *ptr,ch;
    int i=0,j=1;
    ptr = (char*)malloc(sizeof(char));
    if(ptr==NULL)
    {
        printf("Error! Memory not allocated");
        exit(0);
    }
    else
    {
      printf("Enter String:\n");
      while (ch!='\n')
      {
        ch= getc(stdin);
        j++;
        ptr = (char*)realloc(ptr,sizeof(char)*j);
        ptr[i]=ch;
        i++;
      }
    }
      ptr[i]='\0';
      printf("The entered string is : %s",ptr);
      free(ptr);
      getch();
      return 0;
}