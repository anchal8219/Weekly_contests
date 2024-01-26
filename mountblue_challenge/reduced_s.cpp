#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    stack<char>st;
    string res="";
    for(char c:s){
        if(!st.empty() && st.top()==c)
            st.pop();
        else st.push(c);
    }
    
    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }
    if(res=="") return "Empty String";
    else
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
