//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int a[2100][2], b[2100][2];
//int c[1000010];
//
//int main() {
//	memset(a, 0, 4200 * sizeof(int));
//	memset(b, 0, 4200 * sizeof(int));
//	memset(c, 0, 1000010 * sizeof(int));
//
//	int n, time = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a[i][0], &a[i][1]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &b[i][0], &b[i][1]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = a[i][0]; j < a[i][1]; j++)
//		{
//			c[j]++;
//		}
//		for (int j = b[i][0]; j < b[i][1]; j++)
//		{
//			c[j]++;
//		}
//	}
//	
//	for (int i = 0; i < 1000010; i++)
//	{
//		if (c[i] == 2) {
//			time++;
//		}
//	}
//	printf("%d", time);
//}