#if 0
//http://note.youdao.com/share/?id=4d67ed2a111df899a752ebbc9eaeb02b&type=note
#include "iostream"
#include "iomanip"
#include "string"

using namespace std;
int main()
{

	int number;
	char ch;
	char a[200];
	string str1;
	cin >> str1;
	cout << str1;
	cout << "zbdde\0" << "skndg";
	cin >> ch;
	#if 01
cin >> a;
	cout << a << endl;
	cin  >> number >> ch; //输入  123 23 3会获取123， 2，
							//读取数据时遇到空白字符（包括空格 tab键和回车）作为终止字符
							//从流中提取数据时通常跳过流中的空格 tab键换行符等空白字符。
	cout << '\0';  //输入一个空格符
	cout << setw(2) << number  << "  "<< setw(2) <<  ch << endl;
	//while (cin >> ch && ch != '\0')  //\0实际上不会被加入到输入流里面去的，而是自动加的，
	while (cin >> ch )
		cout << setw(2) << ch << endl;
	while (cin >> number)  //输入 123 23 3 会是123， 23， 3依次读入
		cout << setw(2) << number << endl;
#endif
	string str;
	getline(cin, str);
	cout << str << endl;
	cout << str[2] << endl;
	return 0;
}


#endif