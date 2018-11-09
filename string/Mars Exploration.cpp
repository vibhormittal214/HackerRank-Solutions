#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int k=s.length()/3;
    int msg=k;
    string s1="SOS";
    string s2=s1;
    int i;
    for(i=1;i<msg;i++){
        s1+=s2;
    }
    cout<<s1;
    msg=0;
    for(i=0;i<s.length();i++){
        if(s1[i]!=s[i])
            msg++;
    }
    return msg;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
