#if 0
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