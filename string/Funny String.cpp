#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    string copy(s);
    reverse(copy.begin(),copy.end());
    int i;
    for(i=0;i<s.length()-1;i++){
        if(abs(s[i]-s[i+1])!=abs(copy[i]-copy[i+1]))
            return "Not Funny";
    }
    return "Funny";

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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
