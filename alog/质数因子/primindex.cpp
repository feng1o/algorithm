/*
***************tip :���string����һ��Ҫcout <<string,,,cout << 2 << ' ' Ҳ��string��������
               tip2:�������⣬������������ӣ�������˵�г����п��ܳ��ֵĵ��������ӣ�������Ǵ�ӡ�ܱ�ָ�����ӳ�jin�ģ�

*Function name:
*Description:   
*Input :   

*Return Value:  
*Revision Date: 2016/05/16

*first δ��������Ŀ��˼���������ҵ���������ok������Ҫ�ҳ����е��������ӣ����ظ��ģ�
ʵ����������Ϊ׼���ҳ����ӣ��������ܶ��ٸ�������
���⣬Ҫ���ײ���Ҫ�ж��ǲ������ӵ�ԭ����Ϊ��2��ʼ��������һֱ��������Ϊֹ���ټӣ���ô
���ܱ�2���ˣ��϶�Ҳ���ܱ�4/8...��������ͬ��3����������������Ҳ���ܣ�ֻ�ܼӵ�7������
*/

//��ȷ�汾 my
#include "iostream"
#include "string"
#include "iostream"
#include "sstream"

using namespace std;
int main(){
	//string str1;
	//cin >> str1;
	////str1.clear();   //clear erarse 
	//cout << "str1==" << str1 << endl;
	//
	//str1.erase();
	//cout << "str1==" << str1 << endl;

	//string str;
	//getline(cin, str);
	//stringstream ss(str);
	//string str2;
	//while (ss >> str2)
	//	cout << "str2 = "<< str2 << endl;
	//ss.str("");
	//cout << str2.size() << endl;
	long int num;
	cin >> num;
	int i = 2;
	while (num != 1){
		while (num % i == 0)
		{
			cout << i << ' ';
			num = num / i;
		}
		++i;
	}
	return 0;
}


#if 0
//����汾��û�������飬�������ӣ���������������Ϊ����������
//��ͬ���Ӳ��ظ����֣��������ok
#define _CRT_SECURE_NO_WARNINGS
#include"iostream"
#include"string"
#include"cmath"
using namespace std;

bool isPrim(long int &i){
	int sqrti = static_cast<int> (sqrt(i));
	for (long int j = 2; j <= sqrti; ++j){
		//cout << "prime  \n";
		if (i%j == 0)
			return false;
	}
	return true;
}
int main(){
	long int  num;
	string  str;
	cin >> num;
	//cout << num << endl;
	//for (int i = 2; i <= static_cast<int> (sqrt(num)); ++i){
	for (long int i = 2; i <= num / 2; ++i){
		if (isPrim(i) && (num % i == 0)){
			//cout << "in\n\n";
			if (!str.empty())
				str.append(1, ' ');
			//str.append(1, i);
			//str.append(_itoa(i,nullptr, 10));
			char *buf = new char[20];
			sprintf(buf, "%d", i);
			//itoa(i, buf, 10);
			str.append(buf);
		}
	}
	if (isPrim(num)){
		char *buf = new char[20];
		sprintf(buf, "%d", num);
		str.append(buf);
	}
	cout << str << ' ';

	return 0;
}
#endif

