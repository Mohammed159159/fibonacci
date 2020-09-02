#include<stdio.h>

int main() {


    int num;
    int a = 0;
    int b = 1;
    int c;
    printf(" Enter the nth number in Fibonacci: ");
    scanf(" %d", &num);


    if (num == 1)
        printf("\n 0");
    else
    {
        printf("\n\n0,1");

        for (int i = 1; i < num; i++)
        {
            c = a + b;
            printf(",%d", c);
            a = b;
            b = c;
        }
    }
}