#ifndef POWERFIST_HH
#define POWERFIST_HH

#include "AWeapon.hh"

class PowerFist : public AWeapon
{
  
public:
  PowerFist();
  virtual ~PowerFist();

  virtual void attack() const;
};

#endif
