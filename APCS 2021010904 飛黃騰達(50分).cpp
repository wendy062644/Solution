#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
    pair<int,int> num[200001];
    long long int ma=0;
    int main() {
    	int n,num2[200001];
    	cin>>n;
    	for(int a=0;n>a;a++)
    	{
    		scanf("%d\n",&num[a].first);
    		scanf("%d\n",&num[a].second);
    		num2[a]=1;
		}
		sort(num,num+n);
		for(int a=1;n>a;a++)
		{
			for(int b=0;a>b;b++)
			{
				if(num[a].second>=num[b].second){num2[a]=max(num2[a],num2[b]+1);}
				if(num2[a]>ma){ma=num2[a];}
			}
		}
		printf("%d\n", ma);
    }

說明: 時間長度 (n*n)/2
