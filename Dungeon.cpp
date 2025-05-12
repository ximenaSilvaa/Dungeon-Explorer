#include "Dungeon.h"

//FUNCTION THAT LOADS FILE USING BUILT IN LOAD FILE FUNCTION FROM Graph.h
bool Dungeon::createDungeon(std::string fileName) {
    return dungeon.loadFile(fileName);
}

//FUNCTION THAT RETURNS SIZE FROM DUNGEON
unsigned int Dungeon::getSize() {
    return dungeon.getSize();
}

//FUNCTION THAT ADDS A NEW ROOM TO LINEAR DUNGEON
bool Dungeon::addRoom(unsigned int id, Monster mstr) {
    Room r(mstr);
    return dungeon.setVertexData(id, r);
}

//FUNCTION THAT DISPLAYS ROOMS
void Dungeon::displayRooms() {
    dungeon.display();
}