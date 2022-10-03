
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    string equilibrium(int *arr, int n) {
        int left_sum = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        
        for(int i = 0; i < n; i++){
            sum = sum - arr[i];
            if(left_sum == sum) return "YES";  
            left_sum += arr[i];
        }
        return "NO";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
