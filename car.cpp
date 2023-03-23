#include "car.h"



car::car() : licensePlate_("nao definido"), dailyPrice_(0), availability_(false), car_class_(CarClass::null), car_fuel_(CarFuel::null)  {}

car::car(const string &license_plate, double daily_price, bool availability, CarClass car_class, CarFuel car_fuel )
    : licensePlate_(license_plate), dailyPrice_(daily_price), availability_(availability), car_class_(car_class), car_fuel_(car_fuel) {}

car::~car() {}



const string &car::GetLicensePlate() const {
  return licensePlate_;
}
double car::GetDailyPrice() const {
  return dailyPrice_;
}
bool car::IsAvailability() const {
  return availability_;
}
CarClass car::GetCarClass() const {
  return car_class_;
}
CarFuel car::GetCarFuel() const {
  return car_fuel_;
}
bool car::IsBeingUsed() const {
  return beingUsed_;
}

void car::SetLicensePlate(const string &license_plate) {
  licensePlate_ = license_plate;
}
void car::SetDailyPrice(double daily_price) {
  dailyPrice_ = daily_price;
}
/*void car::SetAvailability(bool availability) {
  availability_ = availability;
}*/
void car::SetCarClass(CarClass car_class) {
  car_class_ = car_class;
}
void car::SetCarFuel(CarFuel car_fuel) {
  car_fuel_ = car_fuel;
}
/*void car::SetBeingUsed(bool being_used) {
  beingUsed_ = being_used;
}*/
void car::Reserve(){
  availability_ = false;
}
void car::PickUp() {
  beingUsed_ = true;
}
void car::Return() {
  availability_ = true;
  beingUsed_ = false;
}



