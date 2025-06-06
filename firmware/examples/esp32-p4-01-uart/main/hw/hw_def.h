#ifndef HW_DEF_H_
#define HW_DEF_H_


#include "def.h"
#include "bsp.h"



#define _DEF_FIRMWATRE_VERSION    "V250504R1"
#define _DEF_BOARD_NAME           "ESP32-P4-FW"



#define _USE_HW_RTOS
#define _USE_HW_CDC

#define _USE_HW_UART
#define      HW_UART_MAX_CH         2
#define      HW_UART_CH_USB         _DEF_UART2
#define      HW_UART_CH_CLI         _DEF_UART1

#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    16
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_LOG
#define      HW_LOG_CH              _DEF_UART1
#define      HW_LOG_BOOT_BUF_MAX    1024
#define      HW_LOG_LIST_BUF_MAX    1024


#endif 
