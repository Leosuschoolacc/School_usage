#include <stdio.h>

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
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n",volume);
    printf("Weight (pounds): %d\n", weight);
}