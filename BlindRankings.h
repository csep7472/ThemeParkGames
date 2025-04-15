#ifndef BLINDRANKINGS_H
#define BLINDRANKINGS_H

#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

// Function to print the current rankings
void printCurrentRankings(const vector<pair<int, string>>& rankedItems);

// Function to choose predefined lists with names
vector<string> chooseLists();

int runBlindRankings();

#endif // BLINDRANKINGS_H
