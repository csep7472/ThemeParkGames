#ifndef DRAFT_H
#define DRAFT_H

#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

// Global pools for different categories
extern vector<string> ridePool;
extern vector<string> showPool;
extern vector<string> restaurantPool;
extern vector<string> hotelPool;

// Function declarations
vector<string> selectRandomStrings(const vector<string>& list, int x);
void draftRound(int round, int numTeams, vector<string>& playerPool, vector<vector<string>>& teams, vector<int>& draftOrder);
void listSelection(int rideCount, int showCount, int restaurantCount, int hotelCount);
void draftGame(int numTeams, int ridesCount, int showsCount, int restaurantsCount, int hotelCount);
int runDraft();

#endif // DRAFT_H
