#include "hotelRoom.h"

hotelRoom::hotelRoom() : roomType_(RoomType::null) {}
hotelRoom::hotelRoom(const string &id,
                     const string &location,
                     double daily_price,
                     bool availability,
                     RoomType room_type) : lodging(id, location, daily_price, availability), roomType_(room_type) {}
RoomType hotelRoom::GetRoomType() const {
  return roomType_;
}
void hotelRoom::SetRoomType(RoomType room_type) {
  roomType_ = room_type;
}

