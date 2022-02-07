// HAVE_FUTIMES : LIBC_VERSION

#undef HAVE_FUTIMES

/* Since Linux/glibc 2.3, FreeBSD 3.x, OpenBSD 1.2 (but the `OpenBSD` macro
 * was only added in 2.0 with a value of 199610), NetBSD 1.2, Mac OS (all
 * versions).
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 3)     || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(3, 0)   || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(199610) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(1, 2)    || \
    (defined(__APPLE__) && defined(__MACH__))
#  define HAVE_FUTIMES 1
#endif