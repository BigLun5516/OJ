//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<cstring>
//#include<math.h>
//
//int visit[10010], loc[1010];
//
//int main() {
//	int n, minDistance;
//	
//	memset(visit, 0, 10010 * sizeof(int));
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		scanf("%d", &temp);
//		visit[temp]++;
//	}
//	
//	for (int i = 0; i < 10010; i++)
//	{
//		if (visit[i] > 1)
//		{
//			printf("0");
//			return 0;
//		}
//	}
//
//	int index = 0;
//	for (int i = 0; index < n; i++)
//	{
//		if (visit[i] == 1) {
//			loc[index] = i;
//			index++;
//		}
//	}
//
//	minDistance = 10010;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (abs(loc[i] - loc[i + 1]) < minDistance) {
//			minDistance = abs(loc[i] - loc[i + 1]);
//		}
//	}
//	printf("%d", minDistance);
//}