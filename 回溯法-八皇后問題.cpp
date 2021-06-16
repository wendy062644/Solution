#include<iostream>
using namespace std;
bool rec[13];
int num[13] = {0}, k = 0;
int one(int n, int m)
{
	if(m == n)
	{
		for(int a = 0; m > a; a++)
		{
			cout << num[a]+1 << " ";
		}
		cout << endl;
		return 1;
	}
	for(int a = 0; n > a; a++)
	{
		if(rec[a] == 0)
		{
			k = 0;
			for(int b = 1; m >= b; b++)
			{
				if(num[m-b] == a-b||num[m-b] == a+b){break;}
				k++;
			}
			if(k == m)
			{
				rec[a] = true;
				num[m] = a;
				one(n, m+1);
				rec[a] = false;
			}
		}
	}
	return 0;
}
int main(){
	int n, m = 0;
	cin >> n;
	for(int a = 0; n > a; a++)
	{
		rec[a] = true;
		num[m] = a;
		one(n, m+1);
		rec[a] = false;
	}
}

題目: http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b039
說明: 利用回溯法剪枝可以減少大量運算
