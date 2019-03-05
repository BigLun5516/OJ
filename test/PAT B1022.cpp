//#define _CRT_SECURE_NO_WARNINGS
// 
//#include<cstdio>
//
//int main() {
//	int a, b, d, num;
//	int res[32];
//	scanf("%d%d%d", &a, &b, &d);
//	a += b;
//	num = 0;
//	do
//	{
//		res[num++] = a % d;
//		a /= d;
//	} while (a != 0);
//	for (int i = num - 1; i >= 0; i--)
//	{
//		printf("%d", res[i]);
//	}
//}
//
////int main() {
////	int x, d;
////	int res = 0, product = 1;
////	scanf("%d%d", &x, &d);
////	while (x != 0) {
////		res += (x % 10) * product;
////		x /= 10;
////		product *= d;
////	}
////	printf("%d\n", res);
////}