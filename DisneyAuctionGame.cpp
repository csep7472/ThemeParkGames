#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void auctionRides(int budget, int numTeams, std::vector<int>& teamBudgets, std::vector<std::vector<std::string>>& teams, std::vector<std::string> availableRides, int minAuctioned) {
    // Initialize each team's budget to the starting budget
    for (int i = 0; i < numTeams; i++) {
        teamBudgets[i] = budget;
    }

    std::srand(std::time(0));  // Initialize random seed
    int numAuctioned = minAuctioned + std::rand() % (minAuctioned + 15 - minAuctioned);  // Randomize the number of auctioned rides
    std::cout << "Auctioning rides:" << std::endl;

    int totalBudget = 0;
    for (int i = 0; i < numTeams; ++i) {
        totalBudget += teamBudgets[i];  // Sum all teams' budgets to check if the auction should continue
    }

    // Auction loop
    for (int i = 0; i < numAuctioned; ++i) {
        if (totalBudget <= 0) {
            std::cout << "All teams are out of budget. Stopping auction." << std::endl;
            cout << endl;
            break;  // Stop the auction if all teams are out of budget
        }

        int index = std::rand() % availableRides.size();  // Randomly pick a ride to auction
        std::string ride = availableRides[index];
        std::cout << "Ride: " << ride << std::endl;

        // Prompt for the price of the ride
        int price;
        std::cout << "Enter the price for the ride: ";
        std::cin >> price;

        // Ask which team bought the ride
        int teamChoice;
        std::cout << "Enter the team number (1 to " << numTeams << ") that bought the ride: ";
        std::cin >> teamChoice;
        teamChoice -= 1;  // Convert to 0-based index

        if (teamChoice < 0 || teamChoice >= numTeams) {
            std::cout << "Invalid team number." << std::endl;
            continue;  // Skip to the next ride if an invalid team is chosen
        }

        // Check if the selected team has enough budget
        if (teamBudgets[teamChoice] >= price) {
            // Deduct the price from the selected team's budget
            teamBudgets[teamChoice] -= price;
            // Add the ride to the selected team's list
            teams[teamChoice].push_back(ride);
            std::cout << "Team " << (teamChoice + 1) << " bought the ride for " << price << ". Remaining budget: " << teamBudgets[teamChoice] << std::endl;
            cout << endl;
        }
        else {
            std::cout << "Team " << (teamChoice + 1) << " doesn't have enough budget. Skipping this ride." << std::endl;
        }

        // Remove the ride from the available rides list
        availableRides.erase(availableRides.begin() + index);

        // Update total budget
        totalBudget = 0;
        for (int i = 0; i < numTeams; ++i) {
            totalBudget += teamBudgets[i];
        }
    }
}

void auctionShows(int budget, int numTeams, std::vector<int>& teamBudgets, std::vector<std::vector<std::string>>& teams, std::vector<std::string> availableShows, int minAuctioned) {
    // Initialize each team's budget to the starting budget
    for (int i = 0; i < numTeams; i++) {
        teamBudgets[i] = budget;
    }

    std::srand(std::time(0));  // Initialize random seed
    int numAuctioned = minAuctioned + std::rand() % (minAuctioned + 15 - minAuctioned);  // Randomize the number of auctioned rides
    std::cout << "Auctioning shows:" << std::endl;

    int totalBudget = 0;
    for (int i = 0; i < numTeams; ++i) {
        totalBudget += teamBudgets[i];  // Sum all teams' budgets to check if the auction should continue
    }

    // Auction loop
    for (int i = 0; i < numAuctioned; ++i) {
        if (totalBudget <= 0) {
            std::cout << "All teams are out of budget. Stopping auction." << std::endl;
            cout << endl;
            break;  // Stop the auction if all teams are out of budget
        }

        int index = std::rand() % availableShows.size();  // Randomly pick a ride to auction
        std::string show = availableShows[index];
        std::cout << "Show: " << show << std::endl;

        // Prompt for the price of the ride
        int price;
        std::cout << "Enter the price for the show: ";
        std::cin >> price;

        // Ask which team bought the ride
        int teamChoice;
        std::cout << "Enter the team number (1 to " << numTeams << ") that bought the show: ";
        std::cin >> teamChoice;
        teamChoice -= 1;  // Convert to 0-based index

        if (teamChoice < 0 || teamChoice >= numTeams) {
            std::cout << "Invalid team number." << std::endl;
            continue;  // Skip to the next ride if an invalid team is chosen
        }

        // Check if the selected team has enough budget
        if (teamBudgets[teamChoice] >= price) {
            // Deduct the price from the selected team's budget
            teamBudgets[teamChoice] -= price;
            // Add the ride to the selected team's list
            teams[teamChoice].push_back(show);
            std::cout << "Team " << (teamChoice + 1) << " bought the show for " << price << ". Remaining budget: " << teamBudgets[teamChoice] << std::endl;
            cout << endl;
        }
        else {
            std::cout << "Team " << (teamChoice + 1) << " doesn't have enough budget. Skipping this show." << std::endl;
        }

        // Remove the ride from the available rides list
        availableShows.erase(availableShows.begin() + index);

        // Update total budget
        totalBudget = 0;
        for (int i = 0; i < numTeams; ++i) {
            totalBudget += teamBudgets[i];
        }
    }
}

void auctionRestaurants(int budget, int numTeams, std::vector<int>& teamBudgets, std::vector<std::vector<std::string>>& teams, std::vector<std::string> availableRestaurants, int minAuctioned) {
    // Initialize each team's budget to the starting budget
    for (int i = 0; i < numTeams; i++) {
        teamBudgets[i] = budget;
    }

    std::srand(std::time(0));  // Initialize random seed
    int numAuctioned = minAuctioned + std::rand() % (minAuctioned + 15 - minAuctioned);  // Randomize the number of auctioned rides
    std::cout << "Auctioning restaurants:" << std::endl;

    int totalBudget = 0;
    for (int i = 0; i < numTeams; ++i) {
        totalBudget += teamBudgets[i];  // Sum all teams' budgets to check if the auction should continue
    }

    // Auction loop
    for (int i = 0; i < numAuctioned; ++i) {
        if (totalBudget <= 0) {
            std::cout << "All teams are out of budget. Stopping auction." << std::endl;
            cout << endl;
            break;  // Stop the auction if all teams are out of budget
        }

        int index = std::rand() % availableRestaurants.size();  // Randomly pick a ride to auction
        std::string restaurant = availableRestaurants[index];
        std::cout << "Restaurant: " << restaurant << std::endl;

        // Prompt for the price of the ride
        int price;
        std::cout << "Enter the price for the restaurant: ";
        std::cin >> price;

        // Ask which team bought the ride
        int teamChoice;
        std::cout << "Enter the team number (1 to " << numTeams << ") that bought the restaurant: ";
        std::cin >> teamChoice;
        teamChoice -= 1;  // Convert to 0-based index

        if (teamChoice < 0 || teamChoice >= numTeams) {
            std::cout << "Invalid team number." << std::endl;
            continue;  // Skip to the next ride if an invalid team is chosen
        }

        // Check if the selected team has enough budget
        if (teamBudgets[teamChoice] >= price) {
            // Deduct the price from the selected team's budget
            teamBudgets[teamChoice] -= price;
            // Add the ride to the selected team's list
            teams[teamChoice].push_back(restaurant);
            std::cout << "Team " << (teamChoice + 1) << " bought the restaurant for " << price << ". Remaining budget: " << teamBudgets[teamChoice] << std::endl;
            cout << endl;
        }
        else {
            std::cout << "Team " << (teamChoice + 1) << " doesn't have enough budget. Skipping this restaurant." << std::endl;
        }

        // Remove the ride from the available rides list
        availableRestaurants.erase(availableRestaurants.begin() + index);

        // Update total budget
        totalBudget = 0;
        for (int i = 0; i < numTeams; ++i) {
            totalBudget += teamBudgets[i];
        }
    }
}

void displayResults(const vector<vector<string>>& teams) {
    cout << "\n========== Final Team Selections ==========" << endl;
    for (size_t i = 0; i < teams.size(); i++) {
        cout << "Team " << i + 1 << " selections:" << endl;
        for (const string& item : teams[i]) {
            cout << "  - " << item << endl;
        }
        cout << "--------------------------------------" << endl;
    }
}

int runAuctionGame() {
    cout << endl;
    vector<string> wdwRides = { "TRON Lightcycle / Run", "Space Mountain WDW", "Tiana's Bayou Adventure WDW", "The Haunted Mansion WDW", "Big Thunder Mountain Railroad WDW", "The Twilight Zone Tower of Terror WDW", "Rock 'N' Roller Coaster", "Star Wars: Rise of the Resistance WDW", "Guardians of the Galaxy Cosmic Rewind", "Avatar Flight of Passage", "Expedition Everest", "Seven Dwarfs Mine Train", "Pirates of the Caribbean WDW", "Jungle Cruise WDW", "Slinky Dog Dash", "Millennium Falcon: Smugglers Run WDW", "Star Tours - The Adventures Continue WDW", "Toy Story Mania! WDW", "Mickey & Minnie's Runaway Railway WDW", "Kilimanjaro Safaris", "Dinosaur", "Spaceship Earth", "Test Track", "Soarin' Around the World WDW", "Under the Sea ~ Journey of The Little Mermaid WDW", "Tomorrowland Transit Authority PeopleMover", "The Many Adventures of Winnie the Pooh WDW", "Peter Pan's Flight WDW","It's a Small World WDW", "Buzz Lightyear's Space Ranger Spin", "Na'vi River Journey", "Mission: SPACE", "Frozen Ever After", "The Seas with Nemo & Friends", "Journey into Imagination with Figment", "Living with the Land", "Gran Fiesta Tour Starring The Three Caballeros", "Remy's Ratatouille Adventure", "Walt Disney World Railroad", "Tomorrowland Speedway", "Liberty Square Riverboat", "The Barnstormer", "Kali River Rapids", "Wildlife Express Train", "Prince Charming Regal Carousel", "The Magic Carpets of Aladdin", "Mad Tea Party WDW", "Dumbo the Flying Elephant WDW", "Astro Orbiter WDW", "Alien Swirling Saucers", "Splash Mountain WDW", "20000 Leagues Under the Sea: Submarine Voyage", "ExtraTERRORestrial Alien Encounter", "If You Had Wings", "Delta Dreamflight", "Stitch's Great Escape", "Snow White's Scary Adventures", "Skyway WDW", "Mr Toad's Wild Ride WDW", "Body Wars", "El Rio del Tiempo", "Ellen's Energy Adventure", "Horizons", "World of Motion", "Maelstrom", "The Living Seas", "Journey Into Imagination", "The Great Movie Ride", "Studio Backlot Tour", "Primeval Whirl", "TriceraTop Spin" };
    vector<string> universalRides = { "Harry Potter: Battle at the Ministry", "Stardust Racers", "Monsters Unchained: The Frankenstein Experiment", "Harry Potter and the Forbidden Journey", "VelociCoaster", "Hagrid's Magical Creatures Motorbike Adventure", "The Incredible Hulk Coaster", "Revenge of the Mummy", "Harry Potter and the Escape from Gringotts", "Hiccup's Wing Gliders", "Curse of the Werewolf", "Dudley Do-Right's Ripsaw Falls", "The Amazing Adventures of Spider-Man", "Jurassic Park River Adventure", "Men In Black: Alien Attack", "Yoshi's Adventure", "Donkey Kong Mine Cart Madness", "Skull Island: Reign of Kong", "Mariokart: Bowser's Challenge", "The High in the Sky Seuss Trolley Train Ride!", "Popeye & Bluto's Bilge-Rat Barges", "Flight of the Hippogriff", "Transformers: The Ride 3D", "E.T. Adventure", "The Simpsons Ride", "Hollywood Rip Ride Rockit", "Fyre Drill", "The Cat in the Hat", "Doctor Doom's Fearfall", "Despicable Me Minion Mayhem", "Race Through New York Starring Jimmy Fallon", "Fast & Furious - Supercharged", "Hogwarts Express", "Constellation Carousel", "Dragon Racers Rally", "One Fish, Two Fish, Red Fish, Blue Fish", "Storm Force Accelatron", "Caroseussel", "Kang and Kudos Twirl and Hurl", "Dueling Dragons", "Disaster", "Twister: Ride It Out", "Jaws", "Jimmy Neutron's Nicktoon Blast", "Back to the Future - The Ride", "Kongfrontation", "Poseidon's Fury" };
    vector<string> dlrRides = { "Incredicoaster", "Guardians of the Galaxy - Mission: BREAKOUT!", "Radiator Springs Racers", "Rise of the Resistance DLR", "Space Mountain DLR", "Tiana's Bayou Adventure DLR", "Big Thunder Mountain Railroad DLR", "Indiana Jones Adventure", "Pirates of the Caribbean DLR", "Soarin' Around the World DLR", "Grizzly River Run", "Toy Story Midway Mania! DLR", "Millenium Falcon: Smugglers Run DLR", "Star Tours - The Adventures Continue DLR", "Jungle Cruise DLR", "Haunted Mansion DLR", "Matterhorn Bobsleds", "WEB SLINGERS: A Spider-Man Adventure", "The Little Mermaid: Ariel's Undersea Adventure DLR", "Monsters, Inc. Mike & Sulley to the Rescue!", "Pixar Pal-A-Round", "The Many Adventures of Winnie the Pooh DLR", "It's a Small World DLR", "Buzz Lightyear Astro Blasters", "Roger Rabbit's Car Toon Spin", "Pinocchio's Daring Journey", "Snow White's Enchanted Wish", "Mr. Toad's Wild Ride", "Peter Pan's Flight DLR", "Alice in Wonderland", "Goofy's Sky School", "Davy Crockett Explorer Canoes", "Disneyland Monorail", "Mark Twain Riverboat", "Gadget's Go Coaster", "Autopia", "Finding Nemo Submarine Voyage", "Disneyland Railroad", "Storybook Land Canal Boats", "Casey Jr. Circus Train", "Golden Zephyr", "Jumpin' Jellyfish", "Silly Symphony Swings", "Inside Out Emotional Whirlwind", "Jessie's Critter Carousel", "Luigi's Rollickin' Roadsters", "Mater's Junkyard Jamboree", "Astro Orbiter DLR", "Dumbo the Flying Elephant DLR", "King Arthur Carousel", "Splash Mountain DLR", "Mine Train Through Natures Wonderland", "Skyway DLR", "Viewliner", "Flying Saucers", "Motorboat Adventures through Gummi Glen", "Peoplemover DLR", "Adventure thru Inner Space", "Rocket Rods", "Superstar Limo", "Tower of Terror DLR", "Red Car Trolley", "Heimlichs Chew Chew Train", "Fliks Flyers", "Luigi's Flying Tires", "Maliboomer", "California Screamin", "Mullholand Madness", "Sun Wheel" };
    vector<string> otherRides = { "Tower of Terror DLP", "Big Thunder Mountain DLP", "Hyperspace Mountain DLP", "Pirates of the Caribbean Battle for the Sunken Treasure", "Mystic Manor", "Journey to the Center of the Earth", "Anna and Elsa's Frozen Journey", "Tower of Terror TDR", "Indiana Jones Adventure: Temple of the Crystal Skull", "Enchanted Tale of Beauty and the Beast", "Splash Mountain TDR", "Soaring Over Horizon", "Roaring Rapids", "Zootopia: Hot Pursuit", "Phantom Manor", "Avengers Assemble: Flight Force", "Jungle River Cruise HDL", "Big Grizzly Runaway Mine Cars", "Sindbad's Storybook Voyage", "Rapunzel's Lantern Festival", "Peter Pan's Neverland Adventure", "Pooh's Hunny Hunt", "Soaring Fantastic Flight", "Crush's Coaster", "Indiana Jones and the Temple of Peril", "Peter Pan's Flight SDL", "Ant Man and the Wasp Nano Battle!", "Wandering Oaken's Sliding Sleighs", "Iron Man Experience", "20000 Leagues Under the Sea Adventure TDR", "Tinker Bell's Busy Buggies", "Raging Spirits", "Monsters Inc Ride and Go Seek", "Nemo and Friends SeaRider", "Disney Sea Electric Railway", "Flounders Flying Fish Coaster", "Aquatopia", "DisneySea Transit Steamliner", "Venetian Gondolas", "Cars Race Rally", "Slinky Dog Zigzag Spin", "Toy Soldiers Parachute Drop", "Jet Packs", "RC Racer", "The Happy Ride with Baymax" };
    vector<string> wdwShows = { "Carousel of Progress", "Enchanted Tiki Room WDW", "Country Bear Musical Jamboree", "Happily Ever After", "Fantasmic! WDW", "Muppet*Vision 3D", "The American Adventure", "Luminous The Symphony of Us", "Festival of the Lion King", "Monsters Inc Laugh Floor", "Hall of Presidents", "Mickey's Philharmagic WDW", "Festival of Fantasy Parade", "For the First Time in Forever: A Frozen Sing-Along Celebration", "Indiana Jones Epic Stunt Spectacular!", "Wonderful World of Animation", "Disney Movie Magic", "One Man's Dream", "Impressions de France", "Canada Far and Wide", "Voices of Liberty", "Tree of Life Awakenings", "Enchanted Tales with Belle", "Mickey's Magical Friendship Faire", "Beauty and the Beast - Live on Stage", "Disney Jr. Play and Dance! WDW", "Vacation Fun", "Reflections of China", "Turtle Talk with Crush", "Disney and Pixar Short Film Festival", "Awesome Planet", "Beauty and the Beast Sing-Along", "Celebration Encanto!", "JAMMitors", "It's Tough to be a Bug", "Finding Nemo: The Big Blue... and Beyond", "Feathered Friends in Flight", "Dream Along with Mickey", "Tapestry of Nations", "Spirit of Norway", "Celebrate a Dream Come True Parade", "Country Bear Jamboree", "Disney Enchantment", "The Enchanted Tiki Room (Under New Management)", "Fantasy in the Sky", "The Legend of the Lion King", "Wishes: A Magical Gathering of Disney Dreams", "Cranium Command", "The Timekeeper", "SpectroMagic", "The Muppets Present... Great Moments in American History", "Move It! Shake It! MousekeDance It! Street Party", "Mickey Mouse Revue", "Main Street Electrical Parade", "Captain EO", "Circle of Life: An Environmental Fable", "Epcot Forever", "Food Rocks", "HarmonioUS", "IllumiNations: Reflections of Earth", "Wonders of China", "O Canada!", "Kitchen Kabaret", "The American Idol Experience", "Jedi Training: Trials of the Temple", "Voyage of the Little Mermaid", "Sounds Dangerous", "Pixar Play Parade", "Lightning McQueen's Racing Academy", "Disney Kite Tails", "Mickey's Jammin Jungle Parade", "Rivers of Light", "Lights Motors Action" };
    vector<string> universalShows = { "Le Cirque Arcanus", "The Untrainable Dragon", "Hogwarts Always!","The Bourne Stuntacular", "Cinesational", "Horror Make-Up Show", "Universal Mega Movie Parade", "Ollivanders Experience", "Raptor Encounter", "Frog Choir", "Animal Actors", "Dreamworks Imagination Celebration", "Po Live!" };
    vector<string> dlrShows = { "World of Color ONE", "Enchanted Tiki Room DLR", "Fantasmic DLR", "Fire of the Rising Moons", "Mickey's Philharmagic DLR", "Mickey's Mix Magic", "Great Moments with Mr. Lincoln", "Animation Academy", "Disney Junior Dance Party DLR" };
    vector<string> wdwRestaurants = { "Tony's Town Square Restaurant", "The Plaza Restaurant", "Crystal Palace", "Diamond Horseshoe", "Skipper Canteen", "Liberty Tree Tavern", "Cinderella's Royal Table", "Be Our Guest", "Roundup Rodeo", "Sci-Fi Dine In", "Hollywood & Vine", "Hollywood Brown Derby", "Mama Melrose's", "50's Prime Time Dine In", "Takumi-Tei", "Teppan Edo", "Tutto Italia", "Via Napoli", "Rose & Crown", "San Angel Inn", "Space 220", "Shiki-Sai", "La Hacienda", "Le Cellier", "Coral Reef", "Garden Grill", "Akershus", "Biergarten", "Chefs de France", "Tiffins", "Tusker House Restaurant", "Rainforest Cafe", "Pinocchio Village Haus", "Pecos Bill Tall Tale Cafe", "Columbia Harbour House", "Cosmic Ray's Starlight Cafe", "Casey's Corner", "Woody's Lunchbox", "Pizzerizzo", "ABC Commissary", "Backlot Express", "Sunset Boulevard Market", "Docking Bay 7", "Sunshine Seasons", "Nine Dragons Restaurant", "Regal Eagle", "Katsura Grill", "La Cantina", "Connections", "Yak & Yeti", "Restaurantosaurus", "Sautulli Canteen", "Flame Tree Barbeque", "Pizzafari" };
    vector<string> universalRestaurants = { "Atlantic", "The Blue Dragon Pan-Asian Restaurant", "Das Stakehaus", "Mythos Restaurant", "Confisco Grille", "Louie's Italian Restaurant", "Finnegan's Bar and Grill", "Lombard's Seafood Grille", "The Oak & Star Tavern", "The Plastered Owl", "Toadstool Cafe", "Hooligan's Grog and Gruel", "Mead Hall", "Pizza Moon", "Star Sui Bao", "Spit Fyre Grill", "Cafe L'air De La Sirene", "The Burning Blade Tavern", "Circus McGurkuz Cafe Stoopendous", "Green Eggs and Ham Cafe", "Cafe 4", "Captain America Diner", "Comic Strip Cafe", "Blondie's: Home of the Dagwood", "Thunder Falls Terrace", "Pizza Predattoria", "The Burger Digs", "Three Broomsticks", "Doc Sugrue's Desert Kabab House", "Fire Eater's Grill", "Minion's Cafe","Richter's Burger Co", "TODAY Cafe", "Mel's Drive In", "Krusty Burger", "Dreamworks Imagination Cafe", "Bumblebee Man's Taco Truck", "Leaky Cauldron" };
    vector<string> dlrRestaurants = { "Lamplight Lounge", "Wine Country Trattoria", "Carthay Circle Restaurant", "Stage Door Cafe", "Tiana's Palace", "The Tropical Hideaway", "Troubadour Tavern", "River Belle Terrace", "Plaza Inn", "Rancho del Zocalo", "Golden Horseshoe", "Carnation Cafe", "Blue Bayou Restaurant", "Cafe Orleans", "Paradise Garden Grill", "Poultry Palace", "Pym Test Kitchen", "Smokejumpers Grill", "Cocina Cucamonga Mexican Grill", "Corn Dog Castle", "Flo's V8 Cafe", "Aunt Cass Cafe", "Award Wieners", "Boardwalk Pizza & Pasta", "Hungry Bear Barbeque Jamboree", "Jolly Holiday Bakery Cafe", "Galactic Grill", "Docking Bay 7", "Cafe Daisy", "Alien Pizza Planet", "Bengal Barbeque" };

    bool draftRides = true;
    bool draftShows = true;
    bool draftRestaurants = true;

    int numTeams, rideMinAuctioned, showMinAuctioned, restaurantMinAuctioned;
    std::cout << "Enter minimum number of rides to be auctioned: ";
    std::cin >> rideMinAuctioned;
    if (rideMinAuctioned == -1) {
        draftRides = false;
    }

    std::cout << "Enter minimum number of shows to be auctioned: ";
    std::cin >> showMinAuctioned;
    if (showMinAuctioned == -1) {
        draftShows = false;
    }

    std::cout << "Enter minimum number of restaurants to be auctioned: ";
    std::cin >> restaurantMinAuctioned;
    if (restaurantMinAuctioned == -1) {
        draftRestaurants = false;
    }

    std::vector<string> availableRides;
    std::vector<string> availableShows;
    std::vector<string> availableRestaurants;

    std::vector<int> selections;
    int choice;
    cout << "Select lists to include: " << endl;
    cout << "1. WDW" << endl;
    cout << "2. UOR" << endl;
    cout << "3. DLR" << endl;
    cout << "4. Non US Disney" << endl;
    cin >> choice;
    while (true) {
        if (choice == 0) break;
        if (choice == 1) {
            for (int i = 0; i < wdwRides.size(); i++) {
                availableRides.push_back(wdwRides.at(i));
            }
            for (int i = 0; i < wdwShows.size(); i++) {
                availableShows.push_back(wdwShows.at(i));
            }
            for (int i = 0; i < wdwRestaurants.size(); i++) {
                availableRestaurants.push_back(wdwRestaurants.at(i));
            }
        }
        else if (choice == 2) {
            for (int i = 0; i < universalRides.size(); i++) {
                availableRides.push_back(universalRides.at(i));
            }
            for (int i = 0; i < universalShows.size(); i++) {
                availableShows.push_back(universalShows.at(i));
            }
            for (int i = 0; i < universalRestaurants.size(); i++) {
                availableRestaurants.push_back(universalRestaurants.at(i));
            }
        }
        else if (choice == 3) {
            for (int i = 0; i < dlrRides.size(); i++) {
                availableRides.push_back(dlrRides.at(i));
            }
            for (int i = 0; i < dlrShows.size(); i++) {
                availableShows.push_back(dlrShows.at(i));
            }
            for (int i = 0; i < dlrRestaurants.size(); i++) {
                availableRestaurants.push_back(dlrRestaurants.at(i));
            }
        }
        else if (choice == 4) {
            for (int i = 0; i < otherRides.size(); i++) {
                availableRides.push_back(otherRides.at(i));
            }
        }
        cin >> choice;
    }

    cout << "Enter the number of teams: ";
    cin >> numTeams;
    if (numTeams < 2) {
        cout << "There must be at least 2 teams for the auction." << endl;
        return 1;
    }

    int budget;
    vector<vector<string>> teams(numTeams);
    cout << "Enter the budget: ";
    cin >> budget;
    vector<int> teamBudgets(numTeams, budget);

    if (draftRides) {
        auctionRides(budget, numTeams, teamBudgets, teams, availableRides, rideMinAuctioned);

    }

    if (draftShows) {
        auctionShows(budget, numTeams, teamBudgets, teams, availableShows, showMinAuctioned);
    }

    if (draftRestaurants) {
        auctionRestaurants(budget, numTeams, teamBudgets, teams, availableRestaurants, restaurantMinAuctioned);
    }

    displayResults(teams);
    return 0;
}
