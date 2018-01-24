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
#include <sstream>

using namespace std;


template<typename T>
bool contains(typename vector<T>::iterator begin,typename vector<T>::iterator end,T x){
    return (std::find(begin, end, x) != end);
}

int main_cleanup(int argc, const char * argv[]) {
    
    int cases;
    int n,m;
    
    
    cin >> cases;
    while(cases-- > 0){
        ostringstream oss;
        cin >> n >> m;
        vector<int> completedJobs;
        int input;
        for(int i = 0; i < m; i++){
            cin >> input;
            completedJobs.push_back(input);
        }
        bool forChef = true;
        
        for(int i = 1; i <= n; i++){
            if(contains<int>(completedJobs.begin(), completedJobs.end(), i)){
                continue;
            }
            
            if(forChef){
                cout <<i << " ";
            }else{
                oss << i << " ";
            }
            forChef = !forChef;
            
        }
        cout <<endl <<  oss.str() << endl;
    }
    
    
    return 0;
}


