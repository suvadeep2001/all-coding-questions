#include<bits/stdc++.h>
using namespace std;

void common_elements(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
	int i = 0,j = 0,k = 0;

	while(i < n1 && j < n2 && k < n3)
	{
	if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
	{
		cout<<arr1[i]<<" ";
		i++;
		j++;
		k++;
	}
	// lets's take numbers are x , y and z
	// so if x < y

	else if (arr1[i] < arr2[j])
	{
		i++;
	}
	// if y < z
	else if(arr2[j] < arr3[k]){
		j++;
	}else{
		k++;
	}

	}
}

int main()
{
	
	int arr1[] = {
		1,2,3,7,8,9
	};

	int arr2[] = {
		7, 8, 9,14
	};

	int arr3[] = {
		1,5,8,9
	};

	common_elements(arr1,arr2,arr3,6,4,4);

}