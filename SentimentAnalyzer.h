?/* THIS FILE CONTAINS CODE WHICH PERFORMS SENTIMENT ANALYSIS USING DICTIONARY OF WORDS
                             AND THEIR SENTIMENT VALUES.*/

#pragma once
using namespace std;

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include "DUtilities.h"
//#include<bits/stdc++.h>



 int getSentimentValue(string sentence);
 void classifyWord(string word);
 void clearAll();
// map<string, int> setDictionary();

static vector<string> positiveWords;
static vector<string> negativeWords; 
static map<string, int> dictionary = createDictionry();
 
static int sCounter = 0;




inline int getSentimentValue(string sentence) // Compares each word of a string with the words in the dictionary
{

    istringstream ss(sentence); //converting string into stream of words

    string word; //temporary string for comparison
    int result = 0;

    while (ss >> word)
    {
        if (dictionary.count(word) > 0) //checking if the word is in the dictionary
        {
            result += dictionary[word]; //updating score
            classifyWord(word);
            sCounter++;
        }
    }
    return result;
}

inline void classifyWord(string word)
{
    if (dictionary[word] > 0)positiveWords.push_back(word);
    if (dictionary[word] < 0)negativeWords.push_back(word);
}

inline void clearAll(void)
{
    negativeWords.clear();
    positiveWords.clear();
    sCounter = 0;
}