#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

float Factorial(float p)
{
    float fact = p;
    for(int i = 1; i < p; i++)
    {
        fact = fact*i;
    }
    return fact;
}

float FuncSin(float x)
{
    float term, y = 0;
    int k = 1;
    float p = 1.0f;

    while(1)
    {
        term = k*(powf(x,p))/Factorial(p);
        if(fabs(term) < FLT_EPSILON)
            break;

        y += term;
        k = (-1)*k;
        p += 2;
    }

    return y;
}

int main()
{
    //Uloha 1.4
    printf("Uloha 1.4\n");
    float x;

    do
    {
        printf("Please enter X from -pi/2(-%f) to pi/2(%f)\n", M_PI/2, M_PI/2);
        scanf("%f",&x);
    }while(abs(x) > M_PI/2);

    printf("Function Sin(%f) = %f\n",x, FuncSin(x));

    while(1){}
}
