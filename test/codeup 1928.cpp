//#define _CRT_SECURE_NO_WARNINGS
//
//#include<cstdio>
//
//int days[2][13] = {
//	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
//};
//
//bool isLeap(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main() {
//	int date1, date2;
//	int year1, month1, day1;
//	int year2, month2, day2;
//	int res;
//	while (scanf("%d%d", &date1, &date2) != EOF)
//	{
//		res = 1;
//		// 保证第一个日期更小
//		if (date1 > date2) {
//			int temp = date1;
//			date1 = date2;
//			date2 = temp;
//		}
//		year1 = date1 / 10000;
//		year2 = date2 / 10000;
//		month1 = (date1 / 100) % 100;
//		month2 = (date2 / 100) % 100;
//		day1 = date1 % 100;
//		day2 = date2 % 100;
//		while (year1 < year2 || month1 < month2 || day1 < day2) {
//			day1++;
//			if (day1 == days[isLeap(year1)][month1] + 1) {
//				month1++;
//				day1 = 1;
//			}
//			if (month1 == 13) {
//				year1++;
//				month1 = 1;
//			}
//			res++;
//		}
//		printf("%d\n", res);
//	}
//}