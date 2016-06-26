#pragma once

#include "../geometry/bbox.h"

class Transform {
private:
public:
  Transform();
  ~Transform();
  BBox transform(BBox local) const;
};
