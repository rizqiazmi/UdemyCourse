Simple DirectMedia Layer 2 for OS/2 & eComStation
================================================================================
SDL port for OS/2, authored by Andrey Vasilkin <digi@os2.snc.ru>, 2016


OpenGL and audio capture not supported by this port.

Additional optional environment variables:

SDL_AUDIO_SHARE
  Values: 0 or 1, default is 0
  Initializes the device as shareable or exclusively acquired.

SDL_VIDEODRIVER
  Values: DIVE or VMAN, default is DIVE
  Use video subsystem: Direct interface video extensions (DIVE) or
  Video Manager (VMAN).

You may significantly increase video output speed with OS4 kernel and patched
files vman.dll and dive.dll or with latest versions of ACPI support and video
driver Panorama.

Latest versions of OS/4 kernel:
  http://gus.biysk.ru/os4/
 (Info: https://www.os2world.com/wiki/index.php/Phoenix_OS/4)

Patched files vman.dll and dive.dll:
  http://gus.biysk.ru/os4/test/pached_dll/PATCHED_DLL.RAR


Compiling:
----------

Open Watcom 1.9 or newer is te