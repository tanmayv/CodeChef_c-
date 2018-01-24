//
//  main.cpp
//  CodeChef
//
//  Created by Vijayvargiya, Tanmay on 24/01/18.
//  Copyright © 2018 Vijayvargiya, Tanmay. All rights reserved.
//

#include <iostream>

using namespace std;

int main_cielab(int argc, const char * argv[]) {
    
    int a,b;
    cin >> a >> b;
    int result = a - b;
    
    if(result % 10 == 9){
        result--;
    }
    else
        result++;
    cout << result;
    return 0;
}
