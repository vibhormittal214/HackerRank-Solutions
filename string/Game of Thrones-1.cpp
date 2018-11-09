#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int arr[26]={0};
    int len=s.length();
    int i,index,ans=0;
    for(i=0;i<len;i++){
        index=s[i]-'a';
        arr[index]++;
    }
    for(i=0;i<26;i++){
        if(arr[i]%2!=0)
            ans++;
    }
    if(ans<=1)
        return "YES";
    else
        return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
