/**
 * m5stack.h - ESP-IDF component to work with M5Stack
 *
 * Include this header file to use the component.
 *
 * (C) 2019 - Timothee Cruse <timothee.cruse@gmail.com>
 * This code is licensed under the MIT License.
 */

#ifndef _M5STACK_H_
#define _M5STACK_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "esp_system.h"
#include "esp_err.h"
#include "esp_log.h"

/**
 * @brief   Initialize M5Stack
 *
 *          Initializes M5Stack
 *
 * @return  ESP_OK success
 *          ESP_FAIL errors found
 */
esp_err_t M5StackInit( void );

#ifdef __cplusplus
}
#endif

#endif // _M5STACK_H_
