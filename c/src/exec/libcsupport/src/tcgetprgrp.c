/*
 *  tcgetprgrp() - POSIX 1003.1b 7.2.3 - Get Foreground Process Group ID
 *
 *  COPYRIGHT (c) 1989-1999.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.OARcorp.com/rtems/license.html.
 *
 *  $Id$
 */

#include <rtems.h>
#if defined(RTEMS_NEWLIB)

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <termios.h>
/* #include <sys/ioctl.h> */

int ioctl();

#include <rtems/libio.h>

pid_t tcgetprgrp(int fd)
{
  return getpid();
}

#endif
