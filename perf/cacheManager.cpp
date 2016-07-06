#include "cacheManager.h"
#include "physicsStateCache.h"
#include "manifoldCache.h"

void CacheManager::initAllCaches() {
  ManifoldCache::initialize();
  PhysicsStateCache::initialize();
}
