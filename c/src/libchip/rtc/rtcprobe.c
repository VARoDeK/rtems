/*
 *  This file contains the default Real-Time Clock probe routine.
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
#include <libchip/rtc.h>


boolean rtc_probe(
  int minor
)
{
  return TRUE;
}
