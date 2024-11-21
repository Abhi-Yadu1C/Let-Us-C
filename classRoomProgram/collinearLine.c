#include <stdio.h>

int main(){
    int Clollinear, x1, y1, x2, y2, x3, y3;
    int slope1, slope2;

    printf("Enter coordinates of first point (x1, y1)");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2, y2)");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of third point (x3, y3)");
    scanf("%d %d", &x3, &y3);

    slope1 = (y2 - y1) * (x3 - x2);
    slope2 = (y3 - y2) * (x2 - x1);

    Clollinear = (slope1 == slope2);

    if (Clollinear)
    {
        printf("The points are collinear.\n");
    }else
    {
        printf("The points are not collinear.\n");
    }
    return 0;
}