#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int ans=1;
    for(int i=0;i<s.length();i++){
        if('A'<=s[i] && s[i]<='Z')
            ans++;
    }
    return ans;


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
