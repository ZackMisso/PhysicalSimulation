#include "geom.h"

Geom::Geom() {
  transform = new Transform();
  bounds = BBox();
  dirty = true;
}

Geom::Geom(Transform* t) {
  transform = t;
  bounds = BBox();
  dirty = true;
}

Geom::~Geom() {
  delete transform;
}

BBox Geom::getBounds() {
  if(dirty) calculateBounds();
  BBox box = transform.transform(bounds);
  return box;
}

BBox Geom::getLocalBounds() {
  if(dirty) calculateBounds();
  return bounds;
}

void Geom::setDirty(bool param) { dirty = param; }
void Geom::setTransform(Transform* param) { transform = param; }
