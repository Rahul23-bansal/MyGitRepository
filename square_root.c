/**
 * Program which computes square root of a integer without using inbuilt functions
 *
 * Compilation: gcc -o square_root square_root.c
 * Execution: ./square_root
 *
 * @Rahul, 1910990494, 21/07/2021
 * Assignment 1
 */

#include<stdio.h>

double square_root_binary_search(int, int);

int main() {
    //Number and the precision
    int number=0;
    int precision=0;

    printf("Enter number ");
    scanf("%d", &number);
    printf("Enter precision ");
    scanf("%d", &precision);

    double result = square_root_binary_search (number, precision);
    printf("%.*lf",precision, result);

}  

/** Function computes square root using binary search
 *
 * Parameter:
 * number: integer number whose square root to compute
 * precision: int precision
 * Returns square root in double type
 */

double square_root_binary_search (int number, int precision) {
    
    double difference = 1;
    for(int i = 0; i < precision; i++) {
	    difference = difference/10;
    }

    double lower_limit = 0;
    double upper_limit = number;

    while((upper_limit - lower_limit) > difference) {
         double mid = (lower_limit + upper_limit) / 2;

	 if(mid * mid <= number) {
		 lower_limit = mid;
	 }
	 else {
		 upper_limit = mid; 
	}
    }
	 return lower_limit;
}
    

    
