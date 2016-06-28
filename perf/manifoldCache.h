#pragma once

class ManifoldCache {
private:
  Array<Manifold*>* cleanManifolds;
  static ManifoldCache* instance;

  void createManifold();
  void deleteManifold();
  ManifoldCache(int num);
public:
  ~ManifoldCache();
  // class methods
  static MethodInstance* getInstance();
  static void initialize(int num = 0);
  static void destroy();
  // methods
  Manifold* getManifold();
  void returnManifold(Manifold* manifold);
};
