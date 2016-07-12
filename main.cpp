#include <iostream>

using namespace std;

string getStringInput();
ExperimentRunMode getRunMode(bool display,char* mode);
int getIntInput();
double getPercisionInput();
bool getBoolInput();

int main(int argc,char* argv[]) {
  cout << "Hello Lord, Firal" << endl;
  // initilaize globals
  // information needed for experiment to begin
  string experimentName;
  ExperimentRunMode runMode;
  percision timeStep;
  int frames = -1;
  int threads = 1;
  // parse in command line instructions
  if(argc > 1) {
    for(int i=1;i<argc;i++) {
      if(strcmp(argv[i],"-n")) experimentName = getStringInput();
      else if(strcmp(argv[i],"-e")) runMode = getRunMode(false,argv[++i]);
      else if(strcmp(argv[i],"-ts")) timeStep = getPercisionInput();
      else if(strcmp(argv[i],"-frms")) { frames = getIntInput(); }
      else if(strcmp(argv[i],"-mc")) { /* set size of manifold cache */ }
      else if(strcmp(argv[i],"-psc")) { /* set size of physics state cache */ }
      else if(strcmp(argv[i],"-gTime")) { /* global performance measuring */ }
      else if(strcmp(argv[i],"-lTime")) { /* local performance measuring */ }
      else if(strcmp(argv[i],"-log")) { /* log performance */ }
      else if(strcmp(argv[i],"-thds")) { /* get number of threads */ }
      else if(strcmp(argv[i],"-file")) { /* read experiment from batch file */ }
      else if(strcmp(argv[i],"-bspd")) { /* depth of bsp tree */ }
      else if(strcmp(argv[i],"-nocache")) { /* turn off caches */ }
    }
  } else {
    // handle manual input
  }
  // set up experiment
  // set up logging
  // deviate initial work
  // start experiment
  return 0;
}

string getStringInput() {
  string str;
  // to be implemented
  return str;
}

ExperimentRunMode getRunMode(bool display,char* mode) {
  // to be implemented
  return EX_RUN_VISUAL;
}

int getIntInput() {
  // to be implemented
  return -1;
}

double getPercisionInput() {
  // to be implemented
  return 0.0;
}

bool getBoolInput() {
  // to be implemented
  return false;
}
