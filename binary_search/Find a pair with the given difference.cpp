#include<bits/stdc++.h>
using namespace std;

void find_pair_diff(int arr[],int diff,int size){

	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[j] - arr[i] == diff || arr[i] - arr[j] == diff) 
			{
				cout<<arr[i]<<" "<<arr[j];
			}
		}
	}
}

int main()
{
	int arr[] = {5, 20, 3, 2, 50, 80};


	find_pair_diff(arr,78,6);


	return 0;
}