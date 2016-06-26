#include "square.h"

Square::Square() : Geom() { }

Square::Square(Transfom* t) : Geom(t) { }

void Square::calculateBounds() {
  dirty = false;
  bounds.setMin(-0.5,-0.5,-EPSILON);
  bounds.setMax(0.5,0.5,EPSILON);
}
