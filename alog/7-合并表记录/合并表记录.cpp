/*
***************tip :map��ʹ�ã�mapĬ���������ŵ�,,,,mapĬ����4������������less<class>,,more...
*Function name:
*Description:
*Input :

*Return Value:
*Revision Date: 2016/05/16
*/
#include "iostream"
#include "string"
#include "vector"
#include "utility"
#include "map"
using namespace std;

int main(){
	map<int, int>  imap;
	int lines = -1;
	while (cin >> lines){// ��Ҫ���׼� while(cin>>)���˳����������ֹ
		for (int i = 0; i < lines; ++i)
		{
			int row;
			int value;
			cin >> row >> value;
			if (imap.count(row) != 1)
				imap[row] = 0;
			imap[row] += value;
		}
		for (auto it : imap)
		{
			cout << it.first << " " << it.second << endl;
		}
	}
	return 0;
}
//int main(){
//	int lines = 0;
//	cin >> lines;
//	cout << "lines:" << lines << endl;
//	int row = -1; 
//	int value = 0;
//	//vector<int> *pivec = new vector<int>[lines];
//	vector<int> ivec(lines, 0);
//	for (auto it : ivec)
//	{
//		cout << "p-xxxxxxxxxxxxxxxxxxx---:" << it << endl;
//	}
//
//	while (cin){
//		cin >> row;
//		cin >> value;
//		ivec[row] += value;
//	}
//	for (auto it : ivec)
//	{
//		if (it)
//		{
//			cout << it << endl;
//		}
//	}
//	return 0;
//}