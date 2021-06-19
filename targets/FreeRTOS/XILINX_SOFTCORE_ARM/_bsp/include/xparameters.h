#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definition for CPU ID */
#define XPAR_CPU_ID 0U

/* Definitions for peripheral CORTEXM1_AXI_0 */
#define XPAR_CORTEXM1_AXI_0_CPU_CLK_FREQ_HZ 0


/******************************************************************/

/* Canonical definitions for peripheral CORTEXM1_AXI_0 */
#define XPAR_CPU_CORTEXM1_0_CPU_CLK_FREQ_HZ 0


/******************************************************************/

#define STDIN_BASEADDRESS 0x40600000
#define STDOUT_BASEADDRESS 0x40600000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_ARM
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver EMACLITE */
#define XPAR_XEMACLITE_NUM_INSTANCES 1

/* Definitions for peripheral AXI_ETHERNETLITE_0 */
#define XPAR_AXI_ETHERNETLITE_0_DEVICE_ID 0
#define XPAR_AXI_ETHERNETLITE_0_BASEADDR 0x40E00000
#define XPAR_AXI_ETHERNETLITE_0_HIGHADDR 0x40E0FFFF
#define XPAR_AXI_ETHERNETLITE_0_TX_PING_PONG 1
#define XPAR_AXI_ETHERNETLITE_0_RX_PING_PONG 1
#define XPAR_AXI_ETHERNETLITE_0_INCLUDE_MDIO 1
#define XPAR_AXI_ETHERNETLITE_0_INCLUDE_INTERNAL_LOOPBACK 0


/******************************************************************/

/* Canonical definitions for peripheral AXI_ETHERNETLITE_0 */
#define XPAR_EMACLITE_0_DEVICE_ID XPAR_AXI_ETHERNETLITE_0_DEVICE_ID
#define XPAR_EMACLITE_0_BASEADDR 0x40E00000
#define XPAR_EMACLITE_0_HIGHADDR 0x40E0FFFF
#define XPAR_EMACLITE_0_TX_PING_PONG 1
#define XPAR_EMACLITE_0_RX_PING_PONG 1
#define XPAR_EMACLITE_0_INCLUDE_MDIO 1
#define XPAR_EMACLITE_0_INCLUDE_INTERNAL_LOOPBACK 0


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 1

/* Definitions for peripheral AXI_GPIO_0 */
#define XPAR_AXI_GPIO_0_BASEADDR 0x40000000
#define XPAR_AXI_GPIO_0_HIGHADDR 0x4000FFFF
#define XPAR_AXI_GPIO_0_DEVICE_ID 0
#define XPAR_AXI_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_0_IS_DUAL 1


/******************************************************************/

/* Canonical definitions for peripheral AXI_GPIO_0 */
#define XPAR_GPIO_0_BASEADDR 0x40000000
#define XPAR_GPIO_0_HIGHADDR 0x4000FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_GPIO_0_IS_DUAL 1


/******************************************************************/

/* Definitions for driver SPI */
#define XPAR_XSPI_NUM_INSTANCES 1U

/* Definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_AXI_QUAD_SPI_0_DEVICE_ID 0U
#define XPAR_AXI_QUAD_SPI_0_BASEADDR 0x44A00000U
#define XPAR_AXI_QUAD_SPI_0_HIGHADDR 0x44A0FFFFU
#define XPAR_AXI_QUAD_SPI_0_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_0_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_0_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_0_NUM_TRANSFER_BITS 8U
#define XPAR_AXI_QUAD_SPI_0_SPI_MODE 2U
#define XPAR_AXI_QUAD_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_0_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_SPI_0_DEVICE_ID 0U
#define XPAR_SPI_0_BASEADDR 0x44A00000U
#define XPAR_SPI_0_HIGHADDR 0x44A0FFFFU
#define XPAR_SPI_0_FIFO_EXIST 1U
#define XPAR_SPI_0_FIFO_DEPTH 16U
#define XPAR_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_0_NUM_SS_BITS 1U
#define XPAR_SPI_0_NUM_TRANSFER_BITS 8U
#define XPAR_SPI_0_SPI_MODE 2U
#define XPAR_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_0_AXI4_BASEADDR 0U
#define XPAR_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_SPI_0_XIP_MODE 0U
#define XPAR_SPI_0_USE_STARTUP 1U



/******************************************************************/

/* Definitions for driver UARTLITE */
#define XPAR_XUARTLITE_NUM_INSTANCES 1U

/* Definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_AXI_UARTLITE_0_DEVICE_ID 0U
#define XPAR_AXI_UARTLITE_0_BASEADDR 0x40600000U
#define XPAR_AXI_UARTLITE_0_HIGHADDR 0x4060FFFFU
#define XPAR_AXI_UARTLITE_0_BAUDRATE 9600U
#define XPAR_AXI_UARTLITE_0_USE_PARITY 0U
#define XPAR_AXI_UARTLITE_0_ODD_PARITY 0U
#define XPAR_AXI_UARTLITE_0_DATA_BITS 8U

/* Canonical definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_UARTLITE_0_DEVICE_ID 0U
#define XPAR_UARTLITE_0_BASEADDR 0x40600000U
#define XPAR_UARTLITE_0_HIGHADDR 0x4060FFFFU
#define XPAR_UARTLITE_0_BAUDRATE 9600U
#define XPAR_UARTLITE_0_USE_PARITY 0U
#define XPAR_UARTLITE_0_ODD_PARITY 0U
#define XPAR_UARTLITE_0_DATA_BITS 8U


/******************************************************************/
#endif  /* end of protection macro */
