#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CheckSum(char str[], int size)
{
    int byteSeq = 0;
    char strSeq[3];
    int cc = 0;
    for(int i=1; i < size-1; i+=2) // 1st value [0] - ';' - not need ;
    {
        strSeq[0] = str[i];     // append 1st char to char array
        strSeq[1] = str[i+1];   // append 2nd char to char array
        strSeq[2] = '\0';       // end of string

        byteSeq = (int)strtol(strSeq, NULL, 16); // convert hex string to int value
        cc += byteSeq; // add to check sum
    }

    cc = 0xff - cc&0b0000000011111111;
    cc += 1;
    return cc;
}

int main()
{
    //Uloha 1.5
    printf("Uloha 1.5\n");

    char hex1[] = ":10010000214601360121470136007EFE09D21901";
    printf("Check sum: %02x\n" , CheckSum(hex1, sizeof(hex1)));

    char hex2[] = ":100010000C9445000C9445000C9445000C944500";
    printf("Check sum: %02x\n" , CheckSum(hex2, sizeof(hex2)));

    char hex3[] = ":100020000C9445000C9445000C9445000C944500";
    printf("Check sum: %02x\n" , CheckSum(hex3, sizeof(hex3)));

    char hex4[] = ":100030000C9445000C9445000C9445000C944500";
    printf("Check sum: %02x\n" , CheckSum(hex4, sizeof(hex4)));

    char hex5[] = ":100040000C9445000C9445000C9445000C944500";
    printf("Check sum: %02x\n" , CheckSum(hex5, sizeof(hex5)));

    while(1){}
}
