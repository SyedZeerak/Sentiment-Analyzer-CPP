/* THIS FILE CONTAINS CODE WHICH READS WORDS ALONG WITH THEIR SENTIMENT VALUES
                             TO VECTOR (USED AS A DCTIONARY*/


#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

inline map<string, int> createDictionry()
{
    map <string, int> dictionary;
    string line;
    fstream file("dictionary.txt", ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            int pos = line.find_first_of(',');
            int val = 0;
            try {
                val = stoi(line.substr(pos + 1));
            }
            catch (...) {
                cout << "Invalid Value + : " + line.substr(pos + 1) << endl;
                continue;
            }
            string key = line.substr(0, pos);
            dictionary[key] = val;
        }
    }
    file.close();
    return dictionary;
}
