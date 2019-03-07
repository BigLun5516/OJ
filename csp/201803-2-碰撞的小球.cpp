#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>

int loc[110]; // 坐标
int dir[110]; // 方向
int order[110]; // order[1] 表示位于最左边的球的球号
bool ableMove[110];
int main() {
	int n, L, t;
	
	scanf("%d%d%d", &n, &L, &t);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &loc[i]);
		if (loc[i] != L)
		{
			dir[i] = 1;
		}
		else {
			dir[i] = -1;
		}
		order[i] = i;
	}
	loc[0] = 0;
	loc[n + 1] = L;
	dir[0] = dir[n + 1] = 0;
	order[0] = 0;
	order[n + 1] = n + 1;

	//排序
	for (int i = 1; i < n; i++)
	{
		int k = i;
		for (int j = i + 1; j < n + 1; j++)
		{
			if (loc[order[j]] < loc[order[k]]) {
				k = j;
			}
		}
		int temp = order[i];
		order[i] = order[k];
		order[k] = temp;
	}
	

	for (; t > 0; t--)
	{
		for (int i = 0; i <= n + 1; i++)
		{
			ableMove[i] = true;
		}
		for (int i = 0; i <= n; i++)
		{
			if (loc[order[i]] + dir[order[i]] == loc[order[i + 1]] + dir[order[i + 1]]) {
				loc[order[i]] = loc[order[i]] + dir[order[i]];
				loc[order[i + 1]] = loc[order[i]];
				dir[order[i]] *= -1;
				dir[order[i + 1]] *= -1;
				ableMove[order[i]] = false;
				ableMove[order[i + 1]] = false;
				i++;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if (ableMove[order[i]]) {
				loc[order[i]] += dir[order[i]];
			}
		}
	}
	for (int i = 1; i < n; i++)
	{
		printf("%d ", loc[i]);
	}
	printf("%d", loc[n]);
}