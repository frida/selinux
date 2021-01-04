project('selinux', 'c',
  version: '3.1',
)

cc = meson.get_compiler('c')

cdata = configuration_data()

stdio_ext_funcs = [
  '__fsetlocking',
  'feof_unlocked',
  'fgets_unlocked',
]
foreach func : stdio_ext_funcs
  cdata.set('HAVE_' + func.to_upper(), cc.has_function(func, prefix: '#include <stdio_ext.h>'))
endforeach

cdata.set('HAVE_FTS_OPEN', cc.has_function('fts_open',
    prefix: '''
        #include <sys/types.h>
        #include <sys/stat.h>
        #include <fts.h>
    ''',
))

cdata.set('HAVE_GETGRNAM_R', cc.has_function('getgrnam_r',
    prefix: '''
        #include <grp.h>
        #include <sys/types.h>
    ''',
))

cdata.set('HAVE_STPCPY', cc.has_function('stpcpy', prefix: '#include <string.h>'))

cdata.set('HAVE_STRVERSCMP', cc.has_function('strverscmp', prefix: '#include <string.h>'))

regex_opt = get_option('regex')
pcre2 = dependency('libpcre2-8', required: regex_opt, disabler: true)
if pcre2.found()
  have_regex = true
  cdata.set('USE_PCRE2', true)
else
  pcre = dependency('libpcre', required: regex_opt, disabler: true)
  have_regex = pcre.found()
endif
cdata.set('HAVE_REGEX', have_regex)

configure_file(
  input: 'config.h.in',
  output: 'config.h',
  configuration: cdata,
)
add_project_arguments('-include', 'config.h', language: 'c')

subdir('libselinux')
subdir('libsepol')
