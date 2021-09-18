#include<stdio.h>

int main()
{
    char name[100];

    printf("What's your name? ");

    //get string input. Note that We are not using &name here.
    scanf("%s",name);

    //print the name
    printf("Hello %s\n",name);

    return 0;
}
