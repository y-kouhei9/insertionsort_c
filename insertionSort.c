# include <stdio.h>

void Insertion(int A[], int n)
{
	int i, j, x;

	for (i = 1; i < n; i++) {
		j = i - 1;
		x = A[i];

		while(j > -1 && A[j] > x) {
			A[j+1] = A[j];
			j--;
		}
		
		A[j+1] = x;
	}
}

int main(void)
{
	int A[] = {10, 20, 31, 3, 4, 8, 58, 18, 9, 22};
	int n   = sizeof(A)/sizeof(A[0]);
	int i;

	Insertion(A, n);

	for (i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");


	return 0;
}