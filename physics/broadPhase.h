#pragma once

// this phase is responsible for detecting all possible collisions between objects

#include "../dataStructures/array.h"
#include "physicsWorld.h"
#include "manifold.h"

class BroadPhase {
private:
public:
	BroadPhase();
	~BroadPhase();
	virtual Array<Manifold*>* detectCollisions(PhysicsWorld* world);
};
