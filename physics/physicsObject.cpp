#include "physicsObject.h"

PhysicsObject::PhysicsObject() {
  // to be implemented
}

PhysicsObject::~PhysicsObject() {
  // to be implemented
}

void PhysicsObject::physicsStep(percision dt) {
  // to be implemented
}

dvec3 PhysicsObject::accumulateForces(percision dt) {
  // to be implemented
  return dvec3(0.0);
}

void PhysicsObject::eulerIntegration(percision dt) {
  // to be implemented
}

void PhysicsObject::implicitIntegration(percision dt) {
  // to be implemented
}

Geom* PhysicsObject::getGeometry() const { return geometry; }
Array<dvec3*> PhysicsObject::getExternalForces() const { return externalForces; }
dvec3 PhysicsObject::getPos() const { return pos; }
dvec3 PhysicsObject::getVel() const { return vel; }
percision PhysicsObject::getMass() const { return mass; }
bool PhysicsObject::getStaticObject() const { return staticObject; }

void PhysicsObject::setGeometry(Geom* param) { geometry = param; }
void PhysicsObject::setExternalForces(Array<dvec3*>* param) { externalForces = param; }
void PhysicsObject::setPos(dvec3 param) { pos = param; }
void PhysicsObject::setVel(dvec3 param) { vel = param; }
void PhysicsObject::setMass(percision param) { mass = param; }
void PhysicsObject::setStaticObject(bool param) { staticObject = param; }
