project('exception speed test', 'c', 'cpp',
  default_options : ['buildtype=debugoptimized'])

# Implementations are in separate files so that they
# won't get inlined and optimized away.

cppexe = executable('cppspeed', 'cppspeed.cpp', 'cppimpl.cpp')
benchmark('exceptions, not thrown', cppexe)
benchmark('exceptions, thrown', cppexe, args : ['yes'])

cexe = executable('cspeed', 'cspeed.c', 'cimpl.c')
benchmark('error object, not created', cexe)
benchmark('error object, created', cexe, args : ['yes'])

cppmulti = executable('cppmultiple', 'cppmultiple.cpp', 'cppimpl.cpp')
benchmark('5/loop, C++, no throws', cppexe)

cmulti = executable('cmultiple', 'cmultiple.c', 'cimpl.c')
benchmark('5/loop, C, no errors', cexe)
