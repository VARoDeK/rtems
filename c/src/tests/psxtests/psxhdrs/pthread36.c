/*
 *  This test file is used to verify that the header files associated with
 *  invoking this function are correct.
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

#include <pthread.h>
 
#ifndef _POSIX_THREAD_CPUTIME
#error "rtems is supposed to have pthread_attr_getcputime"
#endif

void test( void )
{
  pthread_attr_t  attr;
  int             clock_allowed;
  int             result;

  result = pthread_attr_getcputime( &attr, &clock_allowed );
}
