#define SPI_INSTANCE 0 // SPI instance index. We use SPI master 0
#define SPI_SS_PIN 26
#define SPI_MISO_PIN 23
#define SPI_MOSI_PIN 24
#define SPI_SCK_PIN 22
//SPI instance
static const nrf_drv_spi_t spi = NRF_DRV_SPI_INSTANCE(SPI_INSTANCE);
//Flag used to indicate that SPI instance completed the transfer
static volatile bool spi_xfer_done;