// HAVE_GETAUXVAL : LIBC_VERSION

#undef HAVE_GETAUXVAL

/* Since glibc 2.16.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 16)
#  define HAVE_GETAUXVAL 1
#endif