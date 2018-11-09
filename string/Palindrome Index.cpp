#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int is(string str) 
{ 
   int j;int len=str.length();
    for(j=0;j<len/2;j++){
        if(str[j]!=str[len-j-1])
            return 0;
    }
    return 1; 
} 
// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    if(is(s))
        return -1;
    for(int i=0;i<s.length();i++){
        string copy=s;
        copy.erase(i,1);
        if(is(copy))
            return i;
    }
    return -1;


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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
