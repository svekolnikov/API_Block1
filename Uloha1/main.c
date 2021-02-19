#include <stdio.h>
#include <stdlib.h>

long long DecToByte(long num)
{
    long long bin = 0;
    long long k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10; // 1, 10, 100 ...
        num /= 2;
    }

    return bin;
}

int main()
{
    //Uloha 1.1
    printf("Uloha 1.1\n");
    char x = 'X';
    long num = 33777;
    printf("Number %d in dec: %d \n", num);
    printf("Number %d in hex: 0x%x \n", num);
    printf("Number %d in binary: %llu \n",num, DecToByte(num));
    printf("Character %c in dec: %d \n", x,(int)x);
    printf("Character %c in hex: 0x%x \n", x, (int)x);
    printf("Character %c in binary: %d \n", x, DecToByte((long)x));

    while(1){}
}
