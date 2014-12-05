#ifndef DEMO_TUNNEL_CONFIG_H
#define DEMO_TUNNEL_CONFIG_H

namespace demo {
namespace tunnel {
namespace config {

static constexpr unsigned
  cols = 400,
  rows = 300,
  texture_width = 64,
  texture_height = 64,
  texture_repeats_d = 32,
  texture_repeats_a = 4,
  texture_period_d = texture_repeats_d * texture_height,
  texture_period_a = texture_repeats_a * texture_width;

static constexpr float
  dspeed = 0.7f,
  aspeed = 0.4f,
  pi = 3.1415926f;

}  // namespace config
}  // namespace tunnel
}  // namespace demo

#endif  // DEMO_TUNNEL_CONFIG_H
