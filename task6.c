#include <stdio.h>
#include <stdlib.h>

#define max 100 

void array_init(int array[]);

void array_print(int *array);

void array_order(int *array, int num);

void main() {
	int x;
	int array[max];
	do {
		printf("Enter number between 0 and 10:\n");
		scanf("%d", &x);
	} while (x<=0 || x>=10); 
	array_init(array);
	printf("Array before:\n");
	array_print(array);
	array_order(array, x);
	printf("Array after order:\n");
	array_print(array);
}

void array_init(int array[]) {
	int index;	
	for(index=0; index<max; index++) {
		array[index] = rand() % max;
	}
}

void array_print(int *array) {
	int index;
	for(index=0; index<max; index++) {
		printf("%d  ", array[index]);
	}
	printf("\n");
}

void array_order(int *array, int num) {
	int temp;
	int temp_index=0;
	int index;
	for(index=0; index<max; index++) {
		if(array[index]%10==num) {
			temp=array[temp_index];
			array[temp_index]=array[index];
			array[index]=temp;
			temp_index++;
		}
	}
}
