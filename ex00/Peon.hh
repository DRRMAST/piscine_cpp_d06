#ifndef PEON_HH
#define PEON_HH

#include <iostream>
#include "Victim.hh"

class	Peon : public Victim
{

public:

  Peon(std::string name);
  virtual ~Peon();

  virtual void		getPolymorphed() const;
  
};

std::ostream&	operator<<(std::ostream& os, Victim const& victim);

#endif
