#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int count[26]={0};
    int index=0;
    for(int i=0;i<s.length();i++){
        if('A'<= s[i] && s[i]<='Z')
            index=s[i]-'A';
        else if('a'<=s[i] && s[i]<='z')
            index=s[i]-'a';
        count[index]=1;
    }
    for(int i=0;i<26;i++){
        if(count[i]==0)
            return "not pangram";
    }
    return "pangram";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
