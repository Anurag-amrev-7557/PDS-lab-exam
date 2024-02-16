#include<stdio.h>
#include<math.h>

int main() {
    int x = 2, y = 2, r = 2, x1, y1;  //(x,y) -> coordinates of center of circle, r -> radius of circle, (x1, y1) -> coordinates of point 

    printf("Enter the value for (x1, y1): ");
    scanf("%d%d", &x1, &y1);

    float d = pow(x1, 2) + pow(y1, 2) + pow(x, 2) + pow (y, 2) - 2 * (x*x1 + y*y1);

    if(d > pow(r, 2)) {
        printf("Outside the circle.");
    } else if (d < pow(r, 2)) {
        printf("Inside the circle.");
    } else {
        printf("On the circle.");
    }

    return 0;
}    