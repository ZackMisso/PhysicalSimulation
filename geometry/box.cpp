#include "box.h"

Box::Box() : Geom() { }

Box::Box(Transform* t) : Geom(t) { }

void Box::calculateBounds() {
  dirty = false;
  bounds.setMax(dvec3(0.5,0.5,0.5));
  bounds.setMin(dvec3(-0.5,-0.5,-0.5));
  return bounds;
}
