//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//
//const int maxn = 20;
//
//int n, p[maxn], hashTable[maxn];
//
//void generateP(int index) {
//	if (index == n + 1)
//	{
//		for (int i = 1; i < n + 1; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		if (!hashTable[i]) {
//			hashTable[i] = true;
//			p[index] = i;
//			generateP(index + 1);
//			hashTable[i] = false;
//		}
//	}
//}
//
//int main() {
//	n = 4;
//	generateP(1);
//	return 0;
//}