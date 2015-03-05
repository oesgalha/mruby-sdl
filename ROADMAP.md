# ROADMAP

The objective here is to have a 1-to-1 binding with everything available in SDL2.

For organization purpose, follow the same API division by category that they adopted:

## Basics

### Initialization and Shutdown

C Function        | Is done? | Ruby Way™
------------------| -------- | --------
SDL_Init          | [x]      | SDL.init
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

## Videos

### Display and Window Management

C Function                  | Is done? | Ruby Way™
----------------------------| -------- | --------
SDL_CreateWindow            | [ ]      |
SDL_CreateWindowAndRenderer | [ ]      |
SDL_CreateWindowFrom        | [ ]      |
SDL_DestroyWindow           | [ ]      |
SDL_DisableScreenSaver      | [ ]      |
SDL_EnableScreenSaver       | [ ]      |
SDL_GL_CreateContext        | [ ]      |
SDL_GL_DeleteContext        | [ ]      |
SDL_GL_ExtensionSupported   | [ ]      |
SDL_GL_GetAttribute         | [ ]      |
SDL_GL_GetCurrentContext    | [ ]      |
SDL_GL_GetCurrentWindow     | [ ]      |
SDL_GL_GetDrawableSize      | [ ]      |
SDL_GL_GetProcAddress       | [ ]      |
SDL_GL_GetSwapInterval      | [ ]      |
SDL_GL_LoadLibrary          | [ ]      |
SDL_GL_MakeCurrent          | [ ]      |
SDL_GL_ResetAttributes      | [ ]      |
SDL_GL_SetAttribute         | [ ]      |
SDL_GL_SetSwapInterval      | [ ]      |
SDL_GL_SwapWindow           | [ ]      |
SDL_GL_UnloadLibrary        | [ ]      |
SDL_GetClosestDisplayMode   | [ ]      |
SDL_GetCurrentDisplayMode   | [ ]      |
SDL_GetCurrentVideoDriver   | [ ]      |
SDL_GetDesktopDisplayMode   | [ ]      |
SDL_GetDisplayBounds        | [ ]      |
SDL_GetDisplayMode          | [ ]      |
SDL_GetDisplayName          | [ ]      |
SDL_GetNumDisplayModes      | [ ]      |
SDL_GetNumVideoDisplays     | [ ]      |
SDL_GetNumVideoDrivers      | [ ]      |
SDL_GetVideoDriver          | [ ]      |
SDL_GetWindowBrightness     | [ ]      |
SDL_GetWindowData           | [ ]      |
SDL_GetWindowDisplayIndex   | [ ]      |
SDL_GetWindowDisplayMode    | [ ]      |
SDL_GetWindowFlags          | [ ]      |
SDL_GetWindowFromID         | [ ]      |
SDL_GetWindowGammaRamp      | [ ]      |
SDL_GetWindowGrab           | [ ]      |
SDL_GetWindowID             | [ ]      |
SDL_GetWindowMaximumSize    | [ ]      |
SDL_GetWindowMinimumSize    | [ ]      |
SDL_GetWindowPixelFormat    | [ ]      |
SDL_GetWindowPosition       | [ ]      |
SDL_GetWindowSize           | [ ]      |
SDL_GetWindowSurface        | [ ]      |
SDL_GetWindowTitle          | [ ]      |
SDL_GetWindowWMInfo         | [ ]      |
SDL_HideWindow              | [ ]      |
SDL_IsScreenSaverEnabled    | [ ]      |
SDL_MaximizeWindow          | [ ]      |
SDL_MinimizeWindow          | [ ]      |
SDL_RaiseWindow             | [ ]      |
SDL_RestoreWindow           | [ ]      |
SDL_SetWindowBordered       | [ ]      |
SDL_SetWindowBrightness     | [ ]      |
SDL_SetWindowData           | [ ]      |
SDL_SetWindowDisplayMode    | [ ]      |
SDL_SetWindowFullscreen     | [ ]      |
SDL_SetWindowGammaRamp      | [ ]      |
SDL_SetWindowGrab           | [ ]      |
SDL_SetWindowHitTest        | [ ]      |
SDL_SetWindowIcon           | [ ]      |
SDL_SetWindowMaximumSize    | [ ]      |
SDL_SetWindowMinimumSize    | [ ]      |
SDL_SetWindowPosition       | [ ]      |
SDL_SetWindowSize           | [ ]      |
SDL_SetWindowTitle          | [ ]      |
SDL_ShowMessageBox          | [ ]      |
SDL_ShowSimpleMessageBox    | [ ]      |
SDL_ShowWindow              | [ ]      |
SDL_UpdateWindowSurface     | [ ]      |
SDL_UpdateWindowSurfaceRects| [ ]      |
SDL_VideoInit               | [ ]      |
SDL_VideoQuit               | [ ]      |

