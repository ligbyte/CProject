#include <stdio.h>
#include <stdlib.h>

int up2lower(int num1,int num2) {

	return num1 < num2 ? 1 : 0;
}


int lower2up(int num1, int num2) {

	return num1 > num2 ? 1 : 0;
}

void sort(int *array,size_t size,int (*compareFunc)(int,int)) {

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size - 1 -i; j++)
		{

			if (compareFunc(array[j],array[j+1])) {
			
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}

		}

	}

}


int main() {


	int array[10] = {5,3,16,8,1,4,56,88,15};
	printf("origin:");
	
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ",array[i]);
	}

	printf("\n");

	sort(array,10,lower2up);
	printf("lower2up:");

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	sort(array, 10, up2lower);
	printf("up2lower:");

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}