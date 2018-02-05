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

int main_buyin2(int argc, const char * argv[]) {
    int cases;
    cin >> cases;
    
    while (cases-- > 0){
        int noteCount, unitPrice;
        cin >> noteCount >> unitPrice;
        int sum = 0;
        int input;
        int min = 1001;
        for(int i = 0; i < noteCount; i++){
            cin >> input;
            if(min > input) {
                min = input;
            }
            sum += input;
        }
        int extra = sum%unitPrice;
        
        if(extra >= min){
            cout << -1 <<endl;
        } else  {
            cout << sum / unitPrice << endl;
        }
    }
    return 0;
}



