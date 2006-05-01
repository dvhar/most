/* src/sysconf.h.  Generated by configure.  */
/* -*- C -*- */

/* Note: this is for authentic unix systems only.
 * See mostconf.h for other systems.
 */

#ifndef MOST_CONFIG_H
#define MOST_CONFIG_H

/* Define if you want the experimental MMAP support */
#define USE_MMAP 1

/* define if you have stdlib.h */
#define HAVE_STDLIB_H 1

/* define if you have unistd.h */
#define HAVE_UNISTD_H 1

/* define if you have memory.h */
#define HAVE_MEMORY_H 1

/* define if you have malloc.h */
#define HAVE_MALLOC_H 1

/* define if you have memset */
#define HAVE_MEMSET 1

/* define if you have memcpy */
#define HAVE_MEMCPY 1

/* define if you have this. */
#define HAVE_GETCWD 1

#define HAVE_MMAP 1

#define HAVE_DIRENT_H 1
/* #undef HAVE_SYS_NDIR_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_NDIR_H */

#define HAVE_SNPRINTF 1
#define HAVE_SYS_MMAN_H 1

/* #undef mode_t */
/* #undef pid_t */
/* #undef uid_t */
/* #undef pid_t */


#ifdef _AIX
# ifndef _POSIX_SOURCE
#  define _POSIX_SOURCE
# endif
# ifndef _ALL_SOURCE
#  define _ALL_SOURCE
# endif
/* This may generate warnings but the fact is that without it, xlc will
 * INCORRECTLY inline many str* functions. */
/* # undef __STR__ */
#endif

#define MAX_PATHLEN 1024
#if defined(USE_MMAP) && defined(HAVE_MMAP) && defined(HAVE_SYS_MMAN_H)
# define MOST_HAS_MMAP	1
#else
# define MOST_HAS_MMAP	0
#endif

#endif /* MOST_CONFIG_H */