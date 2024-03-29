#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int n,l;
pair<int,int> num[200001];
int main()
{
	int n,l;
	long long int t=0;
	cin>>n>>l;
	for(int a=0;n>a;a++)
	{
		cin>>num[a].second>>num[a].first;
	}
	sort(num,num+n);
	set<int> num2;
	num2.insert(0);
	num2.insert(l);
	for(int a=0;n>a;a++)
	{
		auto aa=num2.upper_bound(num[a].second);
		t=t+*aa-*prev(aa);
		num2.insert(num[a].second);
	}
	cout<<t<<endl;
}

說明: 利用陣列num的first紀錄順序、second紀錄切割點，再依序切割下去。
      利用insert來輸入數字的話可以減少排序所花費的時間，aa用來記錄大於切割點的最小數字，prev用來找小於aa的最大數字。
