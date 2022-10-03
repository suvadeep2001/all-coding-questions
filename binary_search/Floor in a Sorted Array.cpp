#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCeil(vector<long long> v, long long n, long long x)
    {

        int first = 0;
        int last = n - 1;
        int res = -1;

        while (first <= last)
        {
            int mid = first + (last - first) / 2;

            if (v[mid] == x)
                return mid;

            if (x > v[mid])
            {
                first = mid + 1;
            }
            else if (x < v[mid])
            {
                // if we want to print the number
                res = v[mid];
                
                // if we want to print the index
                // res = mid;

                last = mid - 1;
            }
        }
        return res;
    }
};

int main()
{

        long long n = 7;
        long long x = 5;

        vector<long long> v = {1,2,8,10,11,12,19};

        Solution obj;
        cout << obj.findCeil(v, n, x) << endl;
    

    return 0;
}