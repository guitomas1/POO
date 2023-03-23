#ifndef SEM2__APARTMENT_H_
#define SEM2__APARTMENT_H_
#include "lodging.h"


class apartment : lodging {
 public:
  explicit apartment(int num_rooms);
  apartment();

  int GetNumRooms() const;

  void SetNumRooms(int num_rooms);

 private:
  int numRooms;
};

#endif //SEM2__APARTMENT_H_
