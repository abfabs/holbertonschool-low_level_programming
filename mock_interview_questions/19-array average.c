float average(int *arr, int size)
{
    int sum = 0;
    float average;
    int i = 0;

    while (i < size)
    {
       sum = sum + arr[i];
       i++;
    }
    average = (float)sum / (float)size;

    return average;
}
