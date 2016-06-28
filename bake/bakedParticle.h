#pragma once

class BakedParticle {
private:
  Array<dvec3>* positions;
public:
  BakedParticle();
  ~BakedParticle();
  void addFramePos(const dvec3 pos);
  // getter methods
  Array<dvec3*>* getPositions();
  // setter methods
  void setPositions(Array<dvec3*>* param);
};
