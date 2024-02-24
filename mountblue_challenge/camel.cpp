#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

// int camelcase(string s) {
//     int c=1;
//     for(int i=1;i<s.length();i++){
//         if(isupper(s[i])) c++;
        
//     }
//     return c;
// }

//or
bool isup(char ch){ 
    if(ch>='A' && ch<='Z') return true;
    return false;
}

int camelcase(string s) {
    int c=1;
    for(size_t i=1;i<s.length();i++){
        if(isup(s[i])) c++;
        
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
