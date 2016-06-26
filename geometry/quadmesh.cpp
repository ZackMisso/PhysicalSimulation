#include "quadmesh.h"

Quadmesh::Quadmesh() : Geom() {
  verts = new Array<dvec3*>();
  faces = new Array<QuadFace*>();
  normals = new Array<dvec3*>();
}

Quadmesh::Quadmesh(Transform* t) : Geom(t) {
  verts = new Array<dvec3*>();
  faces = new Array<QuadFace*>();
  normals = new Array<dvec3*>();
}

Quadmesh::~Quadmesh() {
  while(verts->getSize()) delete verts->removeLast();
  while(faces->getSize()) delete faces->removeLast();
  while(normals->getSize()) delete normals->removeLast();
  delete verts;
  delete faces;
  delete normals;
}

void Quadmesh::calculateBounds() {
  dirty = false;
  if(!verts->getSize()) bounds = BBox();
  else {
    // this is sort of inefficient
    for(int i=0;i<verts->getSize();i++) {
      bounds.setMax(maximum(bounds.getMax(),verts->get(i)));
      bounds.setMin(minimum(bounds.getMin(),verts->get(i)));
    }
  }
}

void Quadmesh::addVertex(const dvec3& vert) {
  verts->add(new dvec3(vert));
  dirty = true;
}

void Quadmesh::addNormal(const dvec3& norm) {
  normals->add(new dvec3(norm));
}

void Quadmesh::addFace(int one,int two,int three,int four) {
  int siz = verts->getSize();
  if(one >= siz || two >= siz || three >= siz || four >= siz) return false;
  QuadFace* face = new QuadFace(this,one,two,three,four);
  faces->add(face);
  return true;
}

void Quadmesh::calculateNormals() {
  // to be implemented
}
