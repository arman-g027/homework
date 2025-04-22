#include <stdio.h>
#include <stdlib.h>

int *create_third(int *arr, int size1, int *arr2, int size2);

int main()
{
	int size1, size2;
	int *arr1, *arr2;
	
    printf("Enter size of the first array: ");
	scanf("%d", &size1);
	printf("Enter size of the second array: ");
	scanf("%d", &size2);

	arr1 = (int *)malloc(size1 * sizeof(int));
	arr2 = (int *)malloc(size2 * sizeof(int));

	
    for (int i = 0; i < size1; ++i) {
	    printf("Enter first array elemenst: ");
		scanf("%d", &arr1[i]);
	}

	
    for (int i = 0; i < size2; ++i) {
	    printf("Enter second array elemenst: ");
		scanf("%d", &arr2[i]);
	}

	int *arr3 = create_third(arr1, size1, arr2, size2);
	
    for (int i = 0; i < size1 + size2; ++i) {
		printf("%d ", arr3[i]);
	}
	
    free(arr1);
	free(arr2);
	free(arr3);
}

int *create_third(int *arr1, int size1, int *arr2, int size2)
{
	int *arr3 = (int *)calloc(sizeof(int), (size1 + size2));
	int j = 0;
	for (int i = 0; i < size1; ++i) {
		if (arr1[i] % 2 == 1) {
			arr3[j] = arr1[i];
			j++;
		}
	}
	for (int i = 0; i < size2; ++i) {
		if (arr2[i] % 2 == 1) {
			arr3[j] = arr2[i];
			j++;
		}
	}
	return arr3;
}
