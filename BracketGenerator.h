#ifndef BRACKET_GENERATOR_H
#define BRACKET_GENERATOR_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <random>

using namespace std;

vector<string> chooseBracketLists();
void printBracket(const vector<string>& bracket, int round);
vector<string> generateBracket(vector<string> participants);
int runBracketGenerator();

#endif // BRACKET_GENERATOR_H
