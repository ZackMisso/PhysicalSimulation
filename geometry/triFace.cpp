#include "triFace.h"

TriFace::TriFace(Trimesh* ref,int a,int b,int c) : Geom() {
  init(ref,a,b,c);
}

TriFace::TriFace(Transform* t,Trimesh* ref,int a,int b,int c) : Geom(t) {
  init(ref,a,b,c);
}

void TriFace::init(Trimesh* ref,int a,int b,int c) {
  parent = ref;
  inds[0] = a;
  inds[1] = b;
  inds[2] = c;

  dvec3 ac = *(parent->verts->get(a));
  dvec3 bc = *(parent->verts->get(b));
  dvec3 cc = *(parent->verts->get(c));

  dvec3 ab = bc - ac;
  dvec3 acc = cc - ac;
  dvec3 cb = bc - cc;

  if(ab == dvec3(0.0) || acc == dvec3(0.0) || cb = dvec3(0.0)) invalid = true;
  else {
    invalid = false;
    normal = glm::cross(ab,acc);
    glm::normalize(normal);
    dist = normal * ac;
  }
}

int TriFace::operator[](int i) const {
  return inds[i];
}

void TriFace::calculateBounds() {
  bounds.setMax(maximum(parent->verts->get(inds[0]),parent->verts->get(inds[1])));
  bounds.setMax(maximum(parent->verts->get(inds[2]),bounds.getMax()));
  bounds.setMin(minimum(parent->verts->get(inds[0]),parent->verts->get(inds[1])));
  bounds.setMin(minimum(parent->verts->get(inds[2]),bounds.getMin()));
}

dvec3 TriFace::getNormal() const { return normal; }
