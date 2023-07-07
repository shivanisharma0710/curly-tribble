#include <stdio.h>
#include <math.h>
#define SIZE 15

double calculateMean(int data[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += data[i];
    }
    return sum / size;
}

double calculateStandardDeviation(int data[], int size, double mean)
{
    double sumOfSquaredDeviations = 0.0;
    for (int i = 0; i < size; i++) 
    {
        double deviation = data[i] - mean;
        sumOfSquaredDeviations += deviation * deviation;
    }
    double meanOfSquaredDeviations = sumOfSquaredDeviations / size;
    return sqrt(meanOfSquaredDeviations);
}

int main()
{
    int data[SIZE] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};

    double mean = calculateMean(data, SIZE);
    double standardDeviation = calculateStandardDeviation(data, SIZE, mean);

    printf("Mean: %lf\n", mean);
    printf("Standard Deviation: %lf\n", standardDeviation);

    return 0;
}
