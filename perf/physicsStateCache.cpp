#include "physicsStateCache.h"

PhysicsStateCache* PhysicsStateCache::instance = 0x0;

PhysicsStateCache::PhysicsStateCache(int num) {
  cleanStates = new Array<PhysicsState*>(num);
  for(int i=0;i<num;i++) cleanStates->add(new PhysicsState());
}

PhysicsStateCache::~PhysicsStateCache() {
  while(cleanStates->getSize()) delete cleanStates->removeLast();
  delete cleanStates;
}

void PhysicsStateCache::createPhysicsState() {
  for(int i=0;i<10;i++) cleanStates->add(new PhysicsState());
}

void PhysicsStateCache::deletePhysicsState() {
  int num = cleanStates->getSize() < 10 ? cleanStates->getSize() : 10;
  for(int i=0;i<num;i++) delete cleanStates->removeLast();
}

PhysicsStateCache* PhysicsStateCache::getInstance() {
  return instance;
}

void PhysicsStateCache::initialize(int num) {
  if(!instance) instance = new PhysicsStateCache(num);
}

void PhysicsStateCache::destroy() {
  if(instance) delete instance;
}

PhysicsState* PhysicsStateCache::getPhysicsState() {
  if(!cleanStates->getSize()) createPhysicsState();
  return cleanStates->removeLast();
}

void PhysicsStateCache::returnPhysicsState(PhysicsState* state) {
  state-clear();
  cleanStates->add(state);
}
