AC_PREREQ([2.69])
AC_INIT([rtems-c-src-lib-libbsp-arm-stm32f4],[_RTEMS_VERSION],[https://devel.rtems.org/newticket])
AC_CONFIG_SRCDIR([bsp_specs])
RTEMS_TOP(../../../../../..)

RTEMS_CANONICAL_TARGET_CPU
AM_INIT_AUTOMAKE([no-define nostdinc foreign 1.12.2])
RTEMS_BSP_CONFIGURE

RTEMS_PROG_CC_FOR_TARGET
RTEMS_CANONICALIZE_TOOLS
RTEMS_PROG_CCAS

RTEMS_CHECK_NETWORKING
AM_CONDITIONAL(HAS_NETWORKING,test "$HAS_NETWORKING" = "yes")


RTEMS_BSPOPTS_SET([STM32F4_FAMILY_F4XXXX],[stm32f4*],[1])
RTEMS_BSPOPTS_HELP([STM32F4_FAMILY_F4XXXX],[Chip belongs to the STM32F4XXXX family.])

RTEMS_BSPOPTS_SET([STM32F4_HSE_OSCILLATOR],[*],[8000000])
RTEMS_BSPOPTS_HELP([STM32F4_HSE_OSCILLATOR],[HSE oscillator frequency in Hz])

RTEMS_BSPOPTS_SET([STM32F4_SYSCLK],[*],[180000000])
RTEMS_BSPOPTS_HELP([STM32F4_SYSCLK],[SYSCLK frequency in Hz])

RTEMS_BSPOPTS_SET([STM32F4_HCLK],[*],[180000000])
RTEMS_BSPOPTS_HELP([STM32F4_HCLK],[HCLK frequency in Hz])

RTEMS_BSPOPTS_SET([STM32F4_PCLK1],[*],[45000000])
RTEMS_BSPOPTS_HELP([STM32F4_PCLK1],[PCLK1 frequency in Hz])

RTEMS_BSPOPTS_SET([STM32F4_PCLK2],[*],[90000000])
RTEMS_BSPOPTS_HELP([STM32F4_PCLK2],[PCLK2 frequency in Hz])

RTEMS_BSPOPTS_SET([STM32F4_USART_BAUD],[*],[115200])
RTEMS_BSPOPTS_HELP([STM32F4_USART_BAUD],[baud for USARTs])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_USART_1],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_USART_1],[enable USART 1])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_USART_2],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_USART_2],[enable USART 2])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_USART_3],[*],[1])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_USART_3],[enable USART 3])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_UART_4],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_UART_4],[enable UART 4])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_UART_5],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_UART_5],[enable UART 5])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_USART_6],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_USART_6],[enable USART 6])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_I2C1],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_I2C1],[enable I2C 1])

RTEMS_BSPOPTS_SET([STM32F4_ENABLE_I2C2],[*],[])
RTEMS_BSPOPTS_HELP([STM32F4_ENABLE_I2C2],[enable I2C 2])

RTEMS_BSP_CLEANUP_OPTIONS(0, 0)
RTEMS_BSP_LINKCMDS

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
