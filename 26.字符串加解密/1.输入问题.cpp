/*
wenti: �ַ�����������ֲ�Ҫ�������ִ������� ��9��������ֱ��+ 1�� ��10�õ�9������֣�����
ע���ж���Сд��isalpha~�� isdigit�� isupper�� islower ��tolower�� toupper��ʹ��

������ȡ��������
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<functional>

using namespace std;
string encrypt(string& str);
string decrypt(string str);

int main(){
	string  estr;
	string dstr;
	while (getline(cin, estr)){
		//getline(cin, dstr);
		cout << encrypt(estr) << endl;
		//string dstr;
		getline(cin, dstr);
		cout << decrypt(dstr) << endl;
	}
	return 0;
}
string encrypt(string& str){
	int size = str.size();
	for (int i = 0; i < size; ++i){
		if (isalpha(str[i])){
			if (islower(str[i]) && str[i] < 'z' && str[i] >= 'a'){
				str[i] = toupper(str[i] + 1);
			}
			else if (str[i] == 'z')
				str[i] = 'A';
			else if (isupper(str[i]) && str[i] < 'Z'){
				str[i] = tolower(str[i] + 1);
			}
			else if (str[i] == 'Z')
				str[i] = 'a';
		}
		else if (isdigit(str[i]))
			//str[i] = (str[i] + 1) % 10;
			//wenti: �ַ�����������ֲ�Ҫ�������ִ������� ��9��������ֱ��+ 1�� ��10�õ�9������֣�����

			if (str[i] != '9')
				str[i] = str[i] + 1;
			else
				str[i] = '0';
	}
	return str;
}
string decrypt(string str){
	int size = str.size();
	for (int i = 0; i<size; ++i){
		if (isalpha(str[i])){
			if (islower(str[i]) && str[i] <= 'z' && str[i] > 'a'){
				str[i] = toupper(str[i] - 1);
			}
			else if (str[i] == 'a')
				str[i] = 'Z';
			else if (isupper(str[i]) && str[i] > 'A'){
				str[i] = tolower(str[i] - 1);
			}
			else if (str[i] == 'A')
				str[i] = 'z';
		}
		else if (isdigit(str[i]))
			//str[i] = (str[i] + 1) % 10;
			if (str[i] != '0')
				str[i] = str[i] - 1;
			else
				str[i] = '9';
	}
	return str;
}