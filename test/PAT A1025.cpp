//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//struct Student {
//	char number[15];
//	int score;
//	int location;
//	int localRank;
//};
//
//Student student[30100];
//
//bool cmp(Student s1, Student s2) {
//	if (s1.score != s2.score) return s1.score > s2.score;
//	return strcmp(s1.number, s2.number) < 0;
//}
//
//int main() {
//	int n, k, num = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		for (int j = 0; j < k; j++)
//		{
//			scanf("%s %d", student[num].number, &student[num].score);
//			student[num].location = i + 1;
//			num++;
//		}
//		sort(&student[num - k], &student[num], cmp);
//		student[num - k].localRank = 1;
//		for (int j = num - k + 1; j < num; j++)
//		{
//			if (student[j].score == student[j - 1].score) {
//				student[j].localRank = student[j - 1].localRank;
//			}
//			else {
//				student[j].localRank = j - num + k + 1;
//			}
//		}
//	}
//	printf("%d\n", num);
//	sort(&student[0], &student[num], cmp);
//	int r = 1;
//	for (int i = 0; i < num; i++)
//	{
//		if (i > 0 && student[i].score != student[i - 1].score) {
//			r = i + 1;
//		}
//		printf("%s %d %d %d\n", student[i].number, r, student[i].location, student[i].localRank);
//	}
//}