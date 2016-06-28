#include "physicsState.h"

PhysicsState::PhysicsState() {
  position = dvec3(0.0);
  velocity = dvec3(0.0);
  force = dvec3(0.0);
  mass = 0.0;
  isStatic = false;
}

PhysicsState::PhysicsState(dvec3 pos,percision m) {
  position = pos;
  velocity = dvec3(0.0);
  force = dvec3(0.0);
  mass = m;
  isStatic = mass <= 0.0;
}

PhysicsState::PhysicsState(dvec3 pos,dvec3 vel,percision m) {
  position = pos;
  velocity = vel;
  force = dvec3(0.0);
  mass = m;
  isStatic = mass <= 0.0;
}

void PhysicsState::clear() {
  position = dvec3(0.0);
  velocity = dvec3(0.0);
  force = dvec3(0.0);
  mass = 0.0;
  isStatic = true;
}

dvec3 PhysicsState::getPos() const { return position; }
dvec3 PhysicsState::getVel() const { return velocity; }
dvec3 PhysicsState::getForce() const { return force; }
percision PhysicsState::getMass() const { return mass; }
bool PhysisState::getIsStatic() const { return isStatic; }

void PhysicsState::setPos(dvec3 param) { position = param; }
void PhysicsState::setVel(dvec3 param) { velocity = param; }
void PhysicsState::setForce(dvec3 param) { force = param; }
void PhysicsState::setMass(percision param) { mass = param; }
void PhysicsState::setIsStatic(bool param) { isStatic = param; }
