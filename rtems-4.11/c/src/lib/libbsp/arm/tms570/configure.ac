##
#
# @file configure.ac
#
# @brief Configure script of LibBSP for the TMS570 board.
#

AC_PREREQ([2.69])
AC_INIT([rtems-c-src-lib-libbsp-arm-tms570],[_RTEMS_VERSION],
				[https://devel.rtems.org/newticket])
AC_CONFIG_SRCDIR([bsp_specs])
RTEMS_TOP(../../../../../..)

RTEMS_CANONICAL_TARGET_CPU
AM_INIT_AUTOMAKE([no-define nostdinc foreign 1.12.2])
RTEMS_BSP_CONFIGURE

RTEMS_PROG_CC_FOR_TARGET
RTEMS_CANONICALIZE_TOOLS
RTEMS_PROG_CCAS

RTEMS_CHECK_NETWORKING
AM_CONDITIONAL(HAS_NETWORKING,test "$HAS_NETWORKING" = "no")

RTEMS_BSPOPTS_SET([TMS570_SCI_BAUD_RATE],[*],[115200U])
RTEMS_BSPOPTS_HELP([TMS570_SCI_BAUD_RATE],[baud for UARTs])

RTEMS_BSPOPTS_SET([CONSOLE_USE_INTERRUPTS],[*],[1])
RTEMS_BSPOPTS_HELP([CONSOLE_USE_INTERRUPTS],
[The tms570 console driver can operate in either polled or interrupt mode.])

RTEMS_BSPOPTS_SET([ARM_TMS570LS3137],[*],[0])
RTEMS_BSPOPTS_HELP([ARM_TMS570LS3137],[target used for identify TMS570LS3137 board])

RTEMS_BSPOPTS_SET([BSP_MINIMUM_TASK_STACK_SIZE],[*],[1024])
RTEMS_BSPOPTS_HELP([BSP_MINIMUM_TASK_STACK_SIZE],[Suggested minimum task stack
			size in bytes])

RTEMS_BSPOPTS_SET([BSP_START_NEEDS_REGISTER_INITIALIZATION],[*],[1])
RTEMS_BSPOPTS_HELP([BSP_START_NEEDS_REGISTER_INITIALIZATION],
					[The TMS570 needs to have the registers of its CPU initialized
					to avoid CCMR4F errors])

RTEMS_BSPOPTS_SET([TMS570_OSCILLATOR_MAIN],[*],[12000000U])
RTEMS_BSPOPTS_HELP([TMS570_OSCILLATOR_MAIN],[main oscillator frequency in Hz])

RTEMS_BSPOPTS_SET([TMS570_OSCILLATOR_RTC],[*],[32768U])
RTEMS_BSPOPTS_HELP([TMS570_OSCILLATOR_RTC],[RTC oscillator frequency in Hz])

RTEMS_BSPOPTS_SET([TMS570_CCLK],[*],[96000000U])
RTEMS_BSPOPTS_HELP([TMS570_CCLK],[CPU clock in Hz])

RTEMS_BSP_CLEANUP_OPTIONS(0, 1)
RTEMS_BSP_LINKCMDS

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
