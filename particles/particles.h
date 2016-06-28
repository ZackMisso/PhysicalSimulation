#pragma once

#include "../globalInclude.h"
#inclide "../physics/physicsState.h"

class Particle {
private:
  PhysicsState* physicsState;
  dvec4 color;
  percision age;
public:
  Particle();
  ~Particle();
  void update(percision dt);
  virtual void changePhysicsFunction(percision dt);
  virtual void changeColorFunction(percision dt);
  // getter methods
  dvec4 getColor();
  dvec3 getPos();
  percision getAge();
  // setter methods
  void setColor(dvec4 param);
  void setPos(dvec3 param);
  void setAge(percision param);
};
