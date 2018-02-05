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

int main_nukes(int argc, const char * argv[]) {
    int inputPartices, capacity, chambers;
    
    cin >> inputPartices >> capacity >> chambers;
    
    while(chambers-- > 0){
        cout << inputPartices % (capacity + 1) << " ";
        inputPartices = inputPartices/(capacity + 1);
    }
    return 0;
}



