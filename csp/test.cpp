//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//using namespace std;
//int main() {
//	int n = 0;//С�����
//	int L = 0;//�߶γ���
//	int t = 0;//ʱ��
//	int Q[100] = { 0 };//���С���ʼλ��
//	int Q2[100] = { 0 };//�ݴ���һ��С��λ��
//	int QF[100] = { 0 };//���С��ǰ�˶�����1���ҡ�-1����
//	for (int i = 0; i < 100; i++)//С���˶������ʼ��Ϊ����
//		QF[i] = 1;
//	cin >> n >> L >> t;
//	for (int i = 0; i < n; i++)
//		cin >> Q[i];              //����ʵ�����������Ҫ��
//	int m1;
//	int m2;
//	for (int i = 0; i < t; i++) {//�����ʵ��t�����ڵ�ѭ��
//		for (int i = 0; i < n; i++)//�ݴ��ϸ�����С���˶�����
//			Q2[i] = Q[i];
//		for (m1 = 0; m1 < n; m1++) {
//			if ((Q2[m1] == L && QF[m1] == 1) || (Q2[m1] == 0 && QF[m1] == -1))//�����˵�
//				QF[m1] = -QF[m1];
//			else//С��֮����ײ
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