#pragma once

#include "geom.h"
#include "../dataStructures/array.h"

class Quadmesh : public Geom {
  friend class QuadFace;
private:
  Array<dvec3*>* verts;
  Array<QuadFace*>* faces;
  Array<dvec3*>* normals;
public:
  Quadmesh();
  Quadmesh(Transform* t);
  ~Quadmesh();
  virtual void calculateBounds();
  void addVertex(const dvec3& vert);
  void addNormal(const dvec3& normal);
  void addFace(int one,int two,int three,int four);
  void calculateNormals();
};
