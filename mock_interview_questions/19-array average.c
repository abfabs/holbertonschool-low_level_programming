double average(int *arr, int size)
{
    int sum = 0;
    int *ptr = arr;
    int *end = arr + size;

    while (ptr < end)
    {
        sum = sum + *ptr;
        ptr++;
    }

    return (double)sum / size;
}
