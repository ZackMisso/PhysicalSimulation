#include "manifoldCache.h"

ManifoldCache* ManifoldCache::instance = 0x0;

ManifoldCache::ManifoldCache(int num) {
  cleanManifolds = new Array<Manifold*>();
  for(int i=0;i<num;i++) cleanManifolds->add(new Manifold());
}

ManifoldCache::~ManifoldCache() {
  while(cleanManifolds->getSize()) delete cleanManifolds->removeLast();
}

ManifoldCache* ManifoldCache::getInstance() {
  return instance;
}

void ManifoldCache::initialize(int num = 0) {
  if(!instance) instance = new ManifoldCache(num);
}

void ManifoldCache::destroy() {
  if(instance) delete instance;
}

void ManifoldCache::createManifold() {
  for(int i=0;i<10;i++) cleanManifolds->add(new Manifold());
}

void ManifoldCache::deleteManifolds() {
  int num = cleanManifolds->getSize() < 10 ? cleanManifolds->getSize() : 10;
  for(int i=0;i<num;i++) delete cleanManifolds->removeLast();
}

Manifold* ManifoldCache::getManifold() {
  if(!cleanManifolds->getSize()) createManifolds();
  return cleanManifolds->removeLast();
}

void ManifoldCache::returnManifold(Manifold* manifold) {
  manifold->clear();
  cleanManifolds->add(manifold);
}
