#ifndef SEM2__LODGING_H_
#define SEM2__LODGING_H_
#include "travelAgency.h"


class lodging : travelAgency {
 public:
  lodging();
  lodging(const string &id, const string &location, double daily_price, bool availability);

  const string &GetId() const;
  const string &GetLocation() const;
  double GetDailyPrice() const;
  bool IsAvailable() const;
  bool IsBeingUsed() const;

  void SetId(const string &id);
  void SetLocation(const string &location);
  void SetDailyPrice(double daily_price);
  void Book();
  void CheckIn();
  void CheckOut();

 private:
  string id_;
  string location_;
  double dailyPrice_;
  bool available_;
  bool beingUsed_;

 };

#endif //SEM2__LODGING_H_
