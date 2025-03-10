# Overview
- techically a general path tracer

# Output an Image
## PPM
- plain text file
![PPM Example](https://raytracing.github.io/images/fig-1.01-ppm.jpg)

# Chapter 3
P(t) = A + t*B
- P = point
- A = origin
- B = direction
- "time"

`const vec3& origin`
- & reference to original vec3

can init members directly like:
`ray(const vec3& origin, const vec3& direction) : orig(origin), dir(direction) {}`

### Ray Class
stores:
- origin pt
- direction vec
needs:
- `at(t)`: returns pt on ray at t

### "Camera"
general concept: