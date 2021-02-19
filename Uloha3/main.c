#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    //Uloha 1.3
    printf("Uloha 1.3\n");
    printf("FLT_EPSILON from float.h = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON from float.h = %e\n", DBL_EPSILON);

    float fEps = 1.0f;
    while(1.0f + fEps / 2.0f > 1.0f)
    {
        fEps = fEps/2.0f;
    }
    printf("Calculated machine epsilon float: %e\n", fEps);

    double dEps = 1.0f;
    while(1.0f + dEps / 2.0f > 1.0f)
    {
        dEps = dEps/2.0f;
    }
    printf("Calculated machine epsilon double: %e\n", dEps);

    while(1){}
}
