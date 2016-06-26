#pragma once

class Geom {
protected:
  Transform* transform;
  BBox bounds;
  bool dirty; // if bounds should be updated
public:
  Geom();
  Geom(Transform* t);
  ~Geom();
  virtual void calculateBounds() = 0; // calculate local bounds
  BBox getBounds();
  BBox getLocalBounds();
  void setDirty(bool param);
  void setTransform(Transform* param);
};
