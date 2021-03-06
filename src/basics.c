#include "SDL.h"
#include "mruby.h"

/*
 * Initialization and Shutdown Functions
 * http://wiki.libsdl.org/CategoryInit
 */

/*
 * int SDL_Init(Uint32 flags)
 * http://wiki.libsdl.org/SDL_Init?highlight=%28\bCategoryInit\b%29|%28CategoryEnum%29|%28CategoryStruct%29
 */
static mrb_value
mrb_sdl_init(mrb_state *mrb, mrb_value self)
{
  mrb_int flags;
  mrb_get_args(mrb, "i", &flags);
  return mrb_bool_value(SDL_Init(flags) == 0);
}

void
mrb_sdl_basics_init(mrb_state* mrb) {
  struct RClass *sdl_module = mrb_module_get(mrb, "SDL");
  mrb_define_class_method(mrb, sdl_module, "init", mrb_sdl_init, MRB_ARGS_REQ(1));

  mrb_define_const(mrb, sdl_module, "INIT_TIMER",           mrb_fixnum_value(SDL_INIT_TIMER));
  mrb_define_const(mrb, sdl_module, "INIT_AUDIO",           mrb_fixnum_value(SDL_INIT_AUDIO));
  mrb_define_const(mrb, sdl_module, "INIT_VIDEO",           mrb_fixnum_value(SDL_INIT_VIDEO));
  mrb_define_const(mrb, sdl_module, "INIT_JOYSTICK",        mrb_fixnum_value(SDL_INIT_JOYSTICK));
  mrb_define_const(mrb, sdl_module, "INIT_HAPTIC",          mrb_fixnum_value(SDL_INIT_HAPTIC));
  mrb_define_const(mrb, sdl_module, "INIT_GAMECONTROLLER",  mrb_fixnum_value(SDL_INIT_GAMECONTROLLER));
  mrb_define_const(mrb, sdl_module, "INIT_EVENTS",          mrb_fixnum_value(SDL_INIT_EVENTS));
  mrb_define_const(mrb, sdl_module, "INIT_EVERYTHING",      mrb_fixnum_value(SDL_INIT_EVERYTHING));
  mrb_define_const(mrb, sdl_module, "INIT_NOPARACHUTE",     mrb_fixnum_value(SDL_INIT_NOPARACHUTE));
}

void
mrb_sdl_basics_final(mrb_state* mrb)
{
}
