#include <stdio.h>//LE DO Y NHI_ PH34335
#include<unistd.h>
int main()
{
    int min, max;
    int i = min;
    float sum = 0, count = 0, average;
    system("cls"), system("color 1");
    printf("Min: "), scanf("%d", &min);
    printf("Max: "), scanf("%d", &max);
    while(i<=max)
    {
        if(i%2==0)
        {
            sum+=i;
            count ++;
        }
        i++;
    }
    average = sum/count ;
    printf("Average: %g", average);
}