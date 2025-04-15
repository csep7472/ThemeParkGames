#ifndef DISNEY_AUCTION_GAME_H
#define DISNEY_AUCTION_GAME_H

#include <vector>
#include <string>

// Function to auction rides
void auctionRides(int budget, int numTeams, std::vector<int>& teamBudgets,
    std::vector<std::vector<std::string>>& teams,
    std::vector<std::string> availableRides, int minAuctioned);

// Function to auction shows
void auctionShows(int budget, int numTeams, std::vector<int>& teamBudgets,
    std::vector<std::vector<std::string>>& teams,
    std::vector<std::string> availableShows, int minAuctioned);

// Function to auction restaurants
void auctionRestaurants(int budget, int numTeams, std::vector<int>& teamBudgets,
    std::vector<std::vector<std::string>>& teams,
    std::vector<std::string> availableRestaurants, int minAuctioned);

// Main function to run the auction game
int runAuctionGame();

#endif // AUCTION_GAME_H
