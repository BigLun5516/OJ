//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//
//int main() {
//	int lastScore, thisScore, score;
//	lastScore = 1;
//	score = 0;
//	while (1)
//	{
//		scanf("%d", &thisScore);
//		if (!thisScore) {
//			break;
//		}
//		
//		if (thisScore == 2) {
//			if (lastScore == 1) {
//				score += 2;
//				lastScore = 2;
//			}
//			else {
//				score += (lastScore + 2);
//				lastScore += 2;
//			}
//		}
//		else
//		{
//			score += 1;
//			lastScore = 1;
//		}
//	}
//	printf("%d", score);
//}