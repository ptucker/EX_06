//
//  EX. 13.2.cpp
//  EX06_02
//
//  Created by Grant Bingham on 6/19/16.
//  Copyright (c) 2016 gbingham18. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream input;
    string name;
    int count = 0;
    cout << "Enter a file name: " << endl;
    cin >> name;
    input.open(name.c_str());
    if(input.fail())
    {
        cout << "File does not exist." << endl;
        cout << "Exit Program" << endl;
    }
    else
    {
        cout << "File does exist." << endl;
    }
    
    char numberOfCharacters;
    char get();
    while(!input.eof())
        {
            //PT -- get isn't reading from the file.
            get(char& numberOfCharacters);
            count++;
        }
        cout<<"There were " << count << "characters in this file." << endl;
    }

    return 0;

}
