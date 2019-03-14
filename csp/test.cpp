//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//using namespace std;
//int main() {
//	int n = 0;//小球个数
//	int L = 0;//线段长度
//	int t = 0;//时间
//	int Q[100] = { 0 };//存放小球初始位置
//	int Q2[100] = { 0 };//暂存上一秒小球位置
//	int QF[100] = { 0 };//存放小球当前运动方向，1向右、-1向左
//	for (int i = 0; i < 100; i++)//小球运动方向初始化为向右
//		QF[i] = 1;
//	cin >> n >> L >> t;
//	for (int i = 0; i < n; i++)
//		cin >> Q[i];              //至此实现题设的输入要求
//	int m1;
//	int m2;
//	for (int i = 0; i < t; i++) {//最外层实现t个周期的循环
//		for (int i = 0; i < n; i++)//暂存上个周期小球运动方向
//			Q2[i] = Q[i];
//		for (m1 = 0; m1 < n; m1++) {
//			if ((Q2[m1] == L && QF[m1] == 1) || (Q2[m1] == 0 && QF[m1] == -1))//两个端点
//				QF[m1] = -QF[m1];
//			else//小球之间相撞
//				for (m2 = 0; m2 < n; m2++)
//					if (Q2[m1] == Q2[m2] && m1 != m2)
//						QF[m1] = -QF[m1];
//			Q[m1] = Q[m1] + QF[m1];
//		}
//	}
//	for (int i = 0; i < n; i++)
//		cout << Q[i] << " ";
//	cout << endl;
//	return 0;
//	system("pause");
//}