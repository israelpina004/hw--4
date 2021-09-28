#include <stdio.h>

void problemOne() {
	int i;
	int sum = 0;
	for (i = 1; i < 1000; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("The sum of all the multiples of 3 and 5 less than 1000 equals %d\n", sum);
}

void problemSix() {
	int i;
	int sumSquares = 0;
	int squareSum = 0;
	int ans = 0;
	for (i = 1; i <= 100; i++) {
		sumSquares += (i * i);
	}
	for (i = 1; i <= 100; i++) {
		squareSum += i;
	}
	squareSum *= squareSum;
	ans = squareSum - sumSquares;
	printf("The difference between the square of the sum of whole numbers less than");
	printf(" or equal to 100 and the sum of the squares is %d\n", ans);
}
