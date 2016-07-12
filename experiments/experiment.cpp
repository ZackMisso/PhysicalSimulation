#include "experiment.h"

Experiment::Experiment() {
  // to be implemented
}

Experiment::Experiment(ExperimentRunMode erm) {
  // to be implemented
}

Experiment::~Experiment() {
  // to be implemented
}

void Experiment::renderInterface() {
  // to be implemented
}

void Experiment::start() {
  // to be implemented
}

void Experiment::runInteractive() {
  // to be implemented
}

void Experiment::runInteractiveBake() {
  // to be implemented
}

void Experiment::runVisual() {
  // to be implemented
}

void Experiment::runVisualBake() {
  // to be implemented
}

void Experiment::runHeadless() {
  // to be implemented
}

void Experiment::runHeadlessBake() {
  // to be implemented
}

void Experiment::runCluster() {
  // to be implemented
}

void Experiment::runClusterBake() {
  // to be implemented
}

void Experiment::setup() { }
void Experiment::setupInterface() { }
void Experiment::cleanup() { }
void Experiment::render() { }
void Experiemnt::physicsStep(percision dt) { }

string Experiment::getName() { return name; }
