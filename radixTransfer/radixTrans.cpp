#if 0

/*Function name:
*Description:   ����ת��
*Input :   stdin

*Return Value:  ת��Ϊ10����
*Revision Date: 2016/05/16
ţ����������������⣬��vs��ok�ģ���ţ�ͻ�������Ϊ�գ�Ϊʲô��
Ϊʲô��ʱ����������ڳ�Ա�����ڲ�����main������������У�����������cout�Żᣬ��ʱ���ظ�����ֵ���ԣ�����
����ͬʱ���룿��while���������룬���������ṹ
EOFʹ��ʱ��
*/

#include"iostream"
#include"string"
#include "istream"
#include"cmath"
#include"sstream"
using namespace std;
class cRadixTransfer{
public:
	cRadixTransfer() :m_inStrHex(), m_len(0){};
	string input(istream &in){
		getline(in, m_inStrHex);
		m_len = m_inStrHex.size();
		//cout << m_inStrHex << "\nlength : " << m_len << endl;
		return m_inStrHex;
	}
	long long int radixTrans();
private:
	string m_inStrHex;
	int m_len;
};



int main(){
			//int a;
			//while(cin >> hex >> a)
			//cout << a;
	cRadixTransfer radixTransfer;
	radixTransfer.input(cin);
	long long int ans = radixTransfer.radixTrans();
	//cout  << ans << endl;
	/*    stringstream ss;
	ss << ans;
	string str;
	ss >> str;
	cout << str <<endl;
	*/
	//char a[20];
	// sprintf(a, "%d", ans);
	//str.append(a);
	//cout << str;
	return 0;
}

long long int cRadixTransfer::radixTrans(){
	long long int deci = 0;
	for (int i = m_len; i > 2; --i)
	{
		if (isalpha(m_inStrHex[i - 1]))
		{
			//cout << "is alpha" << m_inStrHex[i-1] << endl;
			int index = m_inStrHex[i - 1] - 'A';
			deci += (10 + index) * static_cast<int> (pow(16.0, m_len - i));
		}
		else {
			int index = m_inStrHex[i - 1] - '0';
			deci += (index)* static_cast<int> (pow(16.0, m_len - i));
		}
	}
	stringstream ss;
	ss << deci;
	string str;
	ss >> str;
	cout << str << endl; 

	return deci;
}
#endif