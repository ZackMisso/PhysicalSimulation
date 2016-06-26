#pragma once

#include "geom.h"
#include "quadmesh.h"

class QuadFace : public Geom {
private:
  Quadmesh* parent;
  dvec3 normal;
  double dist;
  int inds[4];
  bool invalid;
  void init(Quadmesh* ref,int a,int b,int c,int d);
public:
  QuadFace(Quadmesh* ref,int a,int b,int c,int d);
  QuadFace(Transform* t,Quadmesh* ref,int a,int b,int c,int d);
  int operator[](int i) const;
  virtual void calculateBounds();
  // getter methods
  dvec3 getNormal();
};
