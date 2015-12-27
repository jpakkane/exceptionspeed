project('exception speed test', 'c', 'cpp',
  default_options : ['buildtype=debugoptimized'])

exe = executable('cppspeed', 'cppspeed.cpp', 'cppimpl.cpp')
benchmark('exceptions, not thrown', exe)
