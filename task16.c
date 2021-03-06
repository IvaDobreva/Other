#include <stdio.h>

#define max 10

int fill_array(int array[], int x);
int odd_num(int n, int x);
void print_array(int array[], int elements);
void prime_num(int array[], int elements);



void main() {
	int x;
	int array[max];
	int elements;

	do {
		printf("Enter number: ");
		scanf("%d", &x);
	}while (x<0);

	elements=fill_array(array, x);
	print_array(array, elements);
	prime_num(array, elements);
}

int fill_array(int array[], int x) {
	int index, counter=0;
	int n=1;
	for(index=0; index<max; index++) {
		n=odd_num(n, x);
		array[index]=n;
		counter++;
		if(n>=x) { return counter;}
		n++;
		
	}
	
}

int odd_num(int n, int x) {
	while(n<x) {
		if(n%2!=0) {
			if(x%n==0) {
				return n;
			}
		}
		n++;
	}

}

void print_array(int array[], int elements) {
	int index;
	for(index=0; index<elements-1; index++) {
		printf("%d\n", array[index]);
	}
}

void prime_num(int array[], int elements) {
	int index=0;
	int counter=0;
	int c;	

	for(index=0; index<elements; index++) {
		for(c=2; c<=array[index]-1; c++){
			if ( array[index]%c == 0 ) {
	 			break;
      			}
   		}
   		if (c == array[index]) {
			printf("%d is prime number.\n", array[index]);
		}
	}
}
