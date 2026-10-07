#include <stdio.h>
void main()
{
    char name[50];

    clrscr();

    printf("Enter your name: ");
    gets(name);

    printf("\nHello, Robotics!\n");
    printf("Student Name: %s", name);

    getch();
}
