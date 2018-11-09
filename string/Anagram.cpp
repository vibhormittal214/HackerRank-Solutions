#include <bits/stdc++.h>
#include<string>
using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int len=s.length();
    if(len%2!=0)
        return -1;
    string k(s,0,len/2);
    string m(s,(len/2),len/2);
    int i;
    int ans=0;
    for(i=0;i<len/2;i++){
     if(m.find(k[i])!=string::npos){
         m.replace(m.find(k[i]),1,"A");
     }
        else{
            ans++;
        }
    
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
