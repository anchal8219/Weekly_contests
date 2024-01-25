HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
30
 
All Contests  MountBlue Job Challenge  Between Two Sets
Between Two Sets
Problem
Submissions
Leaderboard
Submitted 22 minutes ago • Score: 10.00Status: Accepted
 Test Case #0
 Test Case #1
 Test Case #2
 Test Case #3
 Test Case #4
 Test Case #5
 Test Case #6
 Test Case #7
 Test Case #8

Submitted Code
Language: C++20

 Open in editor
1
#include <bits/stdc++.h>
2
​
3
using namespace std;
4
​
5
string ltrim(const string &);
6
string rtrim(const string &);
7
vector<string> split(const string &);
8
​
9
/*
10
 * Complete the 'getTotalX' function below.
11
 *
12
 * The function is expected to return an INTEGER.
13
 * The function accepts following parameters:
14
 *  1. INTEGER_ARRAY a
15
 *  2. INTEGER_ARRAY b
16
 */
17
​
18
int gcd(int a, int b) {
19
    while (b != 0) {
20
        int temp = b;
21
        b = a % b;
22
        a = temp;
23
    }
24
    return a;
25
}
26
​
27
int lcm(int a, int b) {
28
    return (a * b) / gcd(a, b);
29
}
30
​
31
int getTotalX(vector<int> a, vector<int> b) {
32
    int lcm_a = a[0];
33
    for (int i = 1; i < a.size(); i++) {
34
        lcm_a = lcm(lcm_a, a[i]);
35
    }
36
​
37
    int gcd_b = b[0];
38
    for (int i = 1; i < b.size(); i++) {
39
        gcd_b = gcd(gcd_b, b[i]);
40
    }
41
​
42
    int count = 0;
43
    for (int i = lcm_a; i <= gcd_b; i += lcm_a) {
44
        if (gcd_b % i == 0) {
45
            count++;
46
        }
47
    }
48
​
49
    return count;
50
}
51
int main()
52
{
53
    ofstream fout(getenv("OUTPUT_PATH"));
54
​
55
    string first_multiple_input_temp;
56
    getline(cin, first_multiple_input_temp);
57
​
58
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
59
​
60
    int n = stoi(first_multiple_input[0]);
61
​
62
    int m = stoi(first_multiple_input[1]);
63
​
64
    string arr_temp_temp;
65
    getline(cin, arr_temp_temp);
66
​
67
    vector<string> arr_temp = split(rtrim(arr_temp_temp));
68
​
69
    vector<int> arr(n);
70
​
71
    for (int i = 0; i < n; i++) {
72
        int arr_item = stoi(arr_temp[i]);
73
​
74
        arr[i] = arr_item;
75
    }
76
​
77
    string brr_temp_temp;
78
    getline(cin, brr_temp_temp);
79
​
80
    vector<string> brr_temp = split(rtrim(brr_temp_temp));
81
​
82
    vector<int> brr(m);
83
​
84
    for (int i = 0; i < m; i++) {
85
        int brr_item = stoi(brr_temp[i]);
86
​
87
        brr[i] = brr_item;
88
    }
89
​
90
    int total = getTotalX(arr, brr);
91
​
92
    fout << total << "\n";
93
​
94
    fout.close();
95
​
96
    return 0;
97
}
98
​
99
string ltrim(const string &str) {
100
    string s(str);
101
​
102
    s.erase(
103
        s.begin(),
104
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
105
    );
106
​
107
    return s;
108
}
109
​
110
string rtrim(const string &str) {
111
    string s(str);
112
​
113
    s.erase(
114
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
115
        s.end()
116
    );
117
​
118
    return s;
119
}
120
​
121
vector<string> split(const string &str) {
122
    vector<string> tokens;
123
​
124
    string::size_type start = 0;
125
    string::size_type end = 0;
126
​
127
    while ((end = str.find(" ", start)) != string::npos) {
128
        tokens.push_back(str.substr(start, end - start));
129
​
130
        start = end + 1;
131
    }
132
​
133
    tokens.push_back(str.substr(start));
134
​
135
    return tokens;
136
}
137
​
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

