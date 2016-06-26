#pragma once

#include "geom.h"

class Cylinder : public Geom {
private:
  bool hasTopCap;
  bool hasBottomCap;
public:
  Cylinder();
  Cylinder(Transform* t);
  virtual void calculateBounds();
  // getter methods
  bool getHasTopCap() const;
  bool getHasBottomCap() const;
  // setter methods
  void setHasTopCap(bool param);
  void setHasBottomCap(bool param);
};
