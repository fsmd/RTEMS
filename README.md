# RTEMS
RTEMS development

基于STM32F429 Discovery 的RTEMS-4.11的移值，基本成功，并不断完善！！2016-05-15


Tested with STM32F429-Discovery evaluation board.

For debugging on Linux use:

https://github.com/texane/stlink

SYSCLK : 180MHz
HCLK : 180MHz
PCLK1:45MHz
PCLK2:90MHz


../rtems-4.11/configure --target=arm-rtems4.11 --disable-posix --disable-itron --disable-cxx --disable-networking  --enable-rtemsbsp="stm32f4" --prefix=/home/RTEMS/stm32f4
make
make install


export RTEMS_MAKEFILE_PATH=/home/RTEMS/stm32f429/arm-rtems4.11/c/stm32f4/make
