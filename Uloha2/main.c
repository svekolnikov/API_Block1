#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Uloha 1.2
    printf("Uloha 1.2\n");
    int n;
    char romanNum[8] = {0};
    do
    {
        printf("Please enter the number from 1 to 100\n");
        scanf("%d", &n);
    }while(n < 1 || n > 100);

    while(n > 0)
    {
        if(n == 100)
        {
            n -= 100;
            strncat(romanNum, "C", 1); // append char to char array
        }
        else if(n >= 90)
        {
            n -= 90;
            strncat(romanNum, "XC", 2);
        }
        else if(n >= 50)
        {
            n -= 50;
            strncat(romanNum, "L", 1);
        }
        else if(n >= 40)
        {
            n -= 40;
            strncat(romanNum, "XL", 2);
        }
        else if(n >= 10)
        {
            n -= 10;
            strncat(romanNum, "X", 1);
        }
        else if(n >= 9)
        {
            n -= 9;
            strncat(romanNum, "IX", 2);
        }
        else if(n >= 5)
        {
            n -= 5;
            strncat(romanNum, "V", 1);
        }
        else if(n >= 4)
        {
            n -= 4;
            strncat(romanNum, "IV", 2);
        }
        else if(n >= 1)
        {
            n -= 1;
            strncat(romanNum, "I", 1);
        }
    }

    printf("Roman number: %s\n", romanNum);

    while(1){}
}
