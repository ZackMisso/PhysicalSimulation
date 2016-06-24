#pragma once

// this class is the base class for all views

#include "../globalInclude.h"
#include "../bake/bakeSystem.h"

class View {
protected:
  precision timeStep;
  precision lengthOfSimulation;
  int currentFrame;
  bool exactTimeStep;
  bool isBaking;
  bool isHeadlessMode;
public:
  View();
  ~View();
  // view loading and unloading
  virtual void initialize();
  virtual void initializeHeadless();
  virtual void deInitialize();
  virtual void deInitializeHeadless();
  // user interaction
  virtual void keyboard(int key,int scancode,int action,int mods);
  virtual void mouseMove(double x,double y);
  virtual void mouseClick(int button,int action,int mods);
  virtual void display();
  virtual void update();
  // baking methods
  virtual BakedSystem* bakeToFrame(int frame);
  virtual BakedSystem* bakeFromFrameToFrame(int start,int end);
};
