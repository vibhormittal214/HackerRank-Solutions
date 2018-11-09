#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    int *arr1[arr.size()];
    int i,j;
    for(i=0;i<arr.size();i++){
        arr1[i]=new int[26];
    }
    for(i=0;i<arr.size();i++){
        string s(arr[i]);
        for(j=0;j<s.length();j++){
            int index=s[j]-'a';
            arr1[i][index]=1;
        }
    }
    int ans=0,k=0;
    for(i=0;i<26;i++){
        k=0;
        for(j=0;j<arr.size();j++){
            if(arr1[j][i]==1)
                k++;
        }
       if(k==arr.size())
           ans++;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
