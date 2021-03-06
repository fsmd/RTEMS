/*
 *  COPYRIGHT (c) 1989-2012.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <tmacros.h>

#include <rtems/score/objectimpl.h>

const char rtems_test_name[] = "SP 41";

/* forward declarations to avoid warnings */
rtems_task Init(rtems_task_argument argument);
void iterator(Thread_Control *thread);

void iterator(
  Thread_Control *thread
)
{
}

rtems_task Init(
  rtems_task_argument ignored
)
{
  void *tmp;

  TEST_BEGIN();

  puts( "Init - overwrite internal value to trip case" );
  tmp = _Objects_Information_table[ OBJECTS_CLASSIC_API ][ 1 ];
  _Objects_Information_table[ OBJECTS_CLASSIC_API ][ 1 ] = NULL;

  puts( "Init - rtems_iterate_over_all_threads" );
  rtems_iterate_over_all_threads(iterator);
  _Objects_Information_table[ OBJECTS_CLASSIC_API ][ 1 ] = tmp;

  TEST_END();
  rtems_test_exit(0);
}

/* configuration information */

#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER

#define CONFIGURE_MAXIMUM_TASKS         1
#define CONFIGURE_INITIAL_EXTENSIONS RTEMS_TEST_INITIAL_EXTENSION

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_INIT
#include <rtems/confdefs.h>

/* global variables */
