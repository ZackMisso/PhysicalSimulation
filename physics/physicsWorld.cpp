#include "physicsWorld.h"

PhysicsWorld::PhysicsWorld() {
  // to be implemented
}

PhysicsWorld::~PhysicsWorld() {
  // to be implemented
}

void PhysicsWorld::initializeWorld(NarrowPhase* n,BroadPhase* b,bool isBaking) {
  // to be implemented
}

void PhysicsWorld::addObject(PhysicsObject* object) {
  // to be implemented
}

void PhysicsWorld::performStep(percision dt) {
  // to be implemented
}

void PhysicsWorld::removeObject(PhysicsObject* object) {
  // to be implemented
}

void PhysicsWorld::bakeWorld() {
  // to be implemented
}

percision PhysicsWorld::getCurrentTime() { return currentTime; }
