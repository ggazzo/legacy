#pragma once

extern void beamer_receive_handler(void);
extern void beamer_send_command(uint8_t cmd);
extern void beamer_poll_state(void);
extern void beamer_start_shutdown(void);
extern void set_status_beamer_power(uint8_t status);

