#include "quadFace.h"

QuadFace::QuadFace(Quadmesh* ref,int a,int b,int c,int d) : Geom() {
  init(ref,a,b,c,d);
}

QuadFace::QuadFace(Transform* t,Quadmesh* ref,int a,int b,int c,int d) : Geom(t) {
  init(ref,a,b,c,d);
}

void QuadFace::init(Quadmesh* ref,int a,int b,int c,int d) {
  parent = ref;
  inds[0] = a;
  inds[1] = b;
  inds[2] = c;
  inds[3] = d;

  dvec3 a2 = *(parent->verts->get(a));
  dvec3 b2 = *(parent->verts->get(b));
  dvec3 c2 = *(parent->verts->get(c));
  dvec3 d2 = *(parent->verts->get(d));

  dvec3 ab = b2 - a2;
  dvec3 ad = d2 - a2;
  dvec3 cb = b2 - c2;
  dvec3 cd = d2 - c2;

  if(ab == dvec3(0.0) || ad == dvec3(0.0) || cb == dvec3(0.0) || cd == dvec3(0.0)) invalid = true;
  else {
    invalid = false;
    normal = glm::cross(ab,ad);
    glm::normalize(normal);
    dist = normal * ad;
  }
}

int QuadFace::operator[](int i) const {
  return inds[i];
}

void QuadFace::calculateBounds() {
  bounds.setMax(maximum(parent->verts->get(inds[0]),parent->verts->get(inds[1])));
  bounds.setMax(maximum(parent->verts->get(inds[2]),bounds.getMax()));
  bounds.setMax(maximum(parent->verts->get(inds[3]),bounds.getMax()));
  bounds.setMin(minimum(parent->verts->get(inds[0]),parent->verts->get(inds[2])));
  bounds.setMin(minimum(parent->verts->get(inds[2]),bounds.getMin()));
  bounds.setMin(minimum(parent->verts->get(inds[3]),bounds.getMin()));
}

dvec3 QuadFace::getNormal() const { return normal; }
