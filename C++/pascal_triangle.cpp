#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of rows (<= 60) of the pascal's triangle\n";
	cin>>n;
	vector<long long> num = {1};
	cout<<1<<endl;
	for(int i = 1; i < n; ++i)
	{
		vector<long long> tmp;
		tmp.push_back(1);
		for(int j = 1; j < num.size(); ++j)
			tmp.push_back(num[j] + num[j - 1]);
		tmp.push_back(1);
		for(int j = 0; j < tmp.size(); ++j)
			cout<<tmp[j]<<" ";
		cout<<endl;
		num = tmp;
	}
	return 0;
}
