#include "bakedParticle.h"

BakedParticle::BakedParticle() {
  position = new Array<dvec3>();
}

BakedParticle::~BakedParticle() {
  while(position->getSize()) position->removeLast();
  delete position;
}

void BakedParticle::addFramePos(const dvec3 pos) {
  positions->add(pos);
}

Array<dvec3>* BakedParticle::getPositions() { return positions; }

void BakedParticle::setPositions(Array<dvec3>* param) { position = param; }
