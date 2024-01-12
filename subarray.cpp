#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int subarraySumK(vector<int> &a, int n, int k)
    {
        int i = 0, sum = 0, ans = 1e9;
        for (int j = 0; j < n; j++)
        {
            sum += a[j];
            while (i < j && sum - a[i] >= k)
            {
                sum -= a[i++];
            }
            if (sum >= k)
                ans = min(ans, j - i + 1);
        }
        return (ans == 1e9 ? -1 : ans);
    }
};

int main() {
    Solution solution;
    
    // Example usage
    int n, t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    

    int result = solution.subarraySumK(a, n, t);

    std::cout << "Minimum length of subarray with sum at least " << t << ": " << result << std::endl;

    return 0;
}
