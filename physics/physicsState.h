#pragma once

// this class represents a simple container for an object's physics data

#include "../globalInclude.h"

class PhysicsState {
private:
  dvec3 position;
  dvec3 velocity;
  dvec3 force;
  percision mass;
  bool isStatic;
public:
  PhysicsState();
  PhysicsState(dvec3 pos,percision m);
  PhysicsState(dvec3 pos,dvec3 vel,percision m);
  void clear();
  // getter methods
  inline dvec3 getPos() const;
  inline dvec3 getVel() const;
  inline dvec3 getForce() const;
  inline percision getMass() const;
  inline bool isStatic() const;
  // setter methods
  inline void setPos(dvec3 param);
  inline void setVel(dvec3 param);
  inline void setForce(dvec3 param);
  inline void setMass(percision param);
  inline void setIsStatic(bool param);
};
