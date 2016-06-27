#include "bbox.h"

BBox::BBox() {
  min = dvec3(0.0);
  max = dvec3(0.0);
  volume = 0.0;
  area = 0.0;
  empty = true;
  dirty = false;
}

BBox::BBox(dvec3 one,dvec3 two) {
  min = one;
  max = two;
  volume = 0.0;
  area = 0.0;
  empty = false;
  dirty = true;
}

void BBox::setMin(dvec3 param) {
  min = param;
  dirty = true;
}

void BBox::setMax(dvec3 param) {
  max = param;
  dirty = true;
}

void BBox::makeEmpty() {
  empty = true;
}

void BBox::operator=(const BBox& other) {
  min = other.min;
  max = other.max;
  empty = other.empty;
  dirty = true;
}

void BBox::merge(BBox& other) {
  max = maximum(max,other.max);
  min = minimum(min,other.min);
}

void BBox::calculateArea() {
  // to be implemented
}

void BBox::calculateVolume() {
  // to be implemented
}

double BBox::getArea() {
  if(dirty) {
    calculateArea();
    calculateVolume();
    dirty = false;
  }
  return area;
}

double BBox::getVolume() {
  if(dirty) {
    calculateArea();
    calculateVolume();
    dirty = false;
  }
  return volume;
}

dvec3 BBox::getMin() const { return min; }
dvec3 BBox::getMax() const { return max; }
bool BBox::isEmpty() const { return empty; }
