// PAT B1032.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include<cstdio>
#include<string.h>

int score[1000000];


int main()
{
	memset(score, 0, 1000000);
	int n, tempId, tempSocre, resId, resScore;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &tempId, &tempSocre);
		score[tempId] += tempSocre;
	}

	resId = 0;
	resScore = 0;
	for (int i = 1; i < 100001; i++)
	{
		if (score[i] > resScore) {
			resId = i;
			resScore = score[i];
		}
	}
	printf("%d %d", resId, resScore);
}

