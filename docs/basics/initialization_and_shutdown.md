# Basics

## Initialization and Shutdown

### SDL.init

Initalize the SDL library, should be used before any SDL call.

Use the flags to initalize subsystems.

Returns true if sucessfull, false otherwise.

Code example:
```ruby
# Simple initialization
SDL.init

# Initialize with Audio and Video Subsystem
SDL.init(SDL::INIT_AUDIO | SDL::INIT_VIDEO)
```
