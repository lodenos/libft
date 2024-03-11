#include <math.h>
#include "color.h"

t_rgb color_hsl_to_rgb(t_hsl const *hsl) {
  float c = 0;
  float x = 0;
  float m = 0;

  float r = 0;
  float g = 0;
  float b = 0;

  c = (1.f - fabsf(2.f * hsl->lightness - 1.f)) * hsl->saturation;
  x = c * (1.f - fabsf(fmodf(hsl->hue / 60.f, 2.f) - 1.f));
  m = hsl->lightness - c / 2.f;

  if (hsl->hue < 60.f) {          // (c,x,0)
    r = c;
    g = x;
    b = 0.f;
  } else if (hsl->hue < 120.f) {  // (x,c,0)
    r = x;
    g = c;
    b = 0.f;
  } else if (hsl->hue < 180.f) {  // (0,c,x)
    r = 0.f;
    g = c;
    b = x;
  } else if (hsl->hue < 240.f) {  // (0,x,c)
    r = 0.f;
    g = x;
    b = c;
  } else if (hsl->hue < 300.f) {  // (x,0,c)
    r = x;
    g = 0.f;
    b = c;
  } else if (hsl->hue < 360.f) {  // (c,0,x)
    r = c;
    g = 0.f;
    b = x;
  }

  return (t_rgb) {
    .red   = (uint8_t)((r + m) * 255.f),
    .green = (uint8_t)((g + m) * 255.f),
    .blue  = (uint8_t)((b + m) * 255.f)
  };
}
