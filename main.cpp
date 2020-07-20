//#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<strings.h>
int main()
{
    system("cls");
    printf("\n\n\t\t\t\tPlease Wait......Loading");
    printf("\n\n");
    for(int i=0;i<100;i++)
    {
        Sleep(12);
        printf("%c",219);
    }
    printf("\n\n \t\t\t\t\t\t\tSuccessfully Loaded");

    return 0;
}
