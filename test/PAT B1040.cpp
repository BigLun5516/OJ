#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>

const int MOD = 1000000007;

char str[100010];
int leftNumP[100010];

int main() {
	scanf("%s", str);
	int len = strlen(str);
	
	leftNumP[0] = 0;
	for (int i = 0; i < len; i++)
	{
		if (i > 0) {
			leftNumP[i] = leftNumP[i - 1];
		}
		if (str[i] == 'P') {
			leftNumP[i]++;
		}
	}

	int ans = 0;
	int rightNumT = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == 'T')
		{
			rightNumT++;
		}
		if (str[i] == 'A') {
			ans = (ans + leftNumP[i] * rightNumT) % MOD;
		}
	}
	printf("%d", ans);
}