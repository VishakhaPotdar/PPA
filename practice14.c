#include<stdio.h>

void iReverse(int No1, int No2)
{
    int i, i1 = 0;
    for(i = No1; i>=No2; i--)
    {
        i1 = i;
        printf("%d\n", i1);
    }
}

int main()
{
    int i, i1 = 0;

    iReverse(11, 1);


    return 0;
}