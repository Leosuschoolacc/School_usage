#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    float test;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    test = (volume + 165) / 166.0;

    printf("test = %f\n",test);

    printf("Dimensions: %dx%dx%d\n",height,length,width);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);
    return 0;
}