#include "C:\Schoolwork\Cache\GamesCombined1\BlindRankings.h"
#include "C:\Schoolwork\Cache\GamesCombined1\Draft.h"
#include "C:\Schoolwork\Cache\GamesCombined1\DisneyMysteryDraft.h"
#include "C:\Schoolwork\Cache\GamesCombined1\DisneyAuctionGame.h"
#include "C:\Schoolwork\Cache\GamesCombined1\DisneyRandomBuilder.h"
#include "C:\Schoolwork\Cache\GamesCombined1\BracketGenerator.h"
#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Run Draft Game\n";
        cout << "2. Run Blind Rankings\n";
        cout << "3. Run Mystery Draft Game\n";
        cout << "4. Run Auction Game\n";
        cout << "5. Run Random Park Building\n";
        cout << "6. Run Bracket Generator\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            runDraft();
            break;
        }
        case 2:
            runBlindRankings();
            break;
        case 3:
            runMysteryDraft();
            break;
        case 4:
            runAuctionGame();
            break;
        case 5:
            runRandomBuilder();
            break;
        case 6:
            runBracketGenerator();
            break;
        case 7: 
            cout << "Exiting the program. Goodbye!\n";
            break;
        default: 
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
