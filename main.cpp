/*Rodrigo Martínez Vallejo A00573055*/
#include <iostream>
#include <string>
#include "Dungeon.h"
#include "Catalogue.h"

using namespace std;

int main() {
    Dungeon   dng;
    Catalogue catalogue;

    //LOADING OF CSV INTO CATALOGUE
    string file = "monsters.csv";
    if (!catalogue.loadFromCSV(file)) {
        cout << "Error in the cration of the catalogue" << endl; 
        return 0;
    } 

    //READS GRAPH TO CREATE DUNGEON
    cout << "***Creating dungeon***" << endl;
    if (!dng.createDungeon("dungeon.txt")) {
        cout << "Error in the creation of the dugeon" << endl;
        return 0;
    }

    //FILLS DUNGEON WITH MONSTERS
    for (unsigned int i = 0; i < dng.getSize(); i++) {
        if (!dng.addRoom(i, catalogue.randomMonsterFromCatalogue())) {
            cout << "something when terribly wrong when creating a room... I suggest running" << i+1 << endl;
            return 0;
        }
    }

    //DISPLAYING ROOMS
    cout << "¿What hides in the rooms?" << endl;
    dng.displayRooms();
    
    return 0;
}