//
//  main.cpp
//  CodeChef
//
//  Created by Vijayvargiya, Tanmay on 25/01/18.
//  Copyright © 2018 Vijayvargiya, Tanmay. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main_lapin(int argc, const char * argv[]) {
    int cases;
    
    cin >> cases;
    
    while(cases-- > 0){
        string input;
        cin >> input;
        string prefix, suffix;
        int mid = input.length()/2;
        prefix = input.substr(0,mid);
        if(input.length()%2 != 0){
            mid++;
        }
        suffix = input.substr(mid);
        
        sort(prefix.begin(), prefix.end());
        sort(suffix.begin(), suffix.end());
        if(prefix == suffix){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}



