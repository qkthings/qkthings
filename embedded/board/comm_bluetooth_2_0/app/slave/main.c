#include <qk_program.h>
#include <qk_peripheral.h>

#define UART_ID			1  //FIXME


void core_callback_app(qk_callback_arg *arg)
{

}

void protocol_callback_send_bytes(qk_callback_arg *arg)
{
//	uint8_t *buf = QK_BUF_PTR( QK_CALLBACK_ARG_BUF(arg) );
//	uint16_t count =  QK_BUF_COUNT( QK_CALLBACK_ARG_BUF(arg) );
//	qk_uart_write(UART_ID, buf, count);
}

void qk_setup()
{
	qk_board_set_name("Bluetooth 2.0");

//	qk_core_set_callback(QK_CORE_CALLBACK_APP, core_callback_app);
//
//	qk_protocol_set_callback(QK_PROTOCOL_CALLBACK_SENDBYTES, protocol_callback_send_bytes);


//	qk_peripheral_setup();


//	qk_protocol_comm->callback.send_packet = comm_send_packet;
//	qk_protocol_comm->callback.process_packet = comm_process_packet;

//	qk_comm_set_callback(QK_COMM_CALLBACK_SENDPACKET, 		comm_send_packet);
//	qk_comm_set_callback(QK_COMM_CALLBACK_PROCESSRXPACKET,	comm_process_rx_packet);

//	_hal_uart2.rx_callback = bluetooth_spp_processRxByte;
}

int main()
{
	qk_main();
}