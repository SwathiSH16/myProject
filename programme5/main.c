#include <stdio.h>

int main()
{

    float km,m,feet,inches,centimeter;
    printf("enter the distance kilometer\n");
    scanf("%f",&km);
    m=km*1000;
    centimeter=km*100;
    inches=m/2.54;
    feet=inches/12;
    printf("disatnce in meter=%f\n",m);
    printf("distance in centimeter=%f\n",centimeter);
    printf("distance in feet=%f\n",feet);


    return 0;
}
