#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>

int main() {
	int n, x, k;
	int a[200];

	while (scanf("%d", &n) != EOF) {
		memset(a, 0, 200);
		k = -1;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &x);

		for (int i = 0; i < n; i++)
		{
			if (a[i] == x) {
				k = i;
				break;
			}
		}
		printf("%d\n", k);
	}



}