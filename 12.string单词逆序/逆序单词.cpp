#if 01
/*Function name:
*Difficulty:   see....
*Description:  
*Input :   stdin

*Return Value:
*Revision Date: 2016/05/16
*tip: 1.vector����ǰ��push_font,,,
      2.string + " "  + str
	  3.list�ĵ������ǲ���+-�ģ����ǿ���--��++��������������
	  4.���ⷽ���Ƚ϶࣬����see
*/

#include"iostream"
#include"string"
#include"sstream"
#include"list"

using namespace std;
int main(){
	string str;
	while (getline(cin, str, '\n')){
		istringstream in(str);
		string str1;
		list<string> strvec;
		while (in >> str1){
			strvec.push_front(str1);
		}
		for (list<string>::iterator it = strvec.begin(); it != strvec.end(); ++it){
			//if (it+1 != static_cast<list<string>::iterator>(strvec.end())) //+-�Ǵ�ģ�list���ɣ�
			//cout << *it << " ";
			//else
			//if (++it != strvec.end()){
			//	cout << *(--it) << " ";
			//}
			if (it != --strvec.end())  //����ʹ��++����������+1��������
				cout << *it << " ";
			else
				cout << *it;
		}
	}
	return 0;
}
#endif

#if 0
//ʹ��string������+����pushҪ���׺ܶ�...............
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string res = "", tmp;
	while (ss >> tmp) {
		if (res == "")
			res = tmp;
		else
			res = tmp + " " + res;
	}
	cout << res;
	return 0;
}

#endif