#pragma once

// This class is responsible for running collision checks and resolution.
// This class has its own separate array of physics objects than the
// physics world class because physics world contains all physics objects,
// while this one contains all physics objects that can colide.

#include "broadPhase.h"
#include "narrowPhase.h"
#include "manifold.h"
#include "../dataStructures/array.h"
#include "physicsObject.h"

class CollisionEngine {
private:
  Array<PhysicsObject*>* objects;
  Array<Manifold*>* manifolds;
  BroadPhase* broadPhase;
  NarrowPhase* narrowPhase;
public:
  CollisionEngine();
  ~CollisionEngine();
  void initialize(BroadPhase* broad,NarrowPhase* narrow);
  void addObject(PhysicsObject* object);
  void removeObject(PhysicsObject* object);
  void performStep(percision dt);
};
