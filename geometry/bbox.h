#pragma once

#include "../globalInclude.h"

class BBox {
private:
  dvec3 min;
  dvec3 max;
  percision volume;
  percision area;
  bool empty;
  bool dirty;

  void calculateArea();
  void calculateVolume();
public:
  BBox();
  BBox(dvec3 one,dvec3 two);
  void setMin(dvec3 param);
  void setMax(dvec3 param);
  void setMin(int i,double param);
  void setMax(int i,double param);
  void makeEmpty();
  void operator=(const BBox& other);
  void merge(const BBox& other);
  // getter methods
  double getArea();
  double getVolume();
  dvec3 getMin() const;
  dvec3 getMax() const;
  bool isEmpty() const;
};
