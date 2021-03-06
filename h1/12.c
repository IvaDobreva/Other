/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери първото число N в интервала [0; +∞) делящо се на х. Да се намери сумата на всички числа в интервала [0; N] и да се запише като първи елемент в масива. Да се намери второто число N' в интервала [0; +∞) делящо се на x. Да се намери сумата на всички числа в интервала [0, N'] и да се запише като втори елемент в масива. Аналогично да се запълнят и останалите елементи на масива. Масивът да се изведе на стандартния изход.
*/

#include <stdio.h>

#define max 10

void fill_array(int array[], int x);

int find_n(int x, int n);

void print_array(int array[]);

int main() {
	int x, n;
	int array[max];

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);

	return 0;
}

void fill_array(int array[], int x) {
	int index, sum=0, i;
	int n=1;
	for(index=0; index<max; index++) {
		n=find_n(x, n);
		for(i=0; i<=n; i++) {
			sum+=i;
		}
		array[index]=sum;
	}
}

int find_n(int x, int n) {
	while(n%x!=0) {
		n++;
	}
	return n;
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %d\n", index, array[index] );
	}
}
