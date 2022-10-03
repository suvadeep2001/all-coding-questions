#include<bits/stdc++.h>
using namespace std;

bool permute(int arr1[],int arr2[],int m,int k)
{
	sort(arr1,arr1+m);
	sort(arr2,arr2+m,greater<int>());

	for (int i = 0; i < m; ++i)
	{
	if(arr1[i] + arr2[i] < k)
			return false;
		return true;
	}
}

int main()
{
	
	int arr1[] = {
		2, 1, 3
	};

	int arr2[] = {
		7, 8, 9
	};

	permute(arr1,arr2,3,10)? cout << "Yes" : cout << "No";

	return 0;
}