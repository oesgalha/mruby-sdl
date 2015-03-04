#include "basics.h"
#include "videos.h"

void
mrb_mruby_sdl_gem_init(mrb_state* mrb) {
  struct RClass *sdl_module = mrb_define_module(mrb, "SDL");
  mrb_sdl_basics_init(mrb);
  mrb_sdl_videos_init(mrb);
}

void
mrb_mruby_sdl_gem_final(mrb_state* mrb) {
  mrb_sdl_basics_final(mrb);
  mrb_sdl_videos_final(mrb);
}
