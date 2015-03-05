#include "SDL.h"
#include "mruby.h"

static mrb_value
mrb_sdl_create_window(mrb_state *mrb, mrb_value self)
{
  char* window_title;
  mrb_int a, b, width, height, show;
  mrb_get_args(mrb, "ziiiii", &window_title, &a, &b, &width, &height, &show);
  SDL_Window* window = SDL_CreateWindow(window_title, a, b, width, height, show);
  return mrb_fixnum_value(SDL_GetWindowID(window));
}

void
mrb_sdl_videos_init(mrb_state* mrb) {
  struct RClass *sdl_module = mrb_module_get(mrb, "SDL");
  mrb_define_class_method(mrb, sdl_module, "create_window", mrb_sdl_create_window, MRB_ARGS_REQ(6));

  mrb_define_const(mrb, sdl_module, "WINDOWPOS_UNDEFINED", mrb_fixnum_value(SDL_WINDOWPOS_UNDEFINED));
  mrb_define_const(mrb, sdl_module, "WINDOW_SHOWN", mrb_fixnum_value(SDL_WINDOW_SHOWN));
}

void
mrb_sdl_videos_final(mrb_state* mrb)
{
}
