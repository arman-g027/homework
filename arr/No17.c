#include <stdio.h>


int main()
{
	int arr[10];

            for (int i = 0; i < 10; ++i){
	            	scanf("%d", &arr[i]);
	            }

	    int target = 0;
	    printf("Enter target ");
    	scanf("%d", &target);
	
    int index = -80;
	int flag = 0;

	    for (int i = 0; i < 10; ++i){
	    	if (arr[i] == target){
			index = i;
			flag = 1;
		}
	}

	if (flag == 1){
		printf("Index is %d", index);
	} else {
		printf("-1");
	}

	return 0;
}
