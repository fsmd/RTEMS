#ifndef LED_DRIVER_H
#define LED_DRIVER_H

#ifdef __cplusplus
extern "C"{
#endif


rtems_device_driver stm32f_led_init(rtems_device_major_number major,
									rtems_device_minor_number minor,
									void	*arg);
rtems_device_driver stm32f_led_open(rtems_device_major_number major,
									rtems_device_minor_number minor,
									void	*arg);
rtems_device_driver stm32f_led_close(rtems_device_major_number major,
									rtems_device_minor_number minor,
									void	*arg);
rtems_device_driver stm32f_led_ioctl(rtems_device_major_number major,
									rtems_device_minor_number minor,
									void	*arg);

#define  BSP_LED_DRIVER_ENTRY \
	{ \
		.initialization_entry = stm32f_led_init, \
		.open_entry = stm32f_led_open, \
		.close_entry = stm32f_led_close, \
		.control_entry = stm32f_led_ioctl \
	}

#ifdef __cplusplus
extern "C"{
#endif

#endif

