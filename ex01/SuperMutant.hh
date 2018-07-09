#ifndef SuperMutant_HH
#define SuperMutant_HH

#include <iostream>
#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
  
public:
  
  SuperMutant();
  virtual ~SuperMutant();

  virtual void takeDamage(int);
};

#endif
