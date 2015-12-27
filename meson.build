project('exception speed test', 'c', 'cpp',
  default_options : ['buildtype=debugoptimized'])

cppexe = executable('cppspeed', 'cppspeed.cpp', 'cppimpl.cpp')
benchmark('exceptions, not thrown', cppexe)
benchmark('exceptions, thrown', cppexe, args : ['yes'])

cexe = executable('cspeed', 'cspeed.c', 'cimpl.c')
benchmark('error object, not created', cexe)
benchmark('error object, created', cexe, args : ['yes'])
 