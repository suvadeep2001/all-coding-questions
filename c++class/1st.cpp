#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
// (c-max(0,x-a)-max(0,y-b) >= 0

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;

		if(c-max(0,x-a)-max(0,y-b) >= 0){
				cout<<"YES"<<endl;
		}
		
		else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}