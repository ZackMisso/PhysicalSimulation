#include "sphere.h"

Sphere::Sphere() : Geom() { }

Sphere::Sphere(Transform* t) : Geom(t) { }

void Sphere::calculateBounds() {
  dirty = false;
  bounds.setMin(dvec3(-1.0,-1.0,-1.0));
  bounds.setMax(dvec3(1.0,1.0,1.0));
}
