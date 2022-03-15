/*
 * sfsysnr.h --- SFLib syscall numbers for OpenBSD/i386
 * see https://www.secdev.org/projects/shellforge.html for more informations
 *
 * Copyright (C) 2004  Philippe Biondi <phil@secdev.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */


/*
 * Automatically generated by gensflib.py
 * Fri Nov 25 15:52:34 2011
 */

#ifndef SFSYSNR_H
#define SFSYSNR_H


/* $Id$ */

/*
 * Modified from /usr/include/sys/syscall.h
 * created from	OpenBSD: syscalls.master,v 1.50 2002/07/06 19:14:20 nordin Exp
 */


/* syscall: "syscall" ret: "int" args: "int" "..." */
#define	__NR_syscall	0

/* syscall: "exit" ret: "void" args: "int" */
#define	__NR_exit	1

/* syscall: "fork" ret: "int" args: */
#define	__NR_fork	2

/* syscall: "read" ret: "ssize_t" args: "int" "void *" "size_t" */
#define	__NR_read	3

/* syscall: "write" ret: "ssize_t" args: "int" "const void *" "size_t" */
#define	__NR_write	4

/* syscall: "open" ret: "int" args: "const char *" "int" "..." */
#define	__NR_open	5

/* syscall: "close" ret: "int" args: "int" */
#define	__NR_close	6

/* syscall: "wait4" ret: "int" args: "int" "int *" "int" "struct rusage *" */
#define	__NR_wait4	7

				/* 8 is compat_43 ocreat */

/* syscall: "link" ret: "int" args: "const char *" "const char *" */
#define	__NR_link	9

/* syscall: "unlink" ret: "int" args: "const char *" */
#define	__NR_unlink	10

				/* 11 is obsolete execv */
/* syscall: "chdir" ret: "int" args: "const char *" */
#define	__NR_chdir	12

/* syscall: "fchdir" ret: "int" args: "int" */
#define	__NR_fchdir	13

/* syscall: "mknod" ret: "int" args: "const char *" "int" "dev_t" */
#define	__NR_mknod	14

/* syscall: "chmod" ret: "int" args: "const char *" "int" */
#define	__NR_chmod	15

/* syscall: "chown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	__NR_chown	16

/* syscall: "break" ret: "int" args: "char *" */
#define	__NR_break	17

				/* 18 is compat_25 ogetfsstat */

				/* 19 is compat_43 olseek */

/* syscall: "getpid" ret: "pid_t" args: */
#define	__NR_getpid	20

/* syscall: "mount" ret: "int" args: "const char *" "const char *" "int" "void *" */
#define	__NR_mount	21

/* syscall: "unmount" ret: "int" args: "const char *" "int" */
#define	__NR_unmount	22

/* syscall: "setuid" ret: "int" args: "uid_t" */
#define	__NR_setuid	23

/* syscall: "getuid" ret: "uid_t" args: */
#define	__NR_getuid	24

/* syscall: "geteuid" ret: "uid_t" args: */
#define	__NR_geteuid	25

/* syscall: "ptrace" ret: "int" args: "int" "pid_t" "caddr_t" "int" */
#define	__NR_ptrace	26

/* syscall: "recvmsg" ret: "ssize_t" args: "int" "struct msghdr *" "int" */
#define	__NR_recvmsg	27

/* syscall: "sendmsg" ret: "ssize_t" args: "int" "const struct msghdr *" "int" */
#define	__NR_sendmsg	28

/* syscall: "recvfrom" ret: "ssize_t" args: "int" "void *" "size_t" "int" "struct sockaddr *" "socklen_t *" */
#define	__NR_recvfrom	29

/* syscall: "accept" ret: "int" args: "int" "struct sockaddr *" "socklen_t *" */
#define	__NR_accept	30

/* syscall: "getpeername" ret: "int" args: "int" "struct sockaddr *" "int *" */
#define	__NR_getpeername	31

/* syscall: "getsockname" ret: "int" args: "int" "struct sockaddr *" "socklen_t *" */
#define	__NR_getsockname	32

/* syscall: "access" ret: "int" args: "const char *" "int" */
#define	__NR_access	33

/* syscall: "chflags" ret: "int" args: "const char *" "u_int" */
#define	__NR_chflags	34

/* syscall: "fchflags" ret: "int" args: "int" "u_int" */
#define	__NR_fchflags	35

/* syscall: "sync" ret: "void" args: */
#define	__NR_sync	36

/* syscall: "kill" ret: "int" args: "int" "int" */
#define	__NR_kill	37

				/* 38 is compat_43 ostat */

/* syscall: "getppid" ret: "pid_t" args: */
#define	__NR_getppid	39

				/* 40 is compat_43 olstat */

/* syscall: "dup" ret: "int" args: "int" */
#define	__NR_dup	41

/* syscall: "opipe" ret: "int" args: */
#define	__NR_opipe	42

/* syscall: "getegid" ret: "gid_t" args: */
#define	__NR_getegid	43

/* syscall: "profil" ret: "int" args: "caddr_t" "size_t" "u_long" "u_int" */
#define	__NR_profil	44

/* syscall: "ktrace" ret: "int" args: "const char *" "int" "int" "pid_t" */
#define	__NR_ktrace	45

/* syscall: "sigaction" ret: "int" args: "int" "const struct sigaction *" "struct sigaction *" */
#define	__NR_sigaction	46

/* syscall: "getgid" ret: "gid_t" args: */
#define	__NR_getgid	47

/* syscall: "sigprocmask" ret: "int" args: "int" "sigset_t" */
#define	__NR_sigprocmask	48

/* syscall: "getlogin" ret: "int" args: "char *" "u_int" */
#define	__NR_getlogin	49

/* syscall: "setlogin" ret: "int" args: "const char *" */
#define	__NR_setlogin	50

/* syscall: "acct" ret: "int" args: "const char *" */
#define	__NR_acct	51

/* syscall: "sigpending" ret: "int" args: */
#define	__NR_sigpending	52

/* syscall: "sigaltstack" ret: "int" args: "const struct sigaltstack *" "struct sigaltstack *" */
#define	__NR_sigaltstack	53

/* syscall: "ioctl" ret: "int" args: "int" "u_long" "..." */
#define	__NR_ioctl	54

/* syscall: "reboot" ret: "int" args: "int" */
#define	__NR_reboot	55

/* syscall: "revoke" ret: "int" args: "const char *" */
#define	__NR_revoke	56

/* syscall: "symlink" ret: "int" args: "const char *" "const char *" */
#define	__NR_symlink	57

/* syscall: "readlink" ret: "int" args: "const char *" "char *" "size_t" */
#define	__NR_readlink	58

/* syscall: "execve" ret: "int" args: "const char *" "char *const *" "char *const *" */
#define	__NR_execve	59

/* syscall: "umask" ret: "int" args: "int" */
#define	__NR_umask	60

/* syscall: "chroot" ret: "int" args: "const char *" */
#define	__NR_chroot	61

				/* 62 is compat_43 ofstat */

				/* 63 is compat_43 ogetkerninfo */

				/* 64 is compat_43 ogetpagesize */

/* syscall: "omsync" ret: "int" args: "caddr_t" "size_t" */
#define	__NR_omsync	65

/* syscall: "vfork" ret: "int" args: */
#define	__NR_vfork	66

				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
/* syscall: "sbrk" ret: "int" args: "int" */
#define	__NR_sbrk	69

/* syscall: "sstk" ret: "int" args: "int" */
#define	__NR_sstk	70

				/* 71 is compat_43 ommap */

/* syscall: "vadvise" ret: "int" args: "int" */
#define	__NR_vadvise	72

/* syscall: "munmap" ret: "int" args: "void *" "size_t" */
#define	__NR_munmap	73

/* syscall: "mprotect" ret: "int" args: "void *" "size_t" "int" */
#define	__NR_mprotect	74

/* syscall: "madvise" ret: "int" args: "void *" "size_t" "int" */
#define	__NR_madvise	75

				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
/* syscall: "mincore" ret: "int" args: "void *" "size_t" "char *" */
#define	__NR_mincore	78

/* syscall: "getgroups" ret: "int" args: "int" "gid_t *" */
#define	__NR_getgroups	79

/* syscall: "setgroups" ret: "int" args: "int" "const gid_t *" */
#define	__NR_setgroups	80

/* syscall: "getpgrp" ret: "int" args: */
#define	__NR_getpgrp	81

/* syscall: "setpgid" ret: "int" args: "pid_t" "int" */
#define	__NR_setpgid	82

/* syscall: "setitimer" ret: "int" args: "int" "const struct itimerval *" "struct itimerval *" */
#define	__NR_setitimer	83

				/* 84 is compat_43 owait */

/* syscall: "swapon" ret: "int" args: "const char *" */
#define	__NR_swapon	85

/* syscall: "getitimer" ret: "int" args: "int" "struct itimerval *" */
#define	__NR_getitimer	86

				/* 87 is compat_43 ogethostname */

				/* 88 is compat_43 osethostname */

				/* 89 is compat_43 ogetdtablesize */

/* syscall: "dup2" ret: "int" args: "int" "int" */
#define	__NR_dup2	90

/* syscall: "fcntl" ret: "int" args: "int" "int" "..." */
#define	__NR_fcntl	92

/* syscall: "select" ret: "int" args: "int" "fd_set *" "fd_set *" "fd_set *" "struct timeval *" */
#define	__NR_select	93

/* syscall: "fsync" ret: "int" args: "int" */
#define	__NR_fsync	95

/* syscall: "setpriority" ret: "int" args: "int" "int" "int" */
#define	__NR_setpriority	96

/* syscall: "socket" ret: "int" args: "int" "int" "int" */
#define	__NR_socket	97

/* syscall: "connect" ret: "int" args: "int" "const struct sockaddr *" "socklen_t" */
#define	__NR_connect	98

				/* 99 is compat_43 oaccept */

/* syscall: "getpriority" ret: "int" args: "int" "int" */
#define	__NR_getpriority	100

				/* 101 is compat_43 osend */

				/* 102 is compat_43 orecv */

/* syscall: "sigreturn" ret: "int" args: "struct sigcontext *" */
#define	__NR_sigreturn	103

/* syscall: "bind" ret: "int" args: "int" "const struct sockaddr *" "socklen_t" */
#define	__NR_bind	104

/* syscall: "setsockopt" ret: "int" args: "int" "int" "int" "const void *" "socklen_t" */
#define	__NR_setsockopt	105

/* syscall: "listen" ret: "int" args: "int" "int" */
#define	__NR_listen	106

				/* 107 is obsolete vtimes */
				/* 108 is compat_43 osigvec */

				/* 109 is compat_43 osigblock */

				/* 110 is compat_43 osigsetmask */

/* syscall: "sigsuspend" ret: "int" args: "int" */
#define	__NR_sigsuspend	111

				/* 112 is compat_43 osigstack */

				/* 113 is compat_43 orecvmsg */

				/* 114 is compat_43 osendmsg */

				/* 115 is obsolete vtrace */
/* syscall: "gettimeofday" ret: "int" args: "struct timeval *" "struct timezone *" */
#define	__NR_gettimeofday	116

/* syscall: "getrusage" ret: "int" args: "int" "struct rusage *" */
#define	__NR_getrusage	117

/* syscall: "getsockopt" ret: "int" args: "int" "int" "int" "void *" "socklen_t *" */
#define	__NR_getsockopt	118

				/* 119 is obsolete resuba */
/* syscall: "readv" ret: "ssize_t" args: "int" "const struct iovec *" "int" */
#define	__NR_readv	120

/* syscall: "writev" ret: "ssize_t" args: "int" "const struct iovec *" "int" */
#define	__NR_writev	121

/* syscall: "settimeofday" ret: "int" args: "const struct timeval *" "const struct timezone *" */
#define	__NR_settimeofday	122

/* syscall: "fchown" ret: "int" args: "int" "uid_t" "gid_t" */
#define	__NR_fchown	123

/* syscall: "fchmod" ret: "int" args: "int" "int" */
#define	__NR_fchmod	124

				/* 125 is compat_43 orecvfrom */

				/* 126 is compat_43 osetreuid */

				/* 127 is compat_43 osetregid */

/* syscall: "rename" ret: "int" args: "const char *" "const char *" */
#define	__NR_rename	128

				/* 129 is compat_43 otruncate */

				/* 130 is compat_43 oftruncate */

/* syscall: "flock" ret: "int" args: "int" "int" */
#define	__NR_flock	131

/* syscall: "mkfifo" ret: "int" args: "const char *" "int" */
#define	__NR_mkfifo	132

/* syscall: "sendto" ret: "ssize_t" args: "int" "const void *" "size_t" "int" "const struct sockaddr *" "socklen_t" */
#define	__NR_sendto	133

/* syscall: "shutdown" ret: "int" args: "int" "int" */
#define	__NR_shutdown	134

/* syscall: "socketpair" ret: "int" args: "int" "int" "int" "int *" */
#define	__NR_socketpair	135

/* syscall: "mkdir" ret: "int" args: "const char *" "int" */
#define	__NR_mkdir	136

/* syscall: "rmdir" ret: "int" args: "const char *" */
#define	__NR_rmdir	137

/* syscall: "utimes" ret: "int" args: "const char *" "const struct timeval *" */
#define	__NR_utimes	138

				/* 139 is obsolete 4.2 sigreturn */
/* syscall: "adjtime" ret: "int" args: "const struct timeval *" "struct timeval *" */
#define	__NR_adjtime	140

				/* 141 is compat_43 ogetpeername */

				/* 142 is compat_43 ogethostid */

				/* 143 is compat_43 osethostid */

				/* 144 is compat_43 ogetrlimit */

				/* 145 is compat_43 osetrlimit */

				/* 146 is compat_43 okillpg */

/* syscall: "setsid" ret: "int" args: */
#define	__NR_setsid	147

/* syscall: "quotactl" ret: "int" args: "const char *" "int" "int" "char *" */
#define	__NR_quotactl	148

				/* 149 is compat_43 oquota */

				/* 150 is compat_43 ogetsockname */

/* syscall: "nfssvc" ret: "int" args: "int" "void *" */
#define	__NR_nfssvc	155

				/* 156 is compat_43 ogetdirentries */

				/* 157 is compat_25 ostatfs */

				/* 158 is compat_25 ostatfs */

/* syscall: "getfh" ret: "int" args: "const char *" "fhandle_t *" */
#define	__NR_getfh	161

				/* 162 is compat_09 ogetdomainname */

				/* 163 is compat_09 osetdomainname */

				/* 164 is compat_09 ouname */

/* syscall: "sysarch" ret: "int" args: "int" "void *" */
#define	__NR_sysarch	165

				/* 169 is compat_10 osemsys */

				/* 170 is compat_10 omsgsys */

				/* 171 is compat_10 oshmsys */

/* syscall: "pread" ret: "ssize_t" args: "int" "void *" "size_t" "int" "off_t" */
#define	__NR_pread	173

/* syscall: "pwrite" ret: "ssize_t" args: "int" "const void *" "size_t" "int" "off_t" */
#define	__NR_pwrite	174

/* syscall: "setgid" ret: "int" args: "gid_t" */
#define	__NR_setgid	181

/* syscall: "setegid" ret: "int" args: "gid_t" */
#define	__NR_setegid	182

/* syscall: "seteuid" ret: "int" args: "uid_t" */
#define	__NR_seteuid	183

/* syscall: "lfs_bmapv" ret: "int" args: "fsid_t *" "struct block_info *" "int" */
#define	__NR_lfs_bmapv	184

/* syscall: "lfs_markv" ret: "int" args: "fsid_t *" "struct block_info *" "int" */
#define	__NR_lfs_markv	185

/* syscall: "lfs_segclean" ret: "int" args: "fsid_t *" "u_long" */
#define	__NR_lfs_segclean	186

/* syscall: "lfs_segwait" ret: "int" args: "fsid_t *" "struct timeval *" */
#define	__NR_lfs_segwait	187

/* syscall: "stat" ret: "int" args: "const char *" "struct stat *" */
#define	__NR_stat	188

/* syscall: "fstat" ret: "int" args: "int" "struct stat *" */
#define	__NR_fstat	189

/* syscall: "lstat" ret: "int" args: "const char *" "struct stat *" */
#define	__NR_lstat	190

/* syscall: "pathconf" ret: "long" args: "const char *" "int" */
#define	__NR_pathconf	191

/* syscall: "fpathconf" ret: "long" args: "int" "int" */
#define	__NR_fpathconf	192

/* syscall: "swapctl" ret: "int" args: "int" "const void *" "int" */
#define	__NR_swapctl	193

/* syscall: "getrlimit" ret: "int" args: "int" "struct rlimit *" */
#define	__NR_getrlimit	194

/* syscall: "setrlimit" ret: "int" args: "int" "const struct rlimit *" */
#define	__NR_setrlimit	195

/* syscall: "getdirentries" ret: "int" args: "int" "char *" "int" "long *" */
#define	__NR_getdirentries	196

/* syscall: "mmap" ret: "void *" args: "void *" "size_t" "int" "int" "int" "long" "off_t" */
#define	__NR_mmap	197

/* syscall: "__syscall" ret: "quad_t" args: "quad_t" "..." */
#define	__NR___syscall	198

/* syscall: "lseek" ret: "off_t" args: "int" "int" "off_t" "int" */
#define	__NR_lseek	199

/* syscall: "truncate" ret: "int" args: "const char *" "int" "off_t" */
#define	__NR_truncate	200

/* syscall: "ftruncate" ret: "int" args: "int" "int" "off_t" */
#define	__NR_ftruncate	201

/* syscall: "__sysctl" ret: "int" args: "int *" "u_int" "void *" "size_t *" "void *" "size_t" */
#define	__NR___sysctl	202

/* syscall: "mlock" ret: "int" args: "const void *" "size_t" */
#define	__NR_mlock	203

/* syscall: "munlock" ret: "int" args: "const void *" "size_t" */
#define	__NR_munlock	204

/* syscall: "undelete" ret: "int" args: "const char *" */
#define	__NR_undelete	205

/* syscall: "futimes" ret: "int" args: "int" "const struct timeval *" */
#define	__NR_futimes	206

/* syscall: "getpgid" ret: "pid_t" args: "pid_t" */
#define	__NR_getpgid	207

/* syscall: "xfspioctl" ret: "int" args: "int" "char *" "int" "struct ViceIoctl *" "int" */
#define	__NR_xfspioctl	208

				/* 220 is compat_23 __osemctl */

/* syscall: "semget" ret: "int" args: "key_t" "int" "int" */
#define	__NR_semget	221

/* syscall: "semop" ret: "int" args: "int" "struct sembuf *" "u_int" */
#define	__NR_semop	222

				/* 223 is obsolete sys_semconfig */
				/* 224 is compat_23 omsgctl */

/* syscall: "msgget" ret: "int" args: "key_t" "int" */
#define	__NR_msgget	225

/* syscall: "msgsnd" ret: "int" args: "int" "const void *" "size_t" "int" */
#define	__NR_msgsnd	226

/* syscall: "msgrcv" ret: "int" args: "int" "void *" "size_t" "long" "int" */
#define	__NR_msgrcv	227

/* syscall: "shmat" ret: "void *" args: "int" "const void *" "int" */
#define	__NR_shmat	228

				/* 229 is compat_23 oshmctl */

/* syscall: "shmdt" ret: "int" args: "const void *" */
#define	__NR_shmdt	230

/* syscall: "shmget" ret: "int" args: "key_t" "int" "int" */
#define	__NR_shmget	231

/* syscall: "clock_gettime" ret: "int" args: "clockid_t" "struct timespec *" */
#define	__NR_clock_gettime	232

/* syscall: "clock_settime" ret: "int" args: "clockid_t" "const struct timespec *" */
#define	__NR_clock_settime	233

/* syscall: "clock_getres" ret: "int" args: "clockid_t" "struct timespec *" */
#define	__NR_clock_getres	234

/* syscall: "nanosleep" ret: "int" args: "const struct timespec *" "struct timespec *" */
#define	__NR_nanosleep	240

/* syscall: "minherit" ret: "int" args: "void *" "size_t" "int" */
#define	__NR_minherit	250

/* syscall: "rfork" ret: "int" args: "int" */
#define	__NR_rfork	251

/* syscall: "poll" ret: "int" args: "struct pollfd *" "unsigned long" "int" */
#define	__NR_poll	252

/* syscall: "issetugid" ret: "int" args: */
#define	__NR_issetugid	253

/* syscall: "lchown" ret: "int" args: "const char *" "uid_t" "gid_t" */
#define	__NR_lchown	254

/* syscall: "getsid" ret: "pid_t" args: "pid_t" */
#define	__NR_getsid	255

/* syscall: "msync" ret: "int" args: "void *" "size_t" "int" */
#define	__NR_msync	256

/* syscall: "__semctl" ret: "int" args: "int" "int" "int" "union semun *" */
#define	__NR___semctl	257

/* syscall: "shmctl" ret: "int" args: "int" "int" "struct shmid_ds *" */
#define	__NR_shmctl	258

/* syscall: "msgctl" ret: "int" args: "int" "int" "struct msqid_ds *" */
#define	__NR_msgctl	259

/* syscall: "getfsstat" ret: "int" args: "struct statfs *" "size_t" "int" */
#define	__NR_getfsstat	260

/* syscall: "statfs" ret: "int" args: "const char *" "struct statfs *" */
#define	__NR_statfs	261

/* syscall: "fstatfs" ret: "int" args: "int" "struct statfs *" */
#define	__NR_fstatfs	262

/* syscall: "pipe" ret: "int" args: "int *" */
#define	__NR_pipe	263

/* syscall: "fhopen" ret: "int" args: "const fhandle_t *" "int" */
#define	__NR_fhopen	264

/* syscall: "fhstat" ret: "int" args: "const fhandle_t *" "struct stat *" */
#define	__NR_fhstat	265

/* syscall: "fhstatfs" ret: "int" args: "const fhandle_t *" "struct statfs *" */
#define	__NR_fhstatfs	266

/* syscall: "preadv" ret: "ssize_t" args: "int" "const struct iovec *" "int" "int" "off_t" */
#define	__NR_preadv	267

/* syscall: "pwritev" ret: "ssize_t" args: "int" "const struct iovec *" "int" "int" "off_t" */
#define	__NR_pwritev	268

/* syscall: "kqueue" ret: "int" args: */
#define	__NR_kqueue	269

/* syscall: "kevent" ret: "int" args: "int" "const struct kevent *" "int" "struct kevent *" "int" "const struct timespec *" */
#define	__NR_kevent	270

/* syscall: "mlockall" ret: "int" args: "int" */
#define	__NR_mlockall	271

/* syscall: "munlockall" ret: "int" args: */
#define	__NR_munlockall	272

/* syscall: "getpeereid" ret: "int" args: "int" "uid_t *" "gid_t *" */
#define	__NR_getpeereid	273

/* syscall: "extattrctl" ret: "int" args: "const char *" "int" "const char *" "int" "const char *" */
#define	__NR_extattrctl	274

/* syscall: "extattr_set_file" ret: "int" args: "const char *" "int" "const char *" "void *" "size_t" */
#define	__NR_extattr_set_file	275

/* syscall: "extattr_get_file" ret: "ssize_t" args: "const char *" "int" "const char *" "void *" "size_t" */
#define	__NR_extattr_get_file	276

/* syscall: "extattr_delete_file" ret: "int" args: "const char *" "int" "const char *" */
#define	__NR_extattr_delete_file	277

/* syscall: "extattr_set_fd" ret: "int" args: "int" "int" "const char *" "void *" "size_t" */
#define	__NR_extattr_set_fd	278

/* syscall: "extattr_get_fd" ret: "ssize_t" args: "int" "int" "const char *" "void *" "size_t" */
#define	__NR_extattr_get_fd	279

/* syscall: "extattr_delete_fd" ret: "int" args: "int" "int" "const char *" */
#define	__NR_extattr_delete_fd	280

#define	__NR_MAXSYSCALL	281


#endif /* SFSYSNR_H */
