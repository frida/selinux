sources = [
  'android_m_compat.c',
  'assertion.c',
  'avrule_block.c',
  'avtab.c',
  'boolean_record.c',
  'booleans.c',
  'conditional.c',
  'constraint.c',
  'context.c',
  'context_record.c',
  'debug.c',
  'ebitmap.c',
  'expand.c',
  'handle.c',
  'hashtab.c',
  'hierarchy.c',
  'ibendport_record.c',
  'ibendports.c',
  'ibpkey_record.c',
  'ibpkeys.c',
  'iface_record.c',
  'interfaces.c',
  'kernel_to_cil.c',
  'kernel_to_common.c',
  'kernel_to_conf.c',
  'link.c',
  'mls.c',
  'module.c',
  'module_to_cil.c',
  'node_record.c',
  'nodes.c',
  'optimize.c',
  'polcaps.c',
  'policydb.c',
  'policydb_convert.c',
  'policydb_public.c',
  'port_record.c',
  'ports.c',
  'roles.c',
  'services.c',
  'sidtab.c',
  'symtab.c',
  'user_record.c',
  'users.c',
  'util.c',
  'write.c',
]

libsepol = library('sepol', sources,
  include_directories: libsepol_incdir,
  install: true,
)

libsepol_dep = declare_dependency(
  include_directories: libsepol_incdir,
  link_with: libsepol,
)

meson.override_dependency('libsepol', libsepol_dep)

pkg = import('pkgconfig')
pkg.generate(
  name: 'libsepol',
  description: 'SELinux policy library',
  url: 'https://github.com/frida/selinux',
  libraries: [libsepol],
)
