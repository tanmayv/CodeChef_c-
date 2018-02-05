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

int main_carvans(int argc, const char * argv[]) {
    int cases;
    cin >> cases;
    
    while (cases-- > 0){
        int noOfCars;
        cin >> noOfCars;
        int speed;
        int lastSpeed = -1;
        int count = 0;
        for(int i = 0; i < noOfCars; i++){
            cin >> speed;
            if(lastSpeed == -1){
                count++;
                lastSpeed = speed;
                continue;
            }
            if(lastSpeed >= speed){
                count++;
                lastSpeed = speed;
            } else {
                lastSpeed = min(lastSpeed, speed);
            }
            
        }
        cout << count << endl;
    }
    return 0;
}



