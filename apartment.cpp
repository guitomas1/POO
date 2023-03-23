#include "apartment.h"

apartment::apartment(int num_rooms) : numRooms(num_rooms) {}
apartment::apartment() : numRooms(0) {}
int apartment::GetNumRooms() const {
  return numRooms;
}
void apartment::SetNumRooms(int num_rooms) {
  numRooms = num_rooms;
}

