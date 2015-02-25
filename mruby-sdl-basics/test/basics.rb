# Constants sanity check
assert('SDL module have the correct initializer flag: TIMER') do
  SDL::INIT_TIMER == 0x00000001
end

assert('SDL module have the correct initializer flag: AUDIO') do
  SDL::INIT_AUDIO == 0x00000010
end

assert('SDL module have the correct initializer flag: VIDEO') do
  SDL::INIT_VIDEO == 0x00000020
end

assert('SDL module have the correct initializer flag: JOYSTICK') do
  SDL::INIT_JOYSTICK == 0x00000200
end

assert('SDL module have the correct initializer flag: HAPTIC') do
  SDL::INIT_HAPTIC == 0x00001000
end

assert('SDL module have the correct initializer flag: GAMECONTROLLER') do
  SDL::INIT_GAMECONTROLLER == 0x00002000
end

assert('SDL module have the correct initializer flag: EVENTS') do
  SDL::INIT_EVENTS == 0x00004000
end

assert('SDL module have the correct initializer flag: NOPARACHUTE') do
  SDL::INIT_NOPARACHUTE == 0x00100000
end

assert('SDL module have the correct initializer flag: EVERYTHING') do
  SDL::INIT_EVERYTHING == (
    SDL::INIT_TIMER | SDL::INIT_AUDIO | SDL::INIT_VIDEO |
    SDL::INIT_EVENTS | SDL::INIT_JOYSTICK | SDL::INIT_HAPTIC |
    SDL::INIT_GAMECONTROLLER
  )
end
