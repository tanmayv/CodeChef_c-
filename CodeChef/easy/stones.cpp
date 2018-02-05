//
//  main.cpp
//  CodeChef
//
//  Created by Vijayvargiya, Tanmay on 05/03/18.
//  Copyright © 2018 Vijayvargiya, Tanmay. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main_stones(int argc, const char * argv[]) {
    int cases;
    cin >> cases;
    
    while(cases-- > 0){
        string input, jewels;
        cin >> jewels >> input;
        int refArray[256] = {0};
        int jewelsCount = 0;
        
        for(int i = 0; i < input.length(); i++ ){
            int index = input[i];
            refArray[index]++;
        }
        
        for(int i = 0; i < jewels.length(); i++) {
            int index = jewels[i];
            jewelsCount += refArray[index];
            refArray[index] = 0;
        }
        
        cout << jewelsCount << endl;
        
    }
    return 0;
}





