#pragma once

#include "../dataStructures/array.h"
#include "../globalInclude.h"
#include "physicsObject.h"
#include "narrowPhase.h"
#include "broadPhase.h"
#include "collisionEngine.h"

class PhysicsWorld {
private:
  Array<PhysicsObject*>* objects;
  CollisionEngine* collisionEngine;
  NarrowPhase* narrowPhase;
  BroadPhase* broadPhase;
  percision currentTime;
  bool baking;

  void performBroadPhase();
  void performNarrowPhase();
public:
  PhysicsWorld();
  ~PhysicsWorld();
  void initializeWorld(NarrowPhase* n,BroadPhase* b,bool isBaking);
  void addObject(PhysicsObject* object);
  void performStep(percision dt);
  void removeObject(PhysicsObject* object);
  void bakeWorld();
  // getter methods
  percision getCurrentTime();
};
