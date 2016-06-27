#pragma once

// generated when a collision is detected

#include "../dataStructures/array.h"
#include "../globalInclude.h"
#include "physicsObject.h"

class Manifold {
private:
  Array<dvec3*>* contactPoints;
  Array<dvec3*>* contactNormals;
  PhysicsObject* one;
  PhysicsObject* two;
  percision penDepth;
  bool hasCollided;
public:
	Manifold();
  Manifold(PhysicsObject* a,PhysicsObject* b);
	~Manifold();
  // physics methods
  void process();
  // getter methods
  Array<dvec3*>* getContactPoints();
  Array<dvec3*>* getContactNormals();
  PhysicsObject* getOne();
  PhysicsObject* getTwo();
  percision getPenDepth();
  bool getHasCollided();
  // setter methods
  void setContactPoints(Array<dvec3*>* param);
  void setContactNormals(Array<dvec3*>* param);
  void setOne(PhysicsObject* param);
  void setTwo(PhysicsObject* param);
  void setPenDepth(percision param);
  void setHasCollided(bool param);
};
