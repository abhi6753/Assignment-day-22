//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char *str,ch;
    int i=0,j=1;
    str = (char*) malloc(sizeof(char));
    if(str==NULL)
    {
        printf("Memory not allocated");
        getch(); // to hold the screen while end user not entered any key
        return 0;
    }
    printf("Enter your text:\n");
    while(ch!='\n')
    {
        ch = getc(stdin);
        j++;
        realloc(str,sizeof(char)*j);
        *(str+i) = ch;
        i++; 
    }
    *(str+i) = '\0';
    printf("You entered: %s",str);
    free(str);
    getch();
    return 0;
}