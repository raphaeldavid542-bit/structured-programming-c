#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double R;
    double const PI=3.142;


    printf("\n%20_____Surface Area of a sphere ______\n");
    printf("Enter the radius of the sphere: ");
    scanf("%lf",&R);
    printf("The surface area of the sphere is %f", 4*PI*pow(R,2));



    return 0;
}
