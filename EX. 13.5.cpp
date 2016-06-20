//
//  EX. 13.5.cpp
//  EX06_03
//
//  Created by Grant Bingham on 6/19/16.
//  Copyright (c) 2016 gbingham18. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;
    
    cout << "Enter a year, gender, and name for that gender: " << endl;
    int year;
    string gender;
    string name;
    int rank;
    string boyNames[1000];
    string girlNames[1000];
    int numberOfBoyNames[1000];
    int numberOfGirlNames[1000];
    
    input.open("Names.txt");
    
    if(input.fail())
    {
        cout << "File does not exist.";
        cout << "Exit program.";
        
        return 0;
    }
    
    for(int i = 0; i < 1000; i++)
    {
        input >> rank >> boyNames[i] >> numberOfBoyNames[i] >> girlNames[i] >> numberOfGirlNames[i];
    }
    
    cin >> year >> gender >> name;
    
    for(int n = 0; n < 1000; n++)
    {
        
        if(name==boyNames[n]){
            cout << name << " is ranked " << n << " in popularity among boys." << endl;
        }
        if(name==girlNames[n]){
            cout << name << " is ranked " << n << " in popularity among girls." << endl;
        }
    }
    
    input.close();
}
