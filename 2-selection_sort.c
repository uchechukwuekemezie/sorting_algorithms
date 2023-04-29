#include "sort.h"
/**
 *selection_sort - This function sorts an array of integers in an ascending order and it does this through
 *the Selection sort algorithm
 *@array: the array of integers to sort
 *@size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;
int temp;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
min_idx = j;
}
if (min_idx != i)
{
temp = array[min_idx];
array[min_idx] = array[i];
array[i] = temp;
print_array(array, size);
}
}
}
