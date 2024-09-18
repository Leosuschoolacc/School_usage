#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, length, width, volume, weight;
    float test;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / INCHES_PER_POUND;

    test = (volume + 165) / (float)INCHES_PER_POUND;

    printf("test = %f\n",test);

    printf("Dimensions: %dx%dx%d\n",height,length,width);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);
    return 0;
}