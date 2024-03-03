#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int Decryptions(string N, int K) {
    int n = N.size();
    vector<vector<int>> dp(n + 1, vector<int>(K + 1, 0));

    // Initialize dp array
    for (int i = 0; i <= n; ++i)
        dp[i][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= K; ++j) {
            if (N[i - 1] == '0') {
                dp[i][j] = dp[i - 1][j];
            } else {
                // Number of decryptions for N[i - 1] to 1 in j steps
                // is the sum of number of decryptions for N[i - 1] / 2 to 1 in (j - 1) steps
                dp[i][j] = (dp[i - 1][j - 1] + dp[i / 2][j]) % MOD;
            }
        }
    }

    int result = 0;
    // Sum up the number of decryptions for all integers up to N
    for (int i = 1; i <= n; ++i)
        result = (result + dp[i][K]) % MOD;

    // Handle the case when N is all 1s and K >= length of N
    if (std::count(N.begin(), N.end(), '0') == 0 && K >= n)
        result = 0;

    return result;
}

int main() {
    string N = "110";
    int K = 2;
    cout << Decryptions(N, K) << endl; // Output should be 3
    return 0;
}
