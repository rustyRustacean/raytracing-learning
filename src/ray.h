#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
  public:
    ray() {}

    // note to self, : orig(origin), dir(direction) is more efficient bc it inits directly rather than creating --> assigning 
    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    // ray::origin() and ray::direction() both return immutable refs
    const point3& origin() const  { return orig; }
    const vec3& direction() const { return dir; }

    point3 at(double t) const {
        return orig + t*dir;
    }

  private:
    point3 orig;
    vec3 dir;
};

#endif