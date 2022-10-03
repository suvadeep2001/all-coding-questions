#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFloor(vector<long long> v, long long n, long long x)
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
                res = mid;
                first = mid + 1;
            }
            else if (x < v[mid])
            {

                last = mid - 1;
            }
        }
        return res;
    }
};

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}