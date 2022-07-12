DirectFB
========

Supports:

- Hardware YUV overlays
- OpenGL - software only
- 2D/3D accelerations (depends on directfb driver)
- multiple displays
- windows

What you need:

* DirectFB 1.0.1, 1.2.x, 1.3.0
* Kernel-Framebuffer support: required: vesafb, radeonfb .... 
* Mesa 7.0.x	   - optional for OpenGL

The `/etc/directfbrc` file should contain the following lines to make
your joystick work and avoid crashes:

```
disable-module=joystick
disable-module=cle266
disable-module=cyber5k
no-linux-input-grab
```

To disable to use x11 backend when DISPLAY variable is found use

```
export SDL_DIRECTFB_X11_CHECK=0
```

To disable the use of linux input devices, i.e. multimice/multikeyboard support,
use

```
export SDL_DIRECTFB_LINUX_INPUT=0
```

To use hardware accelerated YUV-overlays for YUV-textures, use:

```
export SDL_DIRECTFB_YUV_DIRECT=1
```

This i