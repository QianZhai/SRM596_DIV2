//
//  main.cpp
//  SRM596_DIV2
//
//  Created by ipuser on 13/12/05.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class FoxAndSightseeing{
public:
    int getMin(vector<int> position){
        int length = position.size();
        int i, j, sum = 0, sum1 = 0, sum2 = 0;
        for (i = 1; i < length; i++) {
            sum += getDis(position[i], position[i-1]);
        }
        if(length == 2) 
            return sum;
        sum1 = sum - getDis(position[1], position[0]) - getDis(position[2], position[1]) + getDis(position[2], position[0]);
        for (i = 2; i < length -1; i++){
            sum2 = sum - getDis(position[i], position[i-1]) - getDis(position[i+1], position[i]) + getDis(position[i+1], position[i-1]);
            if (sum1 > sum2) {
                sum1 = sum2;
            }
        }
        return sum1;
        
    }
    int getDis(int a, int b){
        return (a-b)>0 ? (a-b):(b-a);
    }
};

int main(int argc, const char * argv[])
{

    // insert code here...
    FoxAndSightseeing a;
    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    b.push_back(9);
    b.push_back(10);
    cout << a.getMin(b);
    
    return 0;
}

