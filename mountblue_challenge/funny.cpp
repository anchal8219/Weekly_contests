#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'funnyString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string funnyString(string s) {
    int n=s.length();
  int i=n-1;
    vector<int>v,v1;
    string s1="";
    while(i>=0){
        s1+=s[i];
        i--;
        
    }
    for(int i=1;i<n;i++){
        int f = abs(s[i]-s[i-1]);
        v.push_back(f);
    }
    for(int i=1;i<n;i++){
        int h = abs(s1[i]-s1[i-1]);
        v1.push_back(h);
    }
    if(v==v1) return "Funny";
    else return "Not Funny";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
