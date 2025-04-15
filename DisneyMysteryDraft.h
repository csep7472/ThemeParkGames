#ifndef DISNEY_MYSTERY_DRAFT_H
#define DISNEY_MYSTERY_DRAFT_H

#include <iostream>
#include <vector>
#include <string>

// Global variables
extern std::vector<std::string> topRides;
extern std::vector<std::string> midRides;
extern std::vector<std::string> badRides;
extern std::vector<std::string> flatRides;
extern std::vector<std::string> defunctRandomRides;
extern std::vector<std::string> fireworksParades;
extern std::vector<std::string> defunctRandomShows;
extern std::vector<std::string> topStageShow;
extern std::vector<std::string> midStageShow;
extern std::vector<std::string> sitDownRestaurants;
extern std::vector<std::string> quickService;
extern std::vector<std::string> aboveAverageHotels;
extern std::vector<std::string> belowAverageHotels;
extern int budget;
extern bool allOut;

// Function Declarations
double generateRandomNumber(double min, double max);
void draftGame(int numTeams, int budget, std::vector<std::vector<std::string>> teams);
int runMysteryDraft();

#endif // DISNEY_MYSTERY_DRAFT_H
