#pragma once

#include "geom.h"
#include "../datStructure/array.h"

class Trimesh : public Geom {
  friend class TriFace;
private:
  Array<dvec3*>* verts;
  Array<TriFace*>* faces;
  Array<dvec3*>* normals;
public:
  Trimesh();
  Trimesh(Transform* t);
  ~Trimesh();
  virtual void calculateBounds();
  void addVertex(const dvec3& vert);
  void addNormal(const dvec3& norm);
  bool addFace(int one,int two,int three);
  void calculateNormals();
};
