#include <stdio.h>
#include <stdlib.h>

int (*addPtr)(int,int);


int add(int num1,int num2) {

	return num1 + num2;

}


int main() {

	addPtr = add;


	printf("addPtr(13,31) = %d\n",addPtr(13,31));

	system("pause");
	return 0;
}