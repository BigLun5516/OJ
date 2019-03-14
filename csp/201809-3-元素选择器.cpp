#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<stack>
#include<vector>
#include<list>

using namespace std;

struct Node {
	int level;
	string tag;
	string id;
};

Node nodes[110];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	for (int i = 0; i < n; i++)
	{
		string str;
		getline(cin, str);
		int numPoint = 0;
		while (str[numPoint] == ',') {
			numPoint++;
		}
		nodes[i].level = numPoint / 2;
		istringstream in(str.substr(numPoint, str.size() - numPoint));
		in >> nodes[i].tag;
		transform(nodes[i].tag.begin(), nodes[i].tag.end(), nodes[i].tag.begin(), ::tolower);
		int pos = str.find("#");
		if ( pos != string::npos) {
			nodes[i].id = str.substr(pos, str.size() - pos);
		}
	}

	vector<string> lines;
	vector<string> strs;
	vector<int> res;

	/*for (int i = 0; i < m; i++)
	{
		string s;
		getline(cin, s);
		lines.push_back(s);
	}*/

	for (int i = 0; i < m; i++)
	{
		strs.clear();
		res.clear();
		string str, subStr;
		getline(cin, str);
		//str = lines[i];
		istringstream in(str);
		while (getline(in, subStr, ' ')) {
			strs.push_back(subStr);
		}
		
		int last;
		//bool isId = (strs[last].find("#") == string::npos);
		bool flag;
		int row;
		for (int j = 0; j < n; j++)
		{
			flag = false;
			if (strs[strs.size() - 1].find("#") == string::npos && nodes[j].tag == strs[strs.size() - 1]
				|| strs[strs.size() - 1].find("#") != string::npos && nodes[j].id == strs[strs.size() - 1]) {
				last = j;
				row = j + 1;
				flag = true;
			}
			
			if (flag){
				if (strs.size() == 1) {
					res.push_back(row);
					continue;
				}
				else
				{
					for (int k = strs.size() - 2; k >= 0; k--)
					{
						int t;
						for (t = last - 1; t >= 0; t--)
						{
							if (nodes[t].level == nodes[last].level - 1) {
								//∆•≈‰…œ
								if (strs[k].find("#") == string::npos && nodes[t].tag == strs[k]
									|| strs[k].find("#") != string::npos && nodes[t].id == strs[k]) {
									last = t;
								} 
								//√ª∆•≈‰…œ
								else {
									flag = false;
								}
								break;
							} 
						}
						if (t == -1) {
							flag = false;
						}
						if (!flag) {
							break;
						}
					}
					if (flag)
					{
						res.push_back(row);
					}
				}
			}
		}
		if (res.empty())
		{
			printf("0\n");
		}
		else {
			printf("%d", res.size());
			for (int i = 0; i < res.size(); i++)
			{
				printf(" %d", res[i]);
			}
			printf("\n");
		}
	}
}