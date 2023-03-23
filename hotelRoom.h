#ifndef SEM2__HOTELROOM_H_
#define SEM2__HOTELROOM_H_
#include "lodging.h"

enum class RoomType {
  null,
  kSingle,
  kDouble,
  kTriple
};

class hotelRoom : lodging {
 public:
  hotelRoom();
  hotelRoom(const string &id, const string &location, double daily_price, bool availability, RoomType room_type);

  RoomType GetRoomType() const;

  void SetRoomType(RoomType room_type);

 private:
  RoomType roomType_;
};

#endif //SEM2__HOTELROOM_H_
