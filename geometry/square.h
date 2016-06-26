#pragma once

#include "geom.h"

class Square : public Geom {
public:
  Square();
  Square(Transform* t);
  virtual void calculateBounds();
};
