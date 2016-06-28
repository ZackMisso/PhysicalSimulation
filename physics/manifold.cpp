#include "manifold.h"

Manifold::Manifold() {
	contactPoints = new Array<dvec3*>();
  contactNormals = new Array<dvec3*>();
  one = 0x0;
  two = 0x0;
  penDepth = 0.0;
  hasCollided = false;
}

Manifold::Manifold(PhysicsObject* a,PhysicsObject* b) {
  contactPoints = new Array<dvec3*>();
  contactNormals = new Array<dvec3*>();
  one = a;
  two = b;
  penDepth = 0.0;
  hasCollided = false;
}

Manifold::~Manifold() {
	while(contactPoints->getSize()) delete contactPoints->removeLast();
  while(contactNormals->getSize()) delete contactNormals->removeLast();
  delete contactPoints;
  delete contactNormals;
}

void Manifold::clear() {
  while(contactPoints->getSize()) delete contactPoints->removeLast();
  while(contactNormals->getSize()) delete contactNormals->removeLast();
  one = 0x0;
  two = 0x0;
  hasCollided = false;
}

void Manifold::process() {
  // to be implemented
}

Array<dvec3*>* Manifold::getContactPoints() { return contactPoints; }
Array<dvec3*>* Manifold::getContactNormals() { return contactNormals; }
PhysicsObject* Manifold::getOne() { return one; }
PhysicsObject* Manifold::getTwo() { return two; }
percision Manifold::getPenDepth() { return penDepth; }
bool Manifold::getHasCollided() { return hasCollided; }

void Manifold::setContactPoints(Array<dvec3*>* param) { contactPoints = param; }
void Manifold::setContactNormals(Array<dvec3*>* param) { contactNormals = param; }
void Manifold::setOne(PhysicsObject* param) { one = param; }
void Manifold::setTwo(PhysicsObject* param) { two = param; }
void Manifold::setPenDepth(percision param) { penDepth = param; }
void Manifold::setHasCollided(bool param) { hasCollided = param; }
