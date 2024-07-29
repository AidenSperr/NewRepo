#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

double divide(double x, double y) {
	return x / y;
}

int exponent(int x, int e) {
	return (int)pow(x, e);
}

int main(void) {
	int num1, num2;
	int choice = 0;
	int result;
	double divideres;
	srand(time(NULL));

	while (choice != 6) {
		printf("What operation would you like to do?\n");
		printf("Options:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exponent\n6. Exit\nChoice: ");
		scanf("%d", &choice);
		puts("");
		switch (choice) {
		case 1:
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1; 
			result = add(num1, num2);
			printf("%d + %d = %d\n\n", num1, num2, result);
			break;
		case 2:
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1;
			result = subtract(num1, num2);
			printf("%d - %d = %d\n\n", num1, num2, result);
			break;
		case 3:
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1;
			result = multiply(num1, num2);
			printf("%d * %d = %d\n\n", num1, num2, result);
			break;
		case 4:
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1;
			divideres = divide(num1, num2);
			printf("%d / %d = %lf\n\n", num1, num2, divideres);
			break;
		case 5:
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1;
			result = exponent(num1, num2 % 4);
			printf("%d ^ %d = %d\n\n", num1, num2 % 4, result);
			break;
		case 6:
			printf("Program complete.\n");
			break;
		default:
			printf("Invalid input, try again.\n\n");
		}
	}

	return 0;
}