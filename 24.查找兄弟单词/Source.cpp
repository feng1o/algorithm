/*tip:
1.�м���whileѭ������������������ʱ�����clear���п��ܴ洢��ֵ������
2.�����ʽ��ע�⣬����û���κ�ֵ����ʱ��������������endlҲ��error
3.���ĳ����������Ϊ�棬��ѭ���ж��У����������ܶ಻��ģ���ʱ��������Ϊ��ʱ��������������������ܺ���������Σ��򲻷��ϣ�Ϊ�ı�.*
*/

#if 01
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
void deal(vector<string> svec, string fstr, int rno);

int main(){
	int n;
	while (cin >> n){
		vector<string> svec;
		string str;
		while (n--){
			cin >> str;
			svec.push_back(str);
		}
		string  fstr;
		cin >> fstr;
		int rno = -1;
		cin >> rno;
		deal(svec, fstr, rno);
		//1.�м���whileѭ������������������ʱ�����clear���п��ܴ洢��ֵ������
			svec.clear(); //
	}
	return 0;
}

void deal(vector<string> svec, string fstr, int rno){
	sort(svec.begin(), svec.end());
	int n = svec.size();
	//sort(fstr.begin(), fstr.end());
	int num = -1;
	string rstr = "";
	for (int i = 0; i < n; ++i){
		if (svec[i] == fstr)
			continue;
		string  bfstr = fstr;
		sort(fstr.begin(), fstr.end());
		string bstr = svec[i];
		sort(svec[i].begin(), svec[i].end());
		if (svec[i] == fstr){
			++num;
			cout << "num = " << num << endl;
		//}
		if ( num == rno)//{          //�������if���棬������ܵ��£�û�����ʱ��numδ�䣬��󷵻صĲ��ǵ�һ�εģ�����������
			cout << "Num....i =" << i << endl;
			rstr = bstr;
		}
		fstr = bfstr;
	}
	cout << num << endl;
	if (!rstr.empty())   //��ʽ.......................û����󡣡�������������������
		cout << rstr << endl;
	cout << rstr << endl;

}
#endif