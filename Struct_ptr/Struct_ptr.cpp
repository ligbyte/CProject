#include <stdio.h>
#include <stdlib.h>

#define PTR2NUM(u) ((double)((unsigned long)(&u)))
#define NUM2PTR(u) ((unsigned long)u)


typedef struct pencil {

	int hardness;
	char marker;
	int number;
} PEN;


void modfyStruct(double addr) {
	PEN* pen = (PEN*)NUM2PTR(addr);

	pen->hardness = 139;
	pen->marker = 'm';
	pen->number = 31;

}


int main() {

	PEN pen;


	modfyStruct(PTR2NUM(pen));

	printf("pen.hardness=%d   pen.marker=%c  pen.number=%d\n", pen.hardness, pen.marker, pen.number);

	system("pause");
	return 0;
}