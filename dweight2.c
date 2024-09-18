#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int height, width, length, weight, volume;

    printf("Enter height of box: ");
    scanf("%d",&height);
    printf("Enter length of box: ");
    scanf("%d",&length);
    printf("Enter width of box: ");
    scanf("%d",&width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n",volume);
    printf("Weight (pounds): %d\n", weight);
}