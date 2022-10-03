#include<bits/stdc++.h>
using namespace std;

int findCandidate(int arr[],int size){

	int majority_index = 0;
	int count = 1;

	for (int i = 1; i < size; ++i)
	{
		if (arr[majority_index] == arr[i])
			count++;
		else 

		count--;

		if (count == 0)
		{
			majority_index = i;
			count = 1;
		}
	}
	return arr[majority_index];
}

bool majority_element(int arr[],int size,int cand){
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (cand == arr[i])
		{
			count++;
		}
	}
	if (count > size / 2)
	{
		return 1;
	}else
	return 0;
}

int main()
{
	int arr[] = {5, 5, 5, 5, 8, 80};

	int cand = findCandidate(arr,6);

	if (majority_element(arr,6,cand))
	{
		cout<<cand<<endl;
	}else{
		cout<<"NO";
	}


	return 0;
}