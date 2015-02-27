# ROADMAP

The objective here is to have a 1-to-1 binding with everything available in SDL2.

For organization purpose, follow the same API division by category that they adopted:

## Basics

### Initialization and Shutdown

C Function        | Is done? | Ruby Way™
------------------| -------- | --------
SDL_Init          | [x]      | SDL.init(flags)
SDL_InitSubSystem | [ ]      |
SDL_Quit          | [ ]      |
SDL_QuitSubSystem | [ ]      |
SDL_SetMainReady  | [ ]      |
SDL_WasInit       | [ ]      |
SDL_WinRTRunApp   | [ ]      |

C Constant              | Is done? | Ruby Way™
------------------------| -------- | --------
SDL_INIT_TIMER          | [x]      | SDL::INIT_TIMER
SDL_INIT_AUDIO          | [x]      | SDL::INIT_AUDIO
SDL_INIT_VIDEO          | [x]      | SDL::INIT_VIDEO
SDL_INIT_JOYSTICK       | [x]      | SDL::INIT_JOYSTICK
SDL_INIT_HAPTIC         | [x]      | SDL::INIT_HAPTIC
SDL_INIT_GAMECONTROLLER | [x]      | SDL::INIT_GAMECONTROLLER
SDL_INIT_EVENTS         | [x]      | SDL::INIT_EVENTS
SDL_INIT_EVERYTHING     | [x]      | SDL::INIT_EVERYTHING
SDL_INIT_NOPARACHUTE    | [x]      | SDL::INIT_NOPARACHUTE

