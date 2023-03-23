//
// Created by user on 23/03/2023.
//

#include "lodging.h"
lodging::lodging() {}
lodging::lodging(const string &id, const string &location, double daily_price, bool availability)
    : id_(id), location_(location), dailyPrice_(daily_price), available_(availability) {}
const string &lodging::GetId() const {
  return id_;
}
const string &lodging::GetLocation() const {
  return location_;
}
double lodging::GetDailyPrice() const {
  return dailyPrice_;
}
bool lodging::IsAvailable() const {
  return available_;
}
bool lodging::IsBeingUsed() const {
  return beingUsed_;
}

void lodging::SetId(const string &id) {
  id_ = id;
}
void lodging::SetLocation(const string &location) {
  location_ = location;
}
void lodging::SetDailyPrice(double daily_price) {
  dailyPrice_ = daily_price;
}
void lodging::Book() {
  available_ = false;
}
void lodging::CheckIn() {
  beingUsed_ = true;
}
void lodging::CheckOut() {
  available_ = true;
  beingUsed_ = false;
}





