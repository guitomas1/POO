#ifndef SEM2__CAR_H_
#define SEM2__CAR_H_
#include "travelAgency.h"


enum class CarClass{
  null,
  kLuxury,
  kFamily,
  kEconomy
};

enum class CarFuel{
  null,
  kPetrol,
  kDisel,
  kElectric,
  kHybrid
};

class car : public travelAgency{
 public:
  car();
  car(const string &license_plate, double daily_price, bool availability, CarClass car_class, CarFuel car_fuel);
  virtual ~car();

  const string &GetLicensePlate() const;
  double GetDailyPrice() const;
  bool IsAvailability() const;
  CarClass GetCarClass() const;
  CarFuel GetCarFuel() const;
  bool IsBeingUsed() const;

  void SetLicensePlate(const string &license_plate);
  void SetDailyPrice(double daily_price);
  //void SetAvailability(bool availability);
  void SetCarClass(CarClass car_class);
  void SetCarFuel(CarFuel car_fuel);
  //void SetBeingUsed(bool being_used);
  void Reserve();
  void PickUp();
  void Return();

 private:
  string licensePlate_;
  double dailyPrice_;
  bool availability_;
  CarClass car_class_;
  CarFuel car_fuel_;
  bool beingUsed_;

};

#endif //SEM2__CAR_H_
