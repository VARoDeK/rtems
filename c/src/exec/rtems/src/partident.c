/*
 *  Partition Manager
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
#include <rtems/score/address.h>
#include <rtems/score/object.h>
#include <rtems/rtems/part.h>
#include <rtems/score/thread.h>
#include <rtems/score/sysstate.h>

/*PAGE
 *
 *  rtems_partition_ident
 *
 *  This directive returns the system ID associated with
 *  the partition name.
 *
 *  Input parameters:
 *    name - user defined partition name
 *    node - node(s) to be searched
 *    id   - pointer to partition id
 *
 *  Output parameters:
 *    *id               - partition id
 *    RTEMS_SUCCESSFUL - if successful
 *    error code        - if unsuccessful
 */

rtems_status_code rtems_partition_ident(
  rtems_name    name,
  unsigned32    node,
  Objects_Id   *id
)
{
  Objects_Name_to_id_errors  status;

  status = _Objects_Name_to_id( &_Partition_Information, &name, node, id );

  return _Status_Object_name_errors_to_status[ status ];
}
