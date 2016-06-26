#include "spring.h"

Spring::Spring(Particle* a,Particle* b) {
  // to be implemented
}

Spring::Spring(Particle* a,Particle* b,precision restL) {
  // to be implemented
}

void Spring::calculatePotential() {
  // to be implemented
}

void Spring::calculateSpringForce() {
  // to be implemented
}

void Spring::calculateDampForce() {
  // to be implemented
}

Particle* Spring::getOne() const { return one; }
Particle* Spring::getTwo() const { return two; }
dvec3 Spring::getCurrentPotential() const { return currentPotential; }
dvec3 Spring::getCurrentForce() const { return currentForce; }
dvec3 Spring::getCurrentDampForce() const { return currentDampForce; }
dvec3 Spring::getCurrentRestPos() const { return currentRestPos; }
precision Spring::getRestLength() const { return restLength; }
precision Spring::getSpringConstant() const { return springConstant; }
precision Spring::getDampConstant() const { return dampConstant; }

void Spring::setOne(Particle* param) { one = param; }
void Spring::setTwo(Particle* param) { two = param; }
void Spring::setRestLength(precision param) { restLength = param; }
void Spring::setSpringConstant(precision param) { springConstant = param; }
void Spring::setDampConstant(precision param) { dampConstant = param; }
