#pragma once

#include "../globalInclude.h"
#include "../particles/particle.h"

class Spring {
protected:
  Particle* one;
  Particle* two;
  dvec3 currentPotential;
  dvec3 currentForce;
  dvec3 currentDampForce;
  dvec3 currentRestPos;
  precision restLength;
  precision springConstant;
  precision dampConstant;
  bool dirty;
public:
  Spring(Particle* a,Particle* b);
  Spring(Particle* a,Particle* b,precision restL);
  virtual void calculatePotential();
  virtual void calculateSpringForce();
  virtual void calculateDampForce();
  // getter methods
  Particle* getOne() const;
  Particle* getTwo() const;
  dvec3 getCurrentPotential() const;
  dvec3 getCurrentForce() const;
  dvec3 getCurrentDampForce() const;
  dvec3 getCurrentRestPos() const;
  precision getRestLength() const;
  precision getSpringConstant() const;
  precision getDampConstant() const;
  // setter methods
  void setOne(Particle* param);
  void setTwo(Particle* param);
  void setRestLength(precision param);
  void setSpringConstant(precision param);
  void setDampConstant(precision param);
};
