#include<stdio.h>//NONG HOANG VU_PH33506
#include<unistd.h>
int main()
{
    int x, i, count =0;
    system("cls"), system("color 1");
    printf("Number X: "), scanf("%d", &x);
    for(i=1; i<x; i++)
    {
        if(i*i==x)
        {
            printf("%d is a square number", x);
            break;
        }
    }
}