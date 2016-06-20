//
//  EX. 13.1.cpp
//  EX06_01
//
//  Created by Grant Bingham on 6/19/16.
//  Copyright (c) 2016 gbingham18. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    ofstream file;
    
    file.open("Exercise13_3.txt");
   
    if(file.fail())
    {
        cout << "File does not exist." << endl;
        cout << "Exit program" << endl;
    }
    
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int x = rand() % 100;
        file << x << " ";
    }
    
    file.close();
    
    return 0;
}
