#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main_horses(int argc, const char * argv[]) {
    int cases;
    
    cin >> cases;
    
    while(cases-- > 0){
        int size;
        vector<int> horseSkills;
        cin >> size;
        int input;
        for(int i = 0; i < size; i++){
            cin >> input;
            horseSkills.push_back(input);
        }
        
        sort(horseSkills.begin(), horseSkills.end());
        
        auto iterator = horseSkills.begin();
        int last = *iterator;
        ++iterator;
        int min = *iterator - last;
        last = *iterator;
        ++iterator;
        
        for(;iterator != horseSkills.end(); ++iterator){
            if(*iterator - last < min){
                min = *iterator - last;
            }
            
            last = *iterator;
        }
        cout << min << endl;
        
    }
    return 0;
}
