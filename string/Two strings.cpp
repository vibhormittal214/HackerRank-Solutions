#include <bits/stdc++.h>

using namespace std;

int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    string s="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++){
        if(s1.find(s[i])!=string::npos && s2.find(s[i])!=string::npos)
            return "YES";
    }
    
    return "NO";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
