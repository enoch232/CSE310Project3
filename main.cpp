//
//  main.cpp
//  Project3
//
//  Created by Enoch Ko on 4/17/16.
//  Copyright © 2016 Enoch Ko. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ifstream file1(argv[1]);
    ifstream file2(argv[2]);
    ifstream file3(argv[3]);
    string edgestring;
    string datestring;
    string commandstring;
    int countedge = 0;
    int countdate = 0;
    int countcommand = 0;
    
    
    while(file1 >> edgestring) {
        countedge++;
    }
    while(file2 >> datestring) {
        countdate++;
    }
    while(file3 >> commandstring) {
        countcommand++;
    }
    cout<<"count edge:" << countedge<<endl;
    cout<<"count date:" << countdate<<endl;
    cout<<"count command:" << countcommand<<endl;
    
    return 0;
}
