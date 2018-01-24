//
//  main.cpp
//  CodeChef
//
//  Created by Vijayvargiya, Tanmay on 24/01/18.
//  Copyright © 2018 Vijayvargiya, Tanmay. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Subset sum problem : Dynamic Problem
// Family : Knapsack Problem
bool ssp(const vector<int>& v, const int& N) {
    
    vector<vector<int>> m( v.size() + 1 /* 1-based */,
                          vector<int>(N + 1 /* 1-based */, 0) );
    
    for (int i = 1; i <= v.size(); ++i) { // For each subset of elements
        for (int b = 1; b <= N; ++b) { // For each subcapacity
            int opt1 = m[i - 1][b];
            int opt2 = -1;
            if (b - v[i - 1] >= 0) { // No caching to keep this readable
                opt2 = m[i - 1][b - v[i - 1]] + v[i - 1];
                if (opt2 > b)
                    opt2 = -1; // Not allowed
            }
            m[i][b] = max(opt1, opt2);
        }
    }
    
    return (m[v.size()][N] == N);
}

int main(int argc, const char * argv[]) {
    int cases;
    
    cin >> cases;
    
    while(cases-- > 0){
        vector<int> notes;
        int walletSize, amountAsked;
        cin >> walletSize >> amountAsked;
        int input;
        for(int i = 0; i < walletSize; i++){
            cin >> input;
            notes.push_back(input);
        }
        
        if(ssp(notes, amountAsked)){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
    return 0;
}


