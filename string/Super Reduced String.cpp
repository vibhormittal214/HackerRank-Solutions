#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    int k=s.length();
    int i;
    for(i=0;i<k;i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=-1;
            k=s.length();
        }
    }
    if(s=="")
        return "Empty String";
    else
        return s;


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
