#pragma once

class Voxelizer {
public:
  static Voxelmesh* voxelizeBox(Box* box,percision res);
  static Voxelmesh* voxelizeCylinder(Cylinder* cyl,percision res);
  static Voxelmesh* voxelizeSphere(Sphere* sph,percision res);
  static Voxelmesh* voxelizeTrimesh(Trimesh* mesh,percision res);
  static Voxelmesh* voxelizeQuadmesh(Quadmesh* mesh,percision res);
};
