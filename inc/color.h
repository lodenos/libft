#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

typedef struct s_hsl t_hsl;
typedef struct s_rgb t_rgb;

struct s_rgb {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t alpha;
};

struct s_hsl {
  float hue;
  float saturation;
  float lightness;
};

t_rgb color_hsl_to_rgb(t_hsl const *hsl);

#endif
