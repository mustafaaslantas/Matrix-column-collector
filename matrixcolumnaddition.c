#include <stdio.h>

int matrix[3][3];
int i, j;
int sum = 0;

int main() {

	for (i = 0; i < 3; i++) {

		for (j = 0; j < 3; j++) {
			printf("Enter a number:");
			scanf("%d", &matrix[i][j]);
		}
	}

	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			sum += matrix[i][j];
			}
		printf("%d ", sum);
		sum = 0;

	}	
	

	
	
	return 0;
	}