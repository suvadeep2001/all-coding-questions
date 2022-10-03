#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCeil(vector<long long> v, long long n, long long x)
    {

        int first = 0;
        int last = n - 1;
        int res1 = -1;

        while (first <= last)
        {
            int mid = first + (last - first) / 2;

            if (v[mid] == x)
                return v[mid];

            if (x > v[mid])
            {
                first = mid + 1;
            }
            else if (x < v[mid])
            {
                res1 = v[mid];
                last = mid - 1;
            }
        }
        return res1;
    }

    int findFloor(vector<long long> v, long long n, long long x)
    {

        int first = 0;
        int last = n - 1;
        int res2 = -1;

        while (first <= last)
        {
            int mid = first + (last - first) / 2;

            if (v[mid] == x)
                return v[mid];

            if (x > v[mid])
            {
                res2 = v[mid];
                first = mid + 1;
            }
            else if (x < v[mid])
            {
                last = mid - 1;
            }
        }
        return res2;
    }

};

int main()
{

        long long n = 7;
        long long x = 5;

        vector<long long> v = {1,6,10,11,12,19};

        Solution obj;
        abs(obj.findCeil(v, n, x) - x) > abs(obj.findFloor(v, n, x) - x) ? cout << obj.findFloor(v, n, x) : cout<<obj.findCeil(v, n, x);

    return 0;
}