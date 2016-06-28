#include "particle.h"

Particle::Particle() {
  physicsState = new PhysicsState();
  color = dvec4(0.0);
  age = 0.0;
}

Particle::~Particle() {
  delete physicsState;
}

void Particle::update(percision dt) {
  changePhysicsFunction(dt);
  changeColorFunction(dt);
}

void Particle::changePhysicsFunction(percision dt) {
  // to be extended
}

void Particle::changeColorFunction(percision dt) {
  // to be extended
}

dvec4 Particle::getColor() { return color; }
dvec3 Particle::getPos() { return physicsState->getPos(); }
percision Particle::getAge() { return age; }

void Particle::setColor(dvec4 param) { color = param; }
void Particle::setPos(dvec3 param) { physicsState->setPos(param); }
void Particle::setAge(percision param) { age = param; }
