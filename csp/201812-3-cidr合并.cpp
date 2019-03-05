#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<stack>
#include<list>
#include<vector>
#include<iostream>

using namespace std;

struct IP {
	int ip_binary[32];
	int prefixLen;
	int port[4];
	
	IP() {
		memset(port, 0, 4 * sizeof(int));
	}
};


IP toStruct(char* s, int len) {
	char tempChar[10];
	int loc = 0;
	int tempInt;
	int port = 1;

	IP ip;
	memset(ip.ip_binary, 0, 32 * sizeof(int));

	int i;
	for (i = 0; s[i] != '/' && s[i] != '\0'; i++)
	{
		if (s[i] == '.') {
			memset(tempChar, 0, 10);
			port++;
			loc = 0;
			continue;
		}
		tempChar[loc] = s[i];
		loc++;
		if (s[i + 1] == '.' || s[i + 1] == '\0' || s[i + 1] == '/') {
			tempChar[loc] = '\0';
			sscanf(tempChar, "%d", &tempInt);
			ip.port[port - 1] = tempInt;
			for (int j = port * 8 - 1; tempInt != 0; j--) {
				ip.ip_binary[j] = tempInt % 2;
				tempInt /= 2;
			}
		}
	}
	if (s[i] == '\0') {
		ip.prefixLen = port * 8;
	}
	else {
		sscanf(s + i + 1, "%d", &ip.prefixLen);
	}
	return ip;
}

bool compareIp(const IP& ip1, const IP& ip2) {
	for (int i = 0; i < 32; i++)
	{
		if (ip1.ip_binary[i] != ip2.ip_binary[i]) {
			return ip1.ip_binary[i] < ip2.ip_binary[i];
		}
	}
	return ip1.prefixLen < ip2.prefixLen;
}

void flushIP(IP& ip) {
	int k = ip.prefixLen / 8;
	ip.port[k] = 0;
	int product = 1;
	for (int i = 8 * k + 7; i >= 8 * k; i--)
	{
		ip.port[k] += ip.ip_binary[i] * product;
		product *= 2;
	}
}

int main() {
	int n;
	char s[50];
	list<IP> ipList;
	vector<IP> ips;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		memset(s, 0, 50);
		scanf("%s", s);
		ipList.push_back(toStruct(s, strlen(s)));
	}
	
	ipList.sort(compareIp);

	for (list<IP>::iterator it = ipList.begin(); it != ipList.end(); it++) {
		ips.push_back((*it));
	}

	for (int i = 0; i < ips.size() - 1;)
	{
		int flag = true; // 前一项是否包含后一项
		if (ips[i].prefixLen <= ips[i + 1].prefixLen) {
			for (int j = 0; j < ips[i].prefixLen; j++)
			{
				if (ips[i].ip_binary[j] != ips[i + 1].ip_binary[j]) {
					i++;
					flag = false;
					break;
				}
			}
			if (flag) {
				ips.erase(ips.begin() + i + 1);
			}
		}
		else {
			i++;
		}
	}

	stack<IP> stack1, stack2;
	for (int i = ips.size() - 1; i >= 1; i--)
	{
		stack2.push(ips[i]);
	}
	stack1.push(ips[0]);
	while (!stack2.empty()) {
		IP temp1 = stack2.top();
		stack2.pop();

		if (stack1.empty()) {
			stack1.push(temp1);
			continue;
		}

		IP temp2 = stack1.top();
		if (temp1.prefixLen == temp2.prefixLen) {
			bool flag = true; // 可以合并
			for (int i = 0; i < temp1.prefixLen - 1; i++)
			{
				if (temp1.ip_binary[i] != temp2.ip_binary[i])
				{
					flag = false;
				}
			}
			if (flag) {
				IP newIp = temp1;
				newIp.prefixLen--;
				newIp.ip_binary[newIp.prefixLen] = 0;
				flushIP(newIp);
				stack1.pop();
				stack2.push(newIp);
			}
			else {
				stack1.push(temp1);
			}
		}
		else
		{
			stack1.push(temp1);
		}
	}
	
	// print
	ips.clear();
	while (!stack1.empty()) {
		ips.push_back(stack1.top());
		stack1.pop();
	}
	for (int i = ips.size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d.", ips[i].port[j]);
		}
		printf("%d/%d\n", ips[i].port[3], ips[i].prefixLen);
	}


	/*list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	list<int>::iterator it = l.begin();
	cout << *(++it) ;

	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << " ";
	}*/
}