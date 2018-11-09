#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int len=s1.length();
    int len2=s2.length();
    int i;
    int ans=0;
    for(i=0;i<len;i++){
     if(s2.find(s1[i])!=string::npos){
         s2.replace(s2.find(s1[i]),1,"A");
         s1.replace(i,1,"A");
     }
    }
    if(len<len2){
    for(i=0;i<len;i++){
        if(s1[i]!='A')
            ans++;
        if(s2[i]!='A')
            ans++;
    }
        for(i=len;i<len2;i++)
            if(s2[i]!='A')
                ans++;
    }
    else{
        
    for(i=0;i<len;i++){
        if(s2[i]!='A')
            ans++;
        if(s1[i]!='A')
            ans++;
    }
        for(i=len;i<len2;i++)
            if(s1[i]!='A')
                ans++;
        
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
