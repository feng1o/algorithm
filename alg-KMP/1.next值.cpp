#include "iostream"
#include "string"

using namespace std;

//优化过后的next 数组求法  
void GetNextval(const char* p, int next[])
{
	int pLen = strlen(p);
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]表示前缀，p[j]表示后缀    
		if (k == -1 || p[j] == p[k])
		{
			++j;
			++k;
			//较之前next数组求法，改动在下面4行  
			if (p[j] != p[k])
				next[j] = k;   //之前只有这一行  
			else
				//因为不能出现p[j] = p[ next[j ]]，所以当出现时需要继续递归，k = next[k] = next[next[k]]  
				next[j] = next[k];
		}
		else
		{
			k = next[k];
		}
	}
}

int main(){
	string str = "abab";
	int a[8];
	GetNextval(str.c_str(), a);
	for (auto it:a)
	{
		cout << it << endl;
	}
	return 0;
}