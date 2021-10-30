#include<stdio.h>
#define PI 3.141

int main(){
    float radius, area;
    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    // Area of Circle = (PI * Radius * Radius) 
    area = PI * radius * radius;
    printf("Area of circle = %f\n", area);
    return 0;
}
