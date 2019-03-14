//#define _CRT_SECURE_NO_WARNINGS
//
//#include"stdio.h"
//#include<cstring>
//#include<iostream>
//
//using namespace std;
//
//void printWord(char* s, int begin, int end) {
//	for (int i = begin; i <= end; i++)
//	{
//		printf("%c", s[i]);
//	}
//}
//
//int main() {
//	int p[200];
//	int t;
//	char s[100];
//	memset(s, 0, 100);
//
//	cin.getline(s, 100);
//	int k = 0;
//	memset(p, 0, 200);
//	t = 1;
//	p[t] = 0;
//	while (s[k] != '\0') {
//		if (s[k] == ' ') {
//			t++;
//			p[t] = k - 1;
//			t++;
//			p[t] = k + 1;
//		}
//		k++;
//	}
//	t++;
//	p[t] = k - 1;
//	for (int i = t; i >= 1; i = i - 2)
//	{
//		printWord(s, p[i - 1], p[i]);
//		if (i != 2) {
//			printf(" ");
//		}
//	}
//	
//}