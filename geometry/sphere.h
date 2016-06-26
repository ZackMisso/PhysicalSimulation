#pragma once

#include "geom.h"

class Sphere : public Geom {
public:
  Sphere();
  Sphere(Transform* t);
  virtual void calculateBounds();
};
