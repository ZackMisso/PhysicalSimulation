#pragma once

#include "geom.h"

class Box : public Geom {
public:
  Box();
  Box(Transform* t);
  virtual void calculateBounds();
};
