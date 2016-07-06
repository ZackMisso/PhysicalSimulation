#pragma once

#include "../physics/physicsState.h"
#include "../dataStructures/array.h"

class PhysicsStateCache {
private:
  static PhysicsStateCache* instance;

  Array<PhysicsState*>* cleanStates;
  void createPhysicsState();
  void deletePhysicsState();
  PhysicsStateCache(int num);
public:
  ~PhysicsStateCache();
  // class methods
  static PhysicsStateCache* getInstance();
  static void initialize(int num = 0);
  static void destroy();
  // methods
  PhysicsState* getPhysicsState();
  void returnPhysicsState(PhysicsState* manifold);
};
