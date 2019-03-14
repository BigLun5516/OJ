//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//
//const int maxn = 100;
//const int maxLength = 200;
//
//int length[maxn];
//
//int getNum(int n, int len) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += (length[i] / len);
//	}
//	return sum;
//}
//
//int main() {
//	int n, K;
//	scanf("%d %d", &n, &K);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &length[i]);
//	}
//
//	int i, j, mid;
//	i = 0;
//	j = maxLength;
//	while (i < j)
//	{
//		mid = (i + j) / 2;
//		if (getNum(n, mid) < K)
//		{
//			j = mid;
//		}
//		else {
//			i = mid + 1;
//		}
//	}
//	printf("%d \n", i - 1);
//	printf("%d \n", j - 1);
//}
//
