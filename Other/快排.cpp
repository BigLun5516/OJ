#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<stdlib.h>
#include<time.h>

int partition(int A[], int left, int right) {
	int temp = A[left];
	int i, j;
	i = left;
	j = right;
	while (i < j) {
		while (i < j && A[j] > temp) j--;
		A[i] = A[j];
		while (i < j && A[i] <= temp) i++;
		A[j] = A[i];
	}
	A[i] = temp;
	return i;
}

int randPartition(int A[], int left, int right) {
	srand((unsigned)time(NULL));
	int p = int(rand() / (float)RAND_MAX) * (right - left) + left;
	int temp = A[p];
	A[p] = A[left];
	A[left] = temp;
	while (left < right) {
		while (left < right && A[right] > temp) right--;
		A[left] = A[right];
		while (left < right && A[left] <= temp) left++;
		A[right] = A[left];
	}
	A[left] = temp;
	return left;
}

void quickSort(int A[], int left, int right) {
	if (left >= right) {
		return;
	}
	int p = randPartition(A, left, right);
	quickSort(A, left, p - 1);
	quickSort(A, p + 1, right);
}

int main() {
	int n, A[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", A + i);
	}
	quickSort(A, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}