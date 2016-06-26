#pragma once

// this class represents an object controlled by peridynamics

#include "../globalInclude.h"
#include "../geometry/geom.h"
#include "../dataStructures/array.h"
#include "../particles/particle.h"
#include "periSpring.h"

class PeriSystem {
private:
  Array<Particle*>* pointMasses;
  Array<PeriSpring*>* springs;
  precision pointMassRadius;
  precision pointMassMass;
  precision pointMassHorizon;
  precision springConstant;
  precision springDamp;
  precision springBreak;
public:
  PeriSystem();
  PeriSystem(Geom* geometry);
  ~PeriSystem();
  // methods
  void preprocess();
  void convertGeomToPoints(Geom* geometry);
  void performPhysicsStep(precision dt);
  // getter methods
  Array<Particle*>* getPointMasses();
  Array<PeriSpring*>* getSprings();
  precision getPointMassRadius();
  precision getPointMassMass();
  precision getPointMassHorizon();
  precision getSpringConstant();
  precision getSpringDamp();
  precision getSpringBreak();
  // setter methods
  void setPointMasses(Array<Particle*>* param);
  void setSprings(Array<PeriSpring*>* param);
  void setPointMassRadius(precision param);
  void setPointMassMass(precision param);
  void setPointMassHorizon(precision param);
  void setSpringConstant(precision param);
  void setSpringDamp(precision param);
  void setSpringBreak(precision param);
};
