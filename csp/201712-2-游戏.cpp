//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//
//int main() {
//	int n, k, number;
//	scanf("%d%d", &n, &k);
//	number = 1;
//	queue<int> q;
//	
//	for (int i = 1; i < n + 1; i++)
//	{
//		q.push(i);
//	}
//	int temp;
//	while (q.size() > 1) {
//		if (number % k != 0 && number % 10 != k) {
//			temp = q.front();
//			q.push(temp);
//		}
//		q.pop();
//		number++;
//	}
//	printf("%d", q.front());
//}