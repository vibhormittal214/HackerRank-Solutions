#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    int i;
    for(i=0;i<s.length();i++){
        if('a'<=s[i] && s[i]<='z'){
            if(s[i]+k>'z'){
                int left='z'-s[i];
                int t=k-left;
                while(t>26){
                t=t-26;}
                s[i]='a'+t-1;
            }
            else{
                s[i]=s[i]+k;
            }
        }
         else if('A'<=s[i] && s[i]<='Z'){
            if(s[i]+k>'Z'){
                int left='Z'-s[i];
                int t=k-left;
                while(t>26){
                t=t-26;}
                s[i]='A'+t-1;
            }
            else{
                s[i]=s[i]+k;
            }
        }
    }
    cout<<s;
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
