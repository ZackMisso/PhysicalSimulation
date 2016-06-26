#include "periSystem.h"

PeriSystem::PeriSystem() {
  pointMasses = new Array<Particle*>();
  springs = new Array<PeriSpring*>();
  pointMassRadius = 0.5;
  pointMassMass = 1.0;
  pointMassHorizon = 1.5;
  springConstant = 1.0;
  springDamp = 1.0;
  springBreak = 1.0;
}

PeriSystem::PeriSystem(Geom* geometry) {
  poinMasses = new Array<Particle*>();
  springs = new Array<PeriSpring*>();
  pointMassRadius = 0.5;
  pointMassMass = 1.0;
  pointMassHorizon = 1.5;
  springConstant = 1.0;
  springDamp = 1.0;
  springBreak = 1.0;
}

PeriSystem::~PeriSystem() {
  while(pointMasses->getSize()) delete pointMasses->removeLast();
  while(springs->getSize()) delete springs->removeLast();
  delete springs;
  delete pointMasses;
}

void PeriSystem::preprocess() {
  // to be implemented
}

void PeriSystem::convertGeomToPoints(Geom* geometry) {
  // to be implemented
}

void PeriSystem::performPhysicsStep(precision dt) {
  // to be implemented
}

Array<Particle*>* PeriSystem::getPointMasses() { return pointMasses; }
Array<PeriSpring*>* PeriSystem::getSprings() { return springs; }
precision PeriSystem::getPointMassRadius() { return pointMassRadius; }
precision PeriSystem::getPointMassMass() { return pointMassMass; }
precision PeriSystem::getPointMassHorizon() { return pointMassHorizon; }
precision PeriSystem::getSpringConstant() { return springConstant; }
precision PeriSystem::getSpringDamp() { return springDamp; }
precision PeriSystem::getSpringBreak() { return springBreak; }

void PeriSystem::setPointMasses(Array<Particle*>* param) { pointMasses = param; }
void PeriSystem::setSprings(Array<PeriSpring*>* param) { springs = param; }
void PeriSystem::setPointMassRadius(percision param) { pointMassRadius = param; }
void PeriSystem::setPointMassMass(percision param) { pointMassMass = param; }
void PeriSystem::setPointMassHorizon(percision param) { pointMassHorizon = param; }
void PeriSystem::setSpringConstant(percision param) { springConstant = param; }
void PeriSystem::setSpringDamp(percision param) { springDamp = param; }
void PeriSystem::setSpringBreak(percision param) { springBreak = param; }
