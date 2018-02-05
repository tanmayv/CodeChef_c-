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


int main_johny(int argc, const char * argv[]) {
    int cases;
    
    cin >> cases;
    
    while(cases-- > 0){
        int size;
        vector<int> songs;
        cin >> size;
        int input;
        for(int i = 0; i < size; i++){
            cin >> input;
            songs.push_back(input);
        }
        int toFind;
        
        cin >> toFind;
        toFind = songs[toFind - 1];
        
        sort(songs.begin(), songs.end());
        auto pos = find(songs.begin(), songs.end(), toFind)  - songs.begin();
        pos++;
        
        cout << pos << endl;
    }
    return 0;
}


