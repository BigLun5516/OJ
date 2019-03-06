//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<vector>
//
//using namespace std;
//
//int main(){
//	int n;
//	vector<int> shops1, shops2;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		scanf("%d", &temp);
//		shops1.push_back(temp);
//	}
//	shops2.push_back((shops1[1] + shops1[0]) / 2);
//	
//	for (int i = 1; i < shops1.size() - 1; i++)
//	{
//		shops2.push_back((shops1[i - 1] + shops1[i] + shops1[i + 1]) / 3);
//	}
//
//	shops2.push_back((shops1[shops1.size() - 2] + shops1[shops1.size() - 1]) / 2);
//	for (int i = 0; i < shops2.size() - 1; i++)
//	{
//		printf("%d ", shops2[i]);
//	}
//	printf("%d", shops2[shops2.size() - 1]);
//}