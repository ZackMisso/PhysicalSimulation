#pragma once

// handles collision resolution

#include "../dataStructures/array.h"
#include "manifold.h"

class NarrowPhase {
private:
public:
	NarrowPhase();
	~NarrowPhase();
	virtual Array<Manifold*>* collisionChecks(Array<Manifold*>* detected);
	virtual Array<Manifold*>* collisionResolved(Array<Manifold*>* collided);
};
