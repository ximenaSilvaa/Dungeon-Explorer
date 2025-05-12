#pragma once
#include <iostream>
#include <string>
#include "Graph.h"
#include "Monster.h"
#include "Room.h"

class Dungeon {
public:
    unsigned int getSize();
    bool createDungeon(std::string fileName);
    bool addRoom(unsigned int id, Monster mstr); 
    void displayRooms(); 
private: 
    Graph<Room> dungeon;
};