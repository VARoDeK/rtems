/*
 *  Region Manager
 *
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

#include <rtems/system.h>
#include <rtems/rtems/status.h>
#include <rtems/rtems/support.h>
#include <rtems/score/object.h>
#include <rtems/rtems/options.h>
#include <rtems/rtems/region.h>
#include <rtems/score/states.h>
#include <rtems/score/thread.h>

/*PAGE
 *
 *  rtems_region_ident
 *
 *  This directive returns the system ID associated with
 *  the region name.
 *
 *  Input parameters:
 *    name - user defined region name
 *    id   - pointer to region id
 *
 *  Output parameters:
 *    *id      - region id
 *    RTEMS_SUCCESSFUL - if successful
 *    error code - if unsuccessful
 */

rtems_status_code rtems_region_ident(
  rtems_name    name,
  Objects_Id   *id
)
{
  Objects_Name_to_id_errors  status;

  status = _Objects_Name_to_id(
    &_Region_Information,
    &name,
    OBJECTS_SEARCH_LOCAL_NODE,
    id
  );

  return _Status_Object_name_errors_to_status[ status ];
}
