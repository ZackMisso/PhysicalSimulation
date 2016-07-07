#pragma once

#include "../globalInclude.h"
#include "../geometry/geom.h"

// TODO :: replace instance variables with PhysicsState ref

class PhysicsObject {
private:
  Geom* geometry;
  Array<dvec3*>* externalForces;
  dvec3 pos;
  dvec3 vel;
  percision mass;
  bool staticObject;

  void eulerIntegration(percision dt);
  void implicitIntegration(percision dt);
public:
  PhysicsObject();
  ~PhysicsObject();
  virtual void physicsStep(percision dt);
  virtual dvec3 accumulateForces(percision dt);
  // getter methods
  Geom* getGeometry() const;
  Array<dvec3*>* getExternalForces() const;
  dvec3 getPos() const;
  dvec3 getVel() const;
  percision getMass() const;
  bool getStaticObject() const;
  // setter methods
  void setGeometry(Geom* param);
  void setExternalForces(Array<dvec3*>* param);
  void setPos(dvec3 param);
  void setVel(dvec3 param);
  void setMass(percision param);
  void setStaticObject(bool param);
};
