#include<stdio.h>
#include<math.h>

int main() {
    float radius, height, volume, surfaceArea;
    //Input of Radius and height of cylinder
    printf("enter the radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of cylinder: ");
    scanf("%f", &height);

    //Volume of cylinder
    volume = 3.14 * pow(radius, 2) * height;
    printf("Volume of the cylinder: %.2f\n", volume);

    //Surface Area of cylinder
    surfaceArea = 2 * 3.14 * radius * (height + radius);
    printf("Surface area of the cylinder: %.2f", surfaceArea);

    return 0;
}