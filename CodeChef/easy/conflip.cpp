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


int main_conflip(int argc, const char * argv[]) {
    int cases;
    
    cin >> cases;
    
    while(cases-- > 0){
        int games;
        cin >> games;
        while(games-- > 0){
            int i, n, q;
            cin >> i >> n >> q;
            if(n%2 == 0) {
                cout << n/2 << endl;
            }else{
                if(i == q ){
                    cout << n/2 << endl;
                }else{
                    cout << (n/2) + 1 << endl;
                }
            }
        }
    }
    return 0;
}


