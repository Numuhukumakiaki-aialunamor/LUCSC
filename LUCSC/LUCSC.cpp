#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Inventory {
private:
    vector<string> items;

public:
    void addItem(const string& item) {
        items.push_back(item);
        std::cout << item << " has been added to your inventory.\n";
    }

    void showInventory() const {
        std::cout << "Your inventory contains:\n";
        for (const auto& item : items) {
            std::cout << "- " << item << '\n';
        }
    }
};



class location {
private:
    string intro, action1, action2, action3, moveto, a1blurb, a2blurb, a3blurb, item, exit;

public:
    location();
    location(string intro, string action1, string action2, string action3, string moveto, string a1blurb, string a2blurb, string a3blurb, string item, string exit);
    void playerchoice();
    string getitem();

};
location::location() {}

location::location(string introval, string action1val, string action2val, string action3val, string movetoval, string a1blurbval, string a2blurbval, string a3blurbval, string itemval, string exitval) {
    intro = introval;
    action1 = action1val;
    action2 = action2val;
    action3 = action3val;
    moveto = movetoval;
    a1blurb = a1blurbval;
    a2blurb = a2blurbval;
    a3blurb = a3blurbval;
    item = itemval;

}
void location::playerchoice() {
    int plin = 0;
    int invflag = 0;
    do {
        cout << intro << "\nWhat would you like to do?\n" << action1 << "\n" << action2 << "\n" << action3 << "\n";
        cin >> plin;

        switch (plin) {
        case 1:
            cout << a1blurb << "\n";
            break;
        case 2:
            cout << a2blurb << "\n";
            break;
        case 3:
            cout << a3blurb << "\n";
            cout << "you recieved " << item << "\n";
            invflag = 1;
            cout << exit << "\n";

            break;

        default:
            cout << "Invalid input try again :)";
            break;
        }
    } while (invflag != 1 );
    cout << "Congrats! You got the " << item << "! \n"<< moveto;
}
string location::getitem() {

    return item;
}



int main(){

    location locations[5];
    

//when player choice is invoked and the flag is set to 1, add the first tiem to the inventory
    // Old Willow Park
    string intro1 = "You step into Old Willow Park, a serene haven filled with ancient willow trees and a tranquil pond.";
    string action1_1 = "Feed the ducks";
    string action2_1 = "Find a hidden note";
    string action3_1 = "Sketch the scenery";
    string moveto1 = "Move to the Abandoned Greenhouse";
    string a1blurb1 = "You scatter some bread crumbs and watch the ducks happily waddle over.";
    string a2blurb1 = "You discover a secret note tucked into the knot of an old willow tree.";
    string a3blurb1 = "You sit by the pond and sketch the picturesque view.";
    string item1 = "Sketch of Old Willow Park";
    string exit1 = "You leave the park, feeling at peace.";
    location park = location(intro1, action1_1, action2_1, action3_1, moveto1, a1blurb1, a2blurb1, a3blurb1, item1, exit1);
    locations[0] = park;

    // Abandoned Greenhouse
    string intro2 = "The greenhouse is a forgotten wonder, overrun with wild plants and flowers. The scent of forgotten blooms lingers in the air.";
    string action1_2 = "Collect rare seeds";
    string action2_2 = "Journal your findings";
    string action3_2 = "Uncover a hidden compartment";
    string moveto2 = "Move to Whispering Woods";
    string a1blurb2 = "You gather seeds from the wild plants growing inside.";
    string a2blurb2 = "You jot down observations about the different plants.";
    string a3blurb2 = "You find a hidden drawer in an old workbench with clues to a botanical mystery.";
    string item2 = "Rare Seed from Abandoned Greenhouse";
    string exit2 = "You leave the greenhouse, intrigued by its secrets.";
    location Greenhouse = location(intro2, action1_2, action2_2, action3_2, moveto2, a1blurb2, a2blurb2, a3blurb2, item2, exit2);
    locations[1] = Greenhouse;
    // Whispering Woods
    string intro3 = "The woods are alive with the sounds of birds and the rustle of leaves, creating an enchanting atmosphere.";
    string action1_3 = "Follow animal tracks";
    string action2_3 = "Listen to the whispers";
    string action3_3 = "Build a woodland shrine";
    string moveto3 = "Move to Echo Cave";
    string a1blurb3 = "You track footprints to find a family of deer or other wildlife.";
    string a2blurb3 = "You stand still, trying to interpret the whispered messages of the woods.";
    string a3blurb3 = "You create a small shrine from twigs and stones to honor the forest spirits.";
    string item3 = "Woodland Shrine Token from Whispering Woods";
    string exit3 = "You leave the woods, feeling a deep connection to nature.";
    location woods = location(intro3, action1_3, action2_3, action3_3, moveto3, a1blurb3, a2blurb3, a3blurb3, item3, exit3);
    locations[2] = woods;
    // Echo Cave
    string intro4 = "The cave is filled with the sounds of echoes and glittering stalactites and stalagmites.";
    string action1_4 = "Shout into the abyss";
    string action2_4 = "Draw cave art";
    string action3_4 = "Find hidden gems";
    string moveto4 = "Move to Seaside Cliffs";
    string a1blurb4 = "You shout and hear your voice echo dramatically through the cave.";
    string a2blurb4 = "You use charcoal or chalk to draw on the cave walls, like ancient artists.";
    string a3blurb4 = "You discover sparkling gems or crystals embedded in the cave walls.";
    string item4 = "Sparkling Gem from Echo Cave";
    string exit4 = "You leave the cave, amazed by its natural wonders.";
    location cave = location(intro4, action1_4, action2_4, action3_4, moveto4, a1blurb4, a2blurb4, a3blurb4, item4, exit4);
    locations[3] = cave;
    // Seaside Cliffs
    string intro5 = "You stand atop the cliffs, feeling the salty breeze and hearing the crashing waves below.";
    string action1_5 = "Watch the sunset";
    string action2_5 = "Fly a kite";
    string action3_5 = "Discover a sea cave";
    string moveto5 = "Move to Old Willow Park";
    string a1blurb5 = "You find a perfect spot to watch the sun set over the ocean.";
    string a2blurb5 = "You feel the wind catch your kite as it soars high above the cliffs.";
    string a3blurb5 = "You find a hidden sea cave accessible only at low tide.";
    string item5 = "Shell from Seaside Cliffs";
    string exit5 = "You leave the cliffs, feeling rejuvenated by the sea air.";
    location Cliffs = location(intro1, action1_1, action2_1, action3_1, moveto1, a1blurb1, a2blurb1, a3blurb1, item1, exit1);
    locations[4] = Cliffs;
    
    Inventory inv = Inventory();

    for (int i = 0; i < size(locations); i++) {

        locations[i].playerchoice();
        inv.addItem(locations[i].getitem());

    }
 

    inv.showInventory();


    return 0;
}
