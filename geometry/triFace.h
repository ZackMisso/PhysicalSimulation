#pragma once

#include "geom.h"
#include "trimesh.h"

class TriFace : public Geom {
private:
  Trimesh* parent;
  dvec3 normal;
  double dist;
  int inds[3];
  bool invalid;
  void init(Trimesh* ref,int a,int b,int c);
public:
  TriFace(Trimesh* ref,int a,int b,int c);
  TriFace(Transform* t,Trimesh* ref,int a,int b,int c);
  int operator[](int i) const;
  virtual void calculateBounds();
  // getter methods
  dvec3 getNormal() const;
}
