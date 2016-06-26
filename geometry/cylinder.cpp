#include "cylinder.h"

Cylinder::Cylinder() : Geom() {
  hasTopCap = true;
  hasBottomCap = true;
}

Cylinder::Cylinder(Transform* t) : Geom(t) {
  hasTopCap = true;
  hasBottomCap = true;
}

void Cylinder::calculateBounds() {
  dirty = false;
  bounds.setMin(dvec3(-1.0,-1.0,0.0));
  bounds.setMax(dvec3(1.0,1.0,1.0));
}

bool Cylinder::getHasTopCap() const { return hasTopCap; }
bool Cylinder::getHasBottomCap() const { return hasBottomCap; }

void Cylinder::setHasTopCap(bool param) { hasTopCap = param; }
void Cylinder::setHasBottomCap(bool param) { hasBottomCap = param; }
