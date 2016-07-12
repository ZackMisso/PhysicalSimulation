#pragma once

#include "../globalInclude.h"
#include "../physics/physicsWorld.h"
#include "experimentInterface.h"
#include <string>

using namespace std;

enum ExperimentRunMode {
  EX_RUN_INTERACTIVE,      // allows the user to interact with the program
  EX_RUN_INTERACTIVE_BAKE, // <-- probably never going to implement
  EX_RUN_VISUAL,           // runs the visuals with no interactions
  EX_RUN_VISUAL_BAKE,      // runs the visuals, no interactions, and bakes
  EX_RUN_HEADLESS,         // no visuals, no interactions, no bake
  EX_RUN_HEADLESS_BAKE,    // no visuals, no interactions, bake
  EX_RUN_CLUSTER,          // same as HEADLESS but for a computer cluster
  EX_RUN_CLUSTER_BAKE      // same as HEADLESS_BAKE but for a cluster
};

class Experiment {
private:
  ExperimentRunMode mode;
protected:
  ExperimentInterface* interface; // <-- will be an extension of ZGUI once thats done
  PhysicsWorld* physicsWorld;
  BakeSystem* bakeSystem;
  string name;
  percision timeStep;
public:
  Experiment();
  Experiment(ExperimentRunMode erm);
  ~Experiment();
  void renderInterface();
  void start();
  // different run loops - made separatly for performance - ifs being checked every
  //                                          frame are expensive and add up over time.
  void runInteractive();
  void runInteractiveBake();
  void runVisual();
  void runVisualBake();
  void runHeadless();
  void runHeadlessBake();
  void runCluster();
  void runClusterBake();
  // methods to override if needed
  virtual void setup();
  virtual void setupInterface();
  virtual void cleanup();
  virtual void render();
  virtual void physicsStep(percision dt);
  // getter methods
  string getName();
};
