#ifndef PLASMARIFLE_HH
#define PLASMARIFLE_HH

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
  
public:
  PlasmaRifle();
  virtual ~PlasmaRifle();

  virtual void attack() const;
};

#endif
