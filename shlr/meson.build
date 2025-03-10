# handle capstone dependency
capstone_dep = dependency('capstone', version: '>=3.0.4', required: false)
if not capstone_dep.found() or not get_option('use_sys_capstone')
  if get_option('capstone_in_builddir')
    capstone_path = join_paths(meson.current_build_dir(), 'capstone')
  else
    capstone_path = 'capstone'
  endif

  capstone_version = get_option('use_capstone_version')
  message('Use bundled capstone: ' + capstone_version)

  res = run_command(py3_exe, '-c', '__import__("sys").exit(__import__("os").path.exists("@0@"))'.format(capstone_path))
  if res.returncode() == 0
    if not git_exe.found()
      error('Cannot load capstone library. Either provide capstone in ./shlr/capstone or install git, so it can be downloaded')
    endif

    patches_files = []
    # NOTE: when you update CS_TIP or CS_BRA, also update them in shlr/Makefile
    if capstone_version == 'v5'
      CS_TIP = '68cc30db6693073b27cb071fcdcb2a905667fced'
      CS_BRA = 'next'
      patches_files = [
        'fix-x86-16.patch',
        'mmm.patch'
      ]
    elif capstone_version == 'v3'
      CS_TIP = '61bf71c771680033651f16cff832446e421847b1'
      CS_BRA = 'v3'
      patches_files = [
        'capstone-include.patch'
      ]
    elif capstone_version == 'v4'
      CS_TIP = 'a7cac8352f7397aa73bb2e2dcc1b6cdb2e1b8461'
      CS_BRA = 'v4'
      patches_files = [
        'capstone-calloc.patch',
        'fix-x86-16.patch',
        'sparc-crash.patch',
        'sstream-null.patch'
      ]
    else
      error('Wrong capstone version selected. Please use one of the supported versions.')
    endif

    capstone_git_user = 'capstone-engine'

    message('Cloning capstone ' + CS_BRA + ' branch, commit ' + CS_TIP + ', into ' + capstone_path)
    git_cmd = 'clone -b @0@ https://github.com/@1@/capstone.git @2@'.format(CS_BRA, capstone_git_user, capstone_path)
    clone_cmd = run_command(git_exe, git_cmd.split())
    if clone_cmd.returncode() != 0
      error('Cannot execute git clone command')
    endif

    reset_cmd_str = '-C @0@ reset --hard @1@'.format(capstone_path, CS_TIP)
    reset_cmd = run_command(git_exe, reset_cmd_str.split())
    if reset_cmd.returncode() != 0
      error('Cannot execute git reset command')
    endif

    message('Patching capstone with radare\'s patches')
    foreach file : patches_files
      patch_path = join_paths(meson.current_source_dir(), 'capstone-patches', capstone_version, file)
      patch_cmd_str = '-C @0@ apply -p1 @1@'.format(capstone_path, patch_path)
      patch_cmd = run_command(git_exe, patch_cmd_str.split())
      if patch_cmd.returncode() != 0
        warning('Cannot apply patch ' + file)
      endif
    endforeach
  endif

  rel_cs_files = [
    'arch/AArch64/AArch64BaseInfo.c',
    'arch/AArch64/AArch64Disassembler.c',
    'arch/AArch64/AArch64InstPrinter.c',
    'arch/AArch64/AArch64Mapping.c',
    'arch/AArch64/AArch64Module.c',
    'arch/ARM/ARMDisassembler.c',
    'arch/ARM/ARMInstPrinter.c',
    'arch/ARM/ARMMapping.c',
    'arch/ARM/ARMModule.c',
    'arch/Mips/MipsDisassembler.c',
    'arch/Mips/MipsInstPrinter.c',
    'arch/Mips/MipsMapping.c',
    'arch/Mips/MipsModule.c',
    'arch/PowerPC/PPCDisassembler.c',
    'arch/PowerPC/PPCInstPrinter.c',
    'arch/PowerPC/PPCMapping.c',
    'arch/PowerPC/PPCModule.c',
    'arch/Sparc/SparcDisassembler.c',
    'arch/Sparc/SparcInstPrinter.c',
    'arch/Sparc/SparcMapping.c',
    'arch/Sparc/SparcModule.c',
    'arch/SystemZ/SystemZDisassembler.c',
    'arch/SystemZ/SystemZInstPrinter.c',
    'arch/SystemZ/SystemZMapping.c',
    'arch/SystemZ/SystemZMCTargetDesc.c',
    'arch/SystemZ/SystemZModule.c',
    'arch/X86/X86ATTInstPrinter.c',
    'arch/X86/X86Disassembler.c',
    'arch/X86/X86DisassemblerDecoder.c',
    'arch/X86/X86IntelInstPrinter.c',
    'arch/X86/X86Mapping.c',
    'arch/X86/X86Module.c',
    'arch/XCore/XCoreDisassembler.c',
    'arch/XCore/XCoreInstPrinter.c',
    'arch/XCore/XCoreMapping.c',
    'arch/XCore/XCoreModule.c',
    'cs.c',
    'MCInst.c',
    'MCInstrDesc.c',
    'MCRegisterInfo.c',
    'SStream.c',
    'utils.c',
  ]
  rel_cs4_files = [
    'arch/M680X/M680XDisassembler.c',
    'arch/M680X/M680XInstPrinter.c',
    'arch/M680X/M680XModule.c',
    'arch/M68K/M68KDisassembler.c',
    'arch/M68K/M68KInstPrinter.c',
    'arch/M68K/M68KModule.c',
    'arch/TMS320C64x/TMS320C64xDisassembler.c',
    'arch/TMS320C64x/TMS320C64xInstPrinter.c',
    'arch/TMS320C64x/TMS320C64xMapping.c',
    'arch/TMS320C64x/TMS320C64xModule.c',
  ]
  rel_cs5_files = [
    'arch/BPF/BPFDisassembler.c',
    'arch/BPF/BPFInstPrinter.c',
    'arch/BPF/BPFMapping.c',
    'arch/BPF/BPFModule.c',
    'arch/EVM/EVMDisassembler.c',
    'arch/EVM/EVMInstPrinter.c',
    'arch/EVM/EVMMapping.c',
    'arch/EVM/EVMModule.c',
    'arch/X86/X86InstPrinterCommon.c',
    'arch/MOS65XX/MOS65XXDisassembler.c',
    'arch/MOS65XX/MOS65XXModule.c',
    'arch/RISCV/RISCVMapping.c',
    'arch/RISCV/RISCVModule.c',
    'arch/RISCV/RISCVInstPrinter.c',
    'arch/RISCV/RISCVDisassembler.c'
  ]

  user_plugins = get_option('plugins').split(',')
  no_user_plugins = get_option('plugins') == ''
  cs_c_args = [
    '-DCAPSTONE_USE_SYS_DYN_MEM',
    '-DCAPSTONE_DIET_NO',
  ]
  if user_plugins.contains('x86') or no_user_plugins
    cs_c_args += [
      '-DCAPSTONE_HAS_X86',
      '-DCAPSTONE_X86_ATT_DISABLE_NO',
      '-DCAPSTONE_X86_REDUCE_NO',
    ]
  endif
  if user_plugins.contains('arm') or no_user_plugins
    cs_c_args += [
      '-DCAPSTONE_HAS_ARM',
      '-DCAPSTONE_HAS_ARM64',
    ]
  endif
  if user_plugins.contains('sparc') or no_user_plugins
    cs_c_args += [
      '-DCAPSTONE_HAS_SPARC',
    ]
  endif
  if user_plugins.contains('mips') or no_user_plugins
    cs_c_args += [
      '-DCAPSTONE_HAS_MIPS',
    ]
  endif
  if no_user_plugins
    cs_c_args += [
      '-DCAPSTONE_HAS_M68K',
      '-DCAPSTONE_HAS_M680X',
      '-DCAPSTONE_HAS_POWERPC',
      '-DCAPSTONE_HAS_SPARC',
      '-DCAPSTONE_HAS_SYSZ',
      '-DCAPSTONE_HAS_XCORE',
      '-DCAPSTONE_HAS_TMS320C64X',
    ]
  endif

  cs_files = []
  foreach rel_cs_file : rel_cs_files
    cs_files += [join_paths(capstone_path, rel_cs_file)]
  endforeach
  if capstone_version == 'v4' or capstone_version == 'v5'
    foreach rel_cs_file : rel_cs4_files
      cs_files += [join_paths(capstone_path, rel_cs_file)]
    endforeach
  endif
  if capstone_version == 'v5'
    foreach rel_cs_file : rel_cs5_files
      cs_files += [join_paths(capstone_path, rel_cs_file)]
    endforeach
    cs_c_args += [
      '-DCAPSTONE_HAS_BPF',
      '-DCAPSTONE_HAS_EVM',
      '-DCAPSTONE_HAS_MOS65XX',
      '-DCAPSTONE_HAS_RISCV',
    ]
  endif

  capstone_includes = [platform_inc, include_directories(join_paths('capstone','include'))]

  libr2capstone = static_library('r2capstone', cs_files,
    c_args: cs_c_args,
    include_directories: capstone_includes,
    implicit_include_directories: false
  )

  capstone_dep = declare_dependency(
    link_with: libr2capstone,
    include_directories: capstone_includes
  )
else
  message('Use system-provided capstone library')
endif

# handle bochs dependency
bochs_files = [
  join_paths('bochs','src','libbochs.c')
]

bochs_inc = [platform_inc, include_directories(join_paths('bochs','include'))]

libr2bochs = static_library('r2bochs', bochs_files,
  dependencies: [r_util_dep],
  include_directories: bochs_inc,
  implicit_include_directories: false
)

bochs_dep = declare_dependency(
  link_with: libr2bochs,
  include_directories: bochs_inc
)

if get_option('blob')
libr2bochs_static = static_library('r2bochs_static', bochs_files,
  dependencies: [r_util_static_dep],
  include_directories: bochs_inc,
  implicit_include_directories: false
)
bochs_static_dep = declare_dependency(
  link_with: libr2bochs_static,
  include_directories: bochs_inc
)
endif


# handle java dependency
java_files = [
  'java/class.c',
  'java/code.c',
  'java/ops.c',
  #'java/main.c',
]

java_inc = [platform_inc, include_directories('java')]

libr2java = static_library('r2java', java_files,
  dependencies: [r_util_dep],
  include_directories: java_inc,
  implicit_include_directories: false
)

java_dep = declare_dependency(
  link_with: libr2java,
  include_directories: java_inc
)

if get_option('blob')
libr2java_static = static_library('r2java_static', java_files,
  dependencies: [r_util_static_dep],
  include_directories: java_inc,
  implicit_include_directories: false
)

java_static_dep = declare_dependency(
  link_with: libr2java_static,
  include_directories: java_inc
)
endif

# handle qnx dependency
qnx_files = [
  'qnx/src/core.c',
  'qnx/src/libqnxr.c',
  'qnx/src/packet.c',
  'qnx/src/sigutil.c',
  'qnx/src/utils.c',
]

qnx_inc = [platform_inc, include_directories('qnx/include')]

libr2qnx = static_library('r2qnx', qnx_files,
  dependencies: [r_socket_dep],
  include_directories: qnx_inc,
  implicit_include_directories: false
)

qnx_dep = declare_dependency(
  link_with: libr2qnx,
  include_directories: qnx_inc
)

if get_option('blob')
libr2qnx_static = static_library('r2qnx_static', qnx_files,
  dependencies: [r_socket_static_dep],
  include_directories: qnx_inc,
  implicit_include_directories: false
)

qnx_static_dep = declare_dependency(
  link_with: libr2qnx_static,
  include_directories: qnx_inc
)
endif


# handle grub dependency
grub_files = [
  #'grub/fs/affs.c',
  #'grub/fs/afs.c',
  #'grub/fs/afs_be.c',
  #'grub/fs/befs.c',
  #'grub/fs/befs_be.c',
  #'grub/fs/btrfs.c',
  'grub/fs/cpio.c',
  'grub/fs/ext2.c',
  'grub/fs/fat.c',
  'grub/fs/fb.c',
  'grub/fs/fshelp.c',
  'grub/fs/hfs.c',
  'grub/fs/hfsplus.c',
  'grub/fs/iso9660.c',
  'grub/fs/jfs.c',
  'grub/fs/minix.c',
  #'grub/fs/minix2.c',
  #'grub/fs/nilfs2.c',
  'grub/fs/ntfs.c',
  'grub/fs/ntfscomp.c',
  'grub/fs/reiserfs.c',
  'grub/fs/sfs.c',
  'grub/fs/tar.c',
  'grub/fs/udf.c',
  'grub/fs/ufs.c',
  'grub/fs/ufs2.c',
  'grub/fs/xfs.c',
  'grub/grubfs.c',
  'grub/kern/device.c',
  'grub/kern/disk.c',
  'grub/kern/env.c',
  'grub/kern/err.c',
  'grub/kern/file.c',
  'grub/kern/fs.c',
  'grub/kern/list.c',
  'grub/kern/misc.c',
  'grub/kern/mm.c',
  'grub/kern/partition.c',
  'grub/kern/term.c',
  'grub/kern/time.c',
  #'grub/main.c',
  #'grub/partmap/acorn.c',
  'grub/partmap/amiga.c',
  'grub/partmap/apple.c',
  'grub/partmap/bsdlabel.c',
  'grub/partmap/gpt.c',
  'grub/partmap/msdos.c',
  'grub/partmap/sun.c',
  'grub/partmap/sunpc.c',
]

grub_inc = [platform_inc, include_directories('grub', 'grub/include')]

libr2grub = static_library('r2grub', grub_files,
  dependencies: [r_util_dep],
  include_directories: grub_inc,
  implicit_include_directories: false
)

grub_dep = declare_dependency(
  link_with: libr2grub,
  include_directories: grub_inc
)

if get_option('blob')
libr2grub_static = static_library('r2grub_static', grub_files,
  dependencies: [r_util_static_dep],
  include_directories: grub_inc,
  implicit_include_directories: false
)

grub_static_dep = declare_dependency(
  link_with: libr2grub_static,
  include_directories: grub_inc
)
endif

# handle winkd dependency
winkd_files = [
  'winkd/iob_pipe.c',
  'winkd/iob_net.c',
  'winkd/kd.c',
  'winkd/transport.c',
  'winkd/winkd.c',
]

winkd_inc = [platform_inc, include_directories('winkd')]

libr2winkd = static_library('r2winkd', winkd_files,
  dependencies: [r_hash_dep, r_crypto_dep, r_socket_dep, r_util_dep],
  include_directories: winkd_inc,
  implicit_include_directories: false
)

winkd_dep = declare_dependency(
  link_with: libr2winkd,
  include_directories: winkd_inc
)

if get_option('blob')
libr2winkd_static = static_library('r2winkd_static', winkd_files,
  dependencies: [r_hash_static_dep, r_crypto_static_dep, r_socket_static_dep, r_util_static_dep],
  include_directories: winkd_inc,
  implicit_include_directories: false
)

winkd_static_dep = declare_dependency(
  link_with: libr2winkd_static,
  include_directories: winkd_inc
)
endif

# handle ar dependency
ar_files = [
  'ar/ar.c'
]

ar_inc = [platform_inc, include_directories(['ar'])]

libr2ar = static_library('r2ar', ar_files,
  dependencies: [r_util_dep],
  include_directories: ar_inc,
  implicit_include_directories: false
)

ar_dep = declare_dependency(
  link_with: libr2ar,
  include_directories: ar_inc
)

if get_option('blob')
libr2ar_static = static_library('r2ar_static', ar_files,
  dependencies: [r_util_static_dep],
  include_directories: ar_inc,
  implicit_include_directories: false
)

ar_static_dep = declare_dependency(
  link_with: libr2ar_static,
  include_directories: ar_inc
)
endif

# handle mpc dependency
mpc_files = [
  'mpc/mpc.c'
]

mpc_inc = [platform_inc, include_directories(['mpc'])]

libmpc = static_library('r2mpc', mpc_files,
  include_directories: mpc_inc,
  implicit_include_directories: false
)

mpc_dep = declare_dependency(
  link_with: libmpc,
  include_directories: mpc_inc
)

# handle yxml dependency
yxml_files = [
  'yxml/yxml.c'
]

yxml_inc = [platform_inc, include_directories(['yxml'])]

libyxml = static_library('r2yxml', yxml_files,
  include_directories: yxml_inc,
  implicit_include_directories: false
)

yxml_dep = declare_dependency(
  link_with: libyxml,
  include_directories: yxml_inc
)
