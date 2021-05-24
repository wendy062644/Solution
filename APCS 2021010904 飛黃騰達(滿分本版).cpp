#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
    pair<int,int> num[200001];
    long long int ma=0;
    int main() {
    	int n,num2[200001]={0};
    	cin>>n;
    	for(int a=0;n>a;a++)
    	{
    		cin>>num[a].first>>num[a].second;
    		num2[a]=1;
		}
		sort(num,num+n);
		int m=0;
		for(int a=0;n>a;a++)
        {
            if(num[a].second>=num2[m]){num2[m+1]=num[a].second;m++;}
            else{
            int l=upper_bound(num2,num2+m,num[a].second)-num2;
            num2[l]=num[a].second;
            }
        }
        cout<<m;
    }

說明:(最長遞增子序列LIS)num[a].first為X座標、num[a].second為Y座標，用sort把X座標先排序好，再用LIS演算法求出最大長度。
*補充: LIS演算法-假如有陣列[1,3,2,5,4,6]，n[1]為1，因為3>1所以n[2]=3，但2小於3，所以n[2]=2，5>2所以n[3]=5，4小於5，所以n[3]=4，6>4所以n[4]=6，因此可得知最長為4，排列為[1,2,4,6]。
