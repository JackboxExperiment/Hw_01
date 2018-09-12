#include <stdio.h>
#include <stdlib.h>

//Jackie Li
//Period 5
//2019-9-10

//Problem 1: Find the sum of all the multiple of 3 and 5 below 1000.
int multiples() {
    int sum = 0;

    for (int i = 0; i < 1000; i++) {
	if (i % 3 == 0 || i % 5 == 0) {
	    sum += i;
	}
    }
    return sum;
}

//Problem 5: Find the smallest number evenly divisible by the number 1-20.
int gcd( int big, int small) { //helper GCD function for finding the GCD of two given numbers
    int remainder = big % small;

    if ( remainder == 0 ) {
	return small;
    }
    return gcd(small, remainder);
}

int divisible() {
    int start = 2520;

    for (int i = 11; i <= 20; i++) {
	start *= i / gcd( start, i );
    }
    return start;
}

//Problem 6: Find the difference between the sum of the squares of 1-100 and the square of their sum.
int squareDif() {
    int squares = 0;
    int sums = 0;

    for (int i = 1; i <= 100; i++) {
	squares += i*i;
	sums += i;
    }
    sums *= sums;
    return sums - squares;
}
int main() {
    printf("Problem 1: %d \n", multiples());
    printf("Problem 5: %d \n", divisible());
    printf("Problem 6: %d \n", squareDif());
}
