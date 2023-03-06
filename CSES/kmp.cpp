#include <bits/stdc++.h>
using namespace std;
#define ll                long long

vector <int> prefix_function(string x) {
    int n = x.length();
    vector<int> lps(n);

    int i = 0;
    int j = 1;
    lps[0] = 0;

    while (j < n) {
        if (x[i] == x[j]) {
            lps[j] = i + 1;
            i++;
            j++;
            continue;
        }

        i--;
        lps[j] = 0;
        while (i > 0) {
            i = lps[i];
            if (x[i] == x[j]) {
                lps[j] = i + 1;
                break;
            }
            i--;
        }
        j++;
    }
    return lps;
}

void mainSolve() {
    int n1, n2;
    string givenString, pattern;
    cin >> givenString >> pattern;
    n1 = givenString.length();
    n2 = pattern.length();

    vector <int> lps = prefix_function(pattern);
    vector <int> ans;

    int cnt=0;
    bool found = false;
    int j = 0, i = 0;

    while (i < (int)givenString.length()&&j < (int)givenString.length()) {
        if (givenString[i] == pattern[j]) ++i, ++j;
        else {
            if (j != 0) j = lps[j - 1];
            else ++i;
        }

        if (j == pattern.length()) {
            cnt++;
        }
    }

    // if (ans.size() == 0) cout << "Not Found" << endl;

    // else cout << ans.size() << endl;

    // for (int i = 0;i < ans.size();i++) {
    //     cout << ans[i] << " ";
    // }
    cout<<cnt<<endl;

}

int main() {
   
        mainSolve();
    

    return 0;
}
