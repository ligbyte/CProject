#include <stdio.h>
#include <stdlib.h>


void initArray(int *array,size_t size,int (*getRandValue)()) {

	for (size_t i = 0; i < size; i++)
	{
		array[i] = getRandValue();
	}


}


int getRand() {

	return rand();
}

int main() {

	int array[10];
	initArray(array,10,getRand);
	for (size_t i = 0; i < 10; i++)
	{
		printf("array[%d]=%d\n",i,array[i]);
	}


	system("pause");
	return 0;
}