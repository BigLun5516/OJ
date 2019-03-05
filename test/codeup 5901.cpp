//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<cstring>
//
//int main() {
//	char s[300];
//	memset(s, 0, 300);
//	scanf("%s", s);
//	int n = 0;
//	while (s[n] != '\0') {
//		n++;
//	}
//	int i = 0, j = n - 1;
//	bool flag = true;
//	while (i <= j) {
//		if (s[i] != s[j]) {
//			flag = false;
//			break;
//		}
//		i++;
//		j--;
//	}
//	if (flag) {
//		printf("YES\n");
//	}
//	else {
//		printf("NO\n");
//	}
//}