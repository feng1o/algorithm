#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

//�ж������ǲ�������
bool isPrime(int n){
	if (n <= 1) return false;

	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}

	return true;
}
int PrimePairs(vector<int> &vi)
{
	int maxValue = 0;
	size_t n = vi.size();  //n��Ϊ�ܸ���
	vector<int> dp(n + 1, 0); //����һ������n+1��������������ʼֵ��Ϊ0,dp[i]��ʾ�±귶ΧΪ[i, n-1]�ķ�Χ�ڣ�������������
	int cnt = 0;
	for (int i = n - 2; i > -1; i--)
	{
		for (int j = n - 1; j > i; j--)
		{
			//��vi[i]+vi[j]Ϊ����,dp[i]+dp[j] = dp[i+1]+dp[j+1]+1;���ڰ������ɶԳ��֣���Ȼֻ����i+1��j+1�Ļ����ϳ���һ�ԡ�

			//����Ϊ�������򽫵�ǰ������i��j��ɶԣ���ʱ�ܶ���dp[i]=����j֮ǰ�������� + j��i֮�����������ɵ������� + 1����i��j��ɵ�һ�ԣ�=dp[j+1]+��dp[i+1]-dp[j-1]��+1 ��
			//j��i֮�����������ɵ���������i��j���ǿ����䣩Ӧ�ò��ǣ�dp[i+1]-dp[j-1]��������dp[i+1]-dp[j]

			//��vi[i]+vi[j]��Ϊ����,dp[i] = dp[i + 1]
			//��i��j��Ӧ�����ĺͲ�Ϊ���������ʾ�����i������û������ͬ����dp[i]=dp[i+1]��
			if (isPrime(vi[i] + vi[j]))
			{
				cnt = dp[i + 1] - dp[j - 1] + dp[j + 1] + 1;
				//cnt = dp[i + 1] - dp[j] + dp[j + 1] + 1;�Ҿ���Ӧ������������Ȼ��̨˵�������Ǹ���

			}
			else
			{
				cnt = dp[i + 1];
			}
			//����dp[i]
			//Ϊʲô�����أ���Ϊ����Ĺ����ǰ�i�ӽ�ȥ����£�i��[i+1,n-1]���������������������϶��Թ��ˣ�ȡ����
			if (cnt > dp[i])
			{
				dp[i] = cnt;
			}
		}
	}
	return dp[0];
}
int main()
{
	int n;
	while (cin >> n)
	{
		//���룬��n��������vector������
		vector<int> v;
		int temp;
		for (int i = 0; i < n; i++){
			cin >> temp;
			v.push_back(temp);
		}

		//ͨ������������ַ�������Ӻ���
		cout << PrimePairs(v) << endl;
	}
	return 0;
}