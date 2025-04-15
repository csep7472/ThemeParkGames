#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>
#include <numeric>

using namespace std;

vector<string> wdwTopRides = { "TRON Lightcycle / Run", "Space Mountain WDW", "Tiana's Bayou Adventure WDW", "The Haunted Mansion WDW", "Big Thunder Mountain Railroad WDW", "The Twilight Zone Tower of Terror WDW", "Rock 'N' Roller Coaster", "Star Wars: Rise of the Resistance WDW", "Guardians of the Galaxy Cosmic Rewind", "Avatar Flight of Passage", "Expedition Everest"};
vector<string> wdwGreatRides = { "Seven Dwarfs Mine Train", "Pirates of the Caribbean WDW", "Jungle Cruise WDW", "Slinky Dog Dash", "Millennium Falcon: Smugglers Run WDW", "Star Tours - The Adventures Continue WDW", "Toy Story Mania! WDW", "Mickey & Minnie's Runaway Railway WDW", "Kilimanjaro Safaris", "Dinosaur", "Spaceship Earth", "Test Track", "Soarin' Around the World WDW" };
vector<string> wdwMidRides = { "Under the Sea ~ Journey of The Little Mermaid WDW", "Tomorrowland Transit Authority PeopleMover", "The Many Adventures of Winnie the Pooh WDW", "Peter Pan's Flight WDW","It's a Small World WDW", "Buzz Lightyear's Space Ranger Spin", "Na'vi River Journey", "Mission: SPACE", "Frozen Ever After", "The Seas with Nemo & Friends", "Journey into Imagination with Figment", "Living with the Land", "Gran Fiesta Tour Starring The Three Caballeros", "Remy's Ratatouille Adventure" };
vector<string> wdwBadRides = { "Walt Disney World Railroad", "Tomorrowland Speedway", "Liberty Square Riverboat", "The Barnstormer", "Kali River Rapids", "Wildlife Express Train" };
vector<string> wdwFlatRides = { "Prince Charming Regal Carousel", "The Magic Carpets of Aladdin", "Mad Tea Party WDW", "Dumbo the Flying Elephant WDW", "Astro Orbiter WDW", "Alien Swirling Saucers" };
vector<string> wdwDefunctRides = { "Splash Mountain WDW", "20000 Leagues Under the Sea: Submarine Voyage", "ExtraTERRORestrial Alien Encounter", "If You Had Wings", "Delta Dreamflight", "Stitch's Great Escape", "Snow White's Scary Adventures", "Skyway WDW", "Mr Toad's Wild Ride WDW", "Body Wars", "El Rio del Tiempo", "Ellen's Energy Adventure", "Horizons", "World of Motion", "Maelstrom", "The Living Seas", "Journey Into Imagination", "The Great Movie Ride", "Studio Backlot Tour", "Primeval Whirl", "TriceraTop Spin" };

vector<string> universalTopRides = { "Harry Potter: Battle at the Ministry", "Stardust Racers", "Monsters Unchained: The Frankenstein Experiment", "Harry Potter and the Forbidden Journey", "VelociCoaster", "Hagrid's Magical Creatures Motorbike Adventure", "The Incredible Hulk Coaster", "Revenge of the Mummy", "Harry Potter and the Escape from Gringotts"};
vector<string> universalGreatRides = { "Hiccup's Wing Gliders", "Curse of the Werewolf", "Dudley Do-Right's Ripsaw Falls", "The Amazing Adventures of Spider-Man", "Jurassic Park River Adventure", "Men In Black: Alien Attack"};
vector<string> universalMidRides = { "Yoshi's Adventure", "Donkey Kong Mine Cart Madness", "Skull Island: Reign of Kong", "Mariokart: Bowser's Challenge", "The High in the Sky Seuss Trolley Train Ride!", "Popeye & Bluto's Bilge-Rat Barges", "Flight of the Hippogriff", "Transformers: The Ride 3D", "E.T. Adventure", "The Simpsons Ride", "Hollywood Rip Ride Rockit"};
vector<string> universalBadRides = { "Fyre Drill", "The Cat in the Hat", "Doctor Doom's Fearfall", "Despicable Me Minion Mayhem", "Race Through New York Starring Jimmy Fallon", "Fast & Furious - Supercharged", "Hogwarts Express"};
vector<string> universalFlatRides = { "Constellation Carousel", "Dragon Racers Rally", "One Fish, Two Fish, Red Fish, Blue Fish", "Storm Force Accelatron", "Caroseussel", "Kang and Kudos Twirl and Hurl"};
vector<string> universalDefunctRides = { "Dueling Dragons", "Disaster", "Twister: Ride It Out", "Jaws", "Jimmy Neutron's Nicktoon Blast", "Back to the Future - The Ride", "Kongfrontation", "Poseidon's Fury" };

vector<string> dlrTopRides = { "Incredicoaster", "Guardians of the Galaxy - Mission: BREAKOUT!", "Radiator Springs Racers", "Rise of the Resistance DLR", "Space Mountain DLR", "Tiana's Bayou Adventure DLR", "Big Thunder Mountain Railroad DLR", "Indiana Jones Adventure", "Pirates of the Caribbean DLR"};
vector<string> dlrGreatRides = { "Soarin' Around the World DLR", "Grizzly River Run", "Toy Story Midway Mania! DLR", "Millenium Falcon: Smugglers Run DLR", "Star Tours - The Adventures Continue DLR", "Jungle Cruise DLR", "Haunted Mansion DLR", "Matterhorn Bobsleds"};
vector<string> dlrMidRides = { "WEB SLINGERS: A Spider-Man Adventure", "The Little Mermaid: Ariel's Undersea Adventure DLR", "Monsters, Inc. Mike & Sulley to the Rescue!", "Pixar Pal-A-Round", "The Many Adventures of Winnie the Pooh DLR", "It's a Small World DLR", "Buzz Lightyear Astro Blasters", "Roger Rabbit's Car Toon Spin", "Pinocchio's Daring Journey", "Snow White's Enchanted Wish", "Mr. Toad's Wild Ride", "Peter Pan's Flight DLR", "Alice in Wonderland"};
vector<string> dlrBadRides = { "Goofy's Sky School", "Davy Crockett Explorer Canoes", "Disneyland Monorail", "Mark Twain Riverboat", "Gadget's Go Coaster", "Autopia", "Finding Nemo Submarine Voyage", "Disneyland Railroad", "Storybook Land Canal Boats", "Casey Jr. Circus Train"};
vector<string> dlrFlatRides = { "Golden Zephyr", "Jumpin' Jellyfish", "Silly Symphony Swings", "Inside Out Emotional Whirlwind", "Jessie's Critter Carousel", "Luigi's Rollickin' Roadsters", "Mater's Junkyard Jamboree", "Astro Orbiter DLR", "Dumbo the Flying Elephant DLR", "King Arthur Carousel"};
vector<string> dlrDefunctRides = { "Splash Mountain DLR", "Mine Train Through Natures Wonderland", "Skyway DLR", "Viewliner", "Flying Saucers", "Motorboat Adventures through Gummi Glen", "Peoplemover DLR", "Adventure thru Inner Space", "Rocket Rods", "Superstar Limo", "Tower of Terror DLR", "Red Car Trolley", "Heimlichs Chew Chew Train", "Fliks Flyers", "Luigi's Flying Tires", "Maliboomer", "California Screamin", "Mullholand Madness", "Sun Wheel" };

vector<string> otherTopRides = { "Tower of Terror DLP", "Big Thunder Mountain DLP", "Hyperspace Mountain DLP", "Pirates of the Caribbean Battle for the Sunken Treasure", "Mystic Manor", "Journey to the Center of the Earth", "Anna and Elsa's Frozen Journey", "Tower of Terror TDR", "Indiana Jones Adventure: Temple of the Crystal Skull", "Enchanted Tale of Beauty and the Beast", "Splash Mountain TDR"};
vector<string> otherGreatRides = { "Soaring Over Horizon", "Roaring Rapids", "Zootopia: Hot Pursuit", "Phantom Manor", "Avengers Assemble: Flight Force", "Jungle River Cruise HDL", "Big Grizzly Runaway Mine Cars", "Sindbad's Storybook Voyage", "Rapunzel's Lantern Festival", "Peter Pan's Neverland Adventure", "Pooh's Hunny Hunt", "Soaring Fantastic Flight" };
vector<string> otherMidRides = { "Crush's Coaster", "Indiana Jones and the Temple of Peril", "Peter Pan's Flight SDL", "Ant Man and the Wasp Nano Battle!", "Wandering Oaken's Sliding Sleighs", "Iron Man Experience", "20000 Leagues Under the Sea Adventure TDR", "Tinker Bell's Busy Buggies", "Raging Spirits", "Monsters Inc Ride and Go Seek", "Nemo and Friends SeaRider"};
vector<string> otherBadRides = { "Disney Sea Electric Railway", "Flounders Flying Fish Coaster", "Aquatopia", "DisneySea Transit Steamliner", "Venetian Gondolas"};
vector<string> otherFlatRides = { "Cars Race Rally", "Slinky Dog Zigzag Spin", "Toy Soldiers Parachute Drop", "Jet Packs", "RC Racer", "The Happy Ride with Baymax"};

vector<string> wdwTopShows = { "Carousel of Progress", "Enchanted Tiki Room WDW", "Country Bear Musical Jamboree", "Happily Ever After", "Fantasmic! WDW", "Muppet*Vision 3D", "The American Adventure", "Luminous The Symphony of Us", "Festival of the Lion King"};
vector<string> wdwMidShows = { "Monsters Inc Laugh Floor", "Hall of Presidents", "Mickey's Philharmagic WDW", "Festival of Fantasy Parade", "For the First Time in Forever: A Frozen Sing-Along Celebration", "Indiana Jones Epic Stunt Spectacular!", "Wonderful World of Animation", "Disney Movie Magic", "One Man's Dream", "Impressions de France", "Canada Far and Wide", "Voices of Liberty", "Tree of Life Awakenings"};
vector<string> wdwBadShows = { "Enchanted Tales with Belle", "Mickey's Magical Friendship Faire", "Beauty and the Beast - Live on Stage", "Disney Jr. Play and Dance! WDW", "Vacation Fun", "Reflections of China", "Turtle Talk with Crush", "Disney and Pixar Short Film Festival", "Awesome Planet", "Beauty and the Beast Sing-Along", "Celebration Encanto!", "JAMMitors", "It's Tough to be a Bug", "Finding Nemo: The Big Blue... and Beyond", "Feathered Friends in Flight"};
vector<string> wdwDefunctShows = { "Dream Along with Mickey", "Tapestry of Nations", "Spirit of Norway", "Celebrate a Dream Come True Parade", "Country Bear Jamboree", "Disney Enchantment", "The Enchanted Tiki Room (Under New Management)", "Fantasy in the Sky", "The Legend of the Lion King", "Wishes: A Magical Gathering of Disney Dreams", "Cranium Command", "The Timekeeper", "SpectroMagic", "The Muppets Present... Great Moments in American History", "Move It! Shake It! MousekeDance It! Street Party", "Mickey Mouse Revue", "Main Street Electrical Parade", "Captain EO", "Circle of Life: An Environmental Fable", "Epcot Forever", "Food Rocks", "HarmonioUS", "IllumiNations: Reflections of Earth", "Wonders of China", "O Canada!", "Kitchen Kabaret", "The American Idol Experience", "Jedi Training: Trials of the Temple", "Voyage of the Little Mermaid", "Sounds Dangerous", "Pixar Play Parade", "Lightning McQueen's Racing Academy", "Disney Kite Tails", "Mickey's Jammin Jungle Parade", "Rivers of Light", "Lights Motors Action"};

vector<string> universalTopShows = { "Le Cirque Arcanus", "The Untrainable Dragon", "Hogwarts Always!","The Bourne Stuntacular", "Cinesational"};
vector<string> universalMidShows = { "Horror Make-Up Show", "Universal Mega Movie Parade", "Ollivanders Experience"};
vector<string> universalBadShows = { "Raptor Encounter", "Frog Choir", "Animal Actors", "Dreamworks Imagination Celebration", "Po Live!"};

vector<string> dlrTopShows = { "World of Color ONE", "Enchanted Tiki Room DLR", "Fantasmic DLR", "Fire of the Rising Moons"};
vector<string> dlrMidShows = { "Mickey's Philharmagic DLR", "Mickey's Mix Magic", "Great Moments with Mr. Lincoln"};
vector<string> dlrBadShows = { "Animation Academy", "Disney Junior Dance Party DLR"};

vector<string> wdwSitDownRestaurants = { "Tony's Town Square Restaurant", "The Plaza Restaurant", "Crystal Palace", "Diamond Horseshoe", "Skipper Canteen", "Liberty Tree Tavern", "Cinderella's Royal Table", "Be Our Guest", "Roundup Rodeo", "Sci-Fi Dine In", "Hollywood & Vine", "Hollywood Brown Derby", "Mama Melrose's", "50's Prime Time Dine In", "Takumi-Tei", "Teppan Edo", "Tutto Italia", "Via Napoli", "Rose & Crown", "San Angel Inn", "Space 220", "Shiki-Sai", "La Hacienda", "Le Cellier", "Coral Reef", "Garden Grill", "Akershus", "Biergarten", "Chefs de France", "Tiffins", "Tusker House Restaurant", "Rainforest Cafe" };
vector<string> wdwQuickServiceRestaurants = { "Pinocchio Village Haus", "Pecos Bill Tall Tale Cafe", "Columbia Harbour House", "Cosmic Ray's Starlight Cafe", "Casey's Corner", "Woody's Lunchbox", "Pizzerizzo", "ABC Commissary", "Backlot Express", "Sunset Boulevard Market", "Docking Bay 7", "Sunshine Seasons", "Nine Dragons Restaurant", "Regal Eagle", "Katsura Grill", "La Cantina", "Connections", "Yak & Yeti", "Restaurantosaurus", "Sautulli Canteen", "Flame Tree Barbeque", "Pizzafari" };

vector<string> universalSitDownRestaurants = { "Atlantic", "The Blue Dragon Pan-Asian Restaurant", "Das Stakehaus", "Mythos Restaurant", "Confisco Grille", "Louie's Italian Restaurant", "Finnegan's Bar and Grill", "Lombard's Seafood Grille"};
vector<string> universalQuickServiceRestaurants = { "The Oak & Star Tavern", "The Plastered Owl", "Toadstool Cafe", "Hooligan's Grog and Gruel", "Mead Hall", "Pizza Moon", "Star Sui Bao", "Spit Fyre Grill", "Cafe L'air De La Sirene", "The Burning Blade Tavern", "Circus McGurkuz Cafe Stoopendous", "Green Eggs and Ham Cafe", "Cafe 4", "Captain America Diner", "Comic Strip Cafe", "Blondie's: Home of the Dagwood", "Thunder Falls Terrace", "Pizza Predattoria", "The Burger Digs", "Three Broomsticks", "Doc Sugrue's Desert Kabab House", "Fire Eater's Grill", "Minion's Cafe","Richter's Burger Co", "TODAY Cafe", "Mel's Drive In", "Krusty Burger", "Dreamworks Imagination Cafe", "Bumblebee Man's Taco Truck", "Leaky Cauldron"};

vector<string> dlrSitDownRestaurants = { "Lamplight Lounge", "Wine Country Trattoria", "Carthay Circle Restaurant", "Stage Door Cafe", "Tiana's Palace", "The Tropical Hideaway", "Troubadour Tavern", "River Belle Terrace", "Plaza Inn", "Rancho del Zocalo", "Golden Horseshoe", "Carnation Cafe", "Blue Bayou Restaurant", "Cafe Orleans"};
vector<string> dlrQuickServiceRestaurants = { "Paradise Garden Grill", "Poultry Palace", "Pym Test Kitchen", "Smokejumpers Grill", "Cocina Cucamonga Mexican Grill", "Corn Dog Castle", "Flo's V8 Cafe", "Aunt Cass Cafe", "Award Wieners", "Boardwalk Pizza & Pasta", "Hungry Bear Barbeque Jamboree", "Jolly Holiday Bakery Cafe", "Galactic Grill", "Docking Bay 7", "Cafe Daisy", "Alien Pizza Planet", "Bengal Barbeque"};

vector<string> aboveAverageHotels = { "Grand Californian", "Disneyland Hotel", "Portofino Bay", "Hard Rock Hotel", "Royal Pacific", "Sapphire Falls", "Helios Grand Hotel", "Yacht Club", "Grand Floridian", "Old Key West", "Polynesian Village", "Contemporary Resort", "Beach Club", "BoardWalk Inn", "Animal Kingdom Lodge", "Bay Lake Tower", "Wilderness Lodge"};
vector<string> averageHotels = { "Pixar Place", "Aventura Hotel", "Stella Nova Resort", "Terra Luna Resort", "Dolphin Hotel", "Swan Hotel", "Swan Reserve", "Port Orleans - French Quarter", "Port Orleans - Riverside", "Riviera Resort", "Saratoga Springs", "Coronado Springs", "Caribbean Beach", "Art of Animation"};
vector<string> belowAverageHotels = { "Cabana Bay Resort", "Endless Summer Dockside", "Endless Summer Surfside", "Fort Wilderness Resort", "Pop Century", "All-Star Movies", "All-Star Music", "All-Star Sports"};

vector<string> categoryNames = { "Top Rides", "Great Rides", "Mid Rides", "Bad Rides", "Flat Rides", "Defunct Rides" };
vector<string> showCategoryNames = { "Top Shows", "Mid Shows", "Bad Shows", "Defunct Shows" };
vector<string> restaurantCategoryNames = { "Sit Down Restaurants", "Quick Service Restaurants" };
vector<string> hotelCategoryNames = { "Above Average Hotels", "Average Hotels", "Below Average Hotels"};

int budget;

int generateRandomCost(int minPercent, int maxPercent) {
    return (budget * (rand() % (maxPercent - minPercent + 1) + minPercent)) / 100;
}

void draftItems(int numTeams, vector<int>& teamBudgets, vector<vector<string>>& teams,
    vector<vector<string>>& categories, vector<pair<int, int>> priceRanges,
    vector<string>& categoryNames, string roundName) {

    vector<int> draftOrder(numTeams);
    iota(draftOrder.begin(), draftOrder.end(), 0);
    shuffle(draftOrder.begin(), draftOrder.end(), default_random_engine(time(0)));

    bool reverse = false;

    for (int i = 0; i < numTeams; i++) {
        teamBudgets[i] = budget;
    }

    while (true) {
        bool allTeamsOut = true;

        for (int i = 0; i < numTeams; i++) {
            int teamIdx = reverse ? numTeams - 1 - i : i;

            bool canBuySomething = false;
            for (size_t j = 0; j < categories.size(); j++) {
                if (!categories[j].empty() && teamBudgets[teamIdx] >= (budget * priceRanges[j].second / 100)) {
                    canBuySomething = true;
                    break;
                }
            }

            if (!canBuySomething) {
                continue;
            }

            int categoryChoice;
            do {
                cout << "\nTeam " << teamIdx + 1 << ", it's your turn. Remaining budget: " << teamBudgets[teamIdx] << endl;
                cout << "Select a category to choose from:\n";

                for (size_t j = 0; j < categories.size(); j++) {
                    int minPrice = budget * priceRanges[j].first / 100;
                    int maxPrice = budget * priceRanges[j].second / 100;

                    if (!categories[j].empty() && teamBudgets[teamIdx] >= maxPrice) {
                        cout << j + 1 << ". " << categoryNames[j] << ", Cost: " << minPrice << " - " << maxPrice << "\n";
                    }
                }
                cin >> categoryChoice;
            } while (categoryChoice < 1 || categoryChoice > categories.size() || categories[categoryChoice - 1].empty());

            int cost = generateRandomCost(priceRanges[categoryChoice - 1].first, priceRanges[categoryChoice - 1].second);
            vector<string>* selectedCategory = &categories[categoryChoice - 1];

            int randomIndex = rand() % selectedCategory->size();
            string selectedItem = (*selectedCategory)[randomIndex];
            selectedCategory->erase(selectedCategory->begin() + randomIndex);
            teams[teamIdx].push_back(categoryNames[categoryChoice - 1] + ": " + selectedItem);
            teamBudgets[teamIdx] -= cost;
            cout << "Team " << teamIdx + 1 << " has selected " << selectedItem << ". Cost: " << cost << " Remaining Budget : " << teamBudgets[teamIdx] << endl;
            allTeamsOut = false;
        }

        if (allTeamsOut) break;
        reverse = !reverse;
    }
}

void displayTeams(const vector<vector<string>>& teams) {
    cout << "\n========== Final Team Selections ==========" << endl;
    for (size_t i = 0; i < teams.size(); i++) {
        cout << "Team " << i + 1 << " selections:" << endl;
        for (const string& item : teams[i]) {
            cout << "  - " << item << endl;
        }
        cout << "--------------------------------------" << endl;
    }
}

int runMysteryDraft() {
    int numTeams;
    srand(static_cast<unsigned int>(time(0)));
    int choice;
    vector<string> topRides;
    vector<string> greatRides;
    vector<string> midRides;
    vector<string> badRides;
    vector<string> flatRides;
    vector<string> defunctRides;
    vector<string> topShows;
    vector<string> midShows;
    vector<string> badShows;
    vector<string> defunctShows;
    vector<string> sitDownRestaurants;
    vector<string> quickServiceRestaurants;

    cout << "Select lists to include: " << endl;
    cout << "1. WDW" << endl;
    cout << "2. UOR" << endl;
    cout << "3. DLR" << endl;
    cout << "4. Non US Disney" << endl;
    cin >> choice;
    while (true) {
        if (choice == 0) break;
        if (choice == 1) {
            for (int i = 0; i < wdwTopRides.size(); i++) {
                topRides.push_back(wdwTopRides.at(i));
            }
            for (int i = 0; i < wdwGreatRides.size(); i++) {
                greatRides.push_back(wdwGreatRides.at(i));
            }
            for (int i = 0; i < wdwMidRides.size(); i++) {
                midRides.push_back(wdwMidRides.at(i));
            }
            for (int i = 0; i < wdwBadRides.size(); i++) {
                badRides.push_back(wdwBadRides.at(i));
            }
            for (int i = 0; i < wdwDefunctRides.size(); i++) {
                defunctRides.push_back(wdwDefunctRides.at(i));
            }
            for (int i = 0; i < wdwFlatRides.size(); i++) {
                flatRides.push_back(wdwFlatRides.at(i));
            }
            for (int i = 0; i < wdwTopShows.size(); i++) {
                topShows.push_back(wdwTopShows.at(i));
            }
            for (int i = 0; i < wdwMidShows.size(); i++) {
                midShows.push_back(wdwMidShows.at(i));
            }
            for (int i = 0; i < wdwBadShows.size(); i++) {
                badShows.push_back(wdwBadShows.at(i));
            }
            for (int i = 0; i < wdwDefunctShows.size(); i++) {
                defunctShows.push_back(wdwDefunctShows.at(i));
            }
            for (int i = 0; i < wdwSitDownRestaurants.size(); i++) {
                sitDownRestaurants.push_back(wdwSitDownRestaurants.at(i));
            }
            for (int i = 0; i < wdwQuickServiceRestaurants.size(); i++) {
                quickServiceRestaurants.push_back(wdwQuickServiceRestaurants.at(i));
            }
        }
        else if (choice == 2) {
            for (int i = 0; i < universalTopRides.size(); i++) {
                topRides.push_back(universalTopRides.at(i));
            }
            for (int i = 0; i < universalGreatRides.size(); i++) {
                greatRides.push_back(universalGreatRides.at(i));
            }
            for (int i = 0; i < universalMidRides.size(); i++) {
                midRides.push_back(universalMidRides.at(i));
            }
            for (int i = 0; i < universalBadRides.size(); i++) {
                badRides.push_back(universalBadRides.at(i));
            }
            for (int i = 0; i < universalFlatRides.size(); i++) {
                flatRides.push_back(universalFlatRides.at(i));
            }
            for (int i = 0; i < universalDefunctRides.size(); i++) {
                defunctRides.push_back(universalDefunctRides.at(i));
            }
            for (int i = 0; i < universalTopShows.size(); i++) {
                topShows.push_back(universalTopShows.at(i));
            }
            for (int i = 0; i < universalMidShows.size(); i++) {
                midShows.push_back(universalMidShows.at(i));
            }
            for (int i = 0; i < universalBadShows.size(); i++) {
                badShows.push_back(universalBadShows.at(i));
            }
            for (int i = 0; i < universalSitDownRestaurants.size(); i++) {
                sitDownRestaurants.push_back(universalSitDownRestaurants.at(i));
            }
            for (int i = 0; i < universalQuickServiceRestaurants.size(); i++) {
                quickServiceRestaurants.push_back(universalQuickServiceRestaurants.at(i));
            }
        }
        else if (choice == 3) {
            for (int i = 0; i < dlrTopRides.size(); i++) {
                topRides.push_back(dlrTopRides.at(i));
            }
            for (int i = 0; i < dlrGreatRides.size(); i++) {
                greatRides.push_back(dlrGreatRides.at(i));
            }
            for (int i = 0; i < dlrMidRides.size(); i++) {
                midRides.push_back(dlrMidRides.at(i));
            }
            for (int i = 0; i < dlrBadRides.size(); i++) {
                badRides.push_back(dlrBadRides.at(i));
            }
            for (int i = 0; i < dlrFlatRides.size(); i++) {
                flatRides.push_back(dlrFlatRides.at(i));
            }
            for (int i = 0; i < dlrDefunctRides.size(); i++) {
                defunctRides.push_back(dlrDefunctRides.at(i));
            }
            for (int i = 0; i < dlrTopShows.size(); i++) {
                topShows.push_back(dlrTopShows.at(i));
            }
            for (int i = 0; i < dlrMidShows.size(); i++) {
                midShows.push_back(dlrMidShows.at(i));
            }
            for (int i = 0; i < dlrBadShows.size(); i++) {
                badShows.push_back(dlrBadShows.at(i));
            }
            for (int i = 0; i < dlrSitDownRestaurants.size(); i++) {
                sitDownRestaurants.push_back(dlrSitDownRestaurants.at(i));
            }
            for (int i = 0; i < dlrQuickServiceRestaurants.size(); i++) {
                quickServiceRestaurants.push_back(dlrQuickServiceRestaurants.at(i));
            }
        }
        else if (choice == 4) {
            for (int i = 0; i < otherTopRides.size(); i++) {
                topRides.push_back(otherTopRides.at(i));
            }
            for (int i = 0; i < otherGreatRides.size(); i++) {
                greatRides.push_back(otherGreatRides.at(i));
            }
            for (int i = 0; i < universalMidRides.size(); i++) {
                midRides.push_back(otherMidRides.at(i));
            }
            for (int i = 0; i < otherBadRides.size(); i++) {
                badRides.push_back(otherBadRides.at(i));
            }
            for (int i = 0; i < otherFlatRides.size(); i++) {
                flatRides.push_back(otherFlatRides.at(i));
            }
        }
        cin >> choice;
    }

    cout << "Enter the number of teams: ";
    cin >> numTeams;
    if (numTeams < 2) {
        cout << "There must be at least 2 teams for the draft." << endl;
        return 1;
    }

    vector<vector<string>> teams(numTeams);
    cout << "Enter the budget: ";
    cin >> budget;

    vector<int> teamBudgets(numTeams, budget);

    vector<vector<string>> rideCategories = { topRides, greatRides, midRides, badRides, flatRides, defunctRides };
    vector<pair<int, int>> ridePrices = { {25, 35}, {15, 20}, {8, 13}, {3, 8}, {3, 6}, {10, 15} };
    draftItems(numTeams, teamBudgets, teams, rideCategories, ridePrices, categoryNames, "Ride");

    vector<vector<string>> showCategories = { topShows, midShows, badShows, defunctShows };
    vector<pair<int, int>> showPrices = { {20, 35}, {15, 20}, {10, 15}, {15, 20} };
    draftItems(numTeams, teamBudgets, teams, showCategories, showPrices, showCategoryNames, "Show");

    vector<vector<string>> restaurantCategories = { sitDownRestaurants, quickServiceRestaurants };
    vector<pair<int, int>> restaurantPrices = { {35, 50}, {10, 20} };
    draftItems(numTeams, teamBudgets, teams, restaurantCategories, restaurantPrices, restaurantCategoryNames, "Ride");

    vector<vector<string>> hotelCategories = { aboveAverageHotels, averageHotels, belowAverageHotels };
    vector<pair<int, int>> hotelPrices = { {45, 60}, {15, 35}, {10, 15} };
    draftItems(numTeams, teamBudgets, teams, hotelCategories, hotelPrices, hotelCategoryNames, "Hotel");

    displayTeams(teams);
    return 0;
}
