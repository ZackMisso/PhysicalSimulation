#include "trimesh.h"

Trimesh::Trimesh() : Geom() {
  verts = new Array<dvec3*>();
  faces = new Array<TriFace*>();
  normals = new Array<dvec3*>();
}

Trimesh::Trimesh(Transform* t) : Geom(t) {
  verts = new Array<dvec3*>();
  faces = new Array<TriFace*>();
  normals = new Array<dvec3*>();
}

Trimesh::~Trimesh() {
  while(verts->getSize()) delete verts->removeLast();
  while(faces->getSize()) delete faces->removeLast();
  while(normals->getSize()) delete normals->removeLast();
  delete verts;
  delete faces;
  delete normals;
}

void Trimesh::calculateBounds() {
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

void Trimesh::addVertex(const dvec3& vert) {
  verts->add(new dvec3(vert));
  dirty = true;
}

void Trimesh::addNormal(const dvec3& norm) {
  normals->add(new dvec3(norm));
}

bool Trimesh::addFace(int one,int two,int three) {
  int siz = verts->getSize();
  if(one >= siz || two >= siz || three >= siz) return false;
  TriFace* face = new TriFace(this,one,two,three);
  faces->add(face);
  return true;
}

void Trimesh::calculateNormals() {
  // to be implemented
}
