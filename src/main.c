#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"


#define MY_UUID { 0x89, 0x91, 0x5B, 0x7E, 0xA0, 0xFB, 0x44, 0xC0, 0xBB, 0xE3, 0xE5, 0x0B, 0xD1, 0xC6, 0x47, 0xBA }
PBL_APP_INFO(MY_UUID,
             "RockMath", "lezed1",
             1, 0, /* App version */
             RESOURCE_ID_IMAGE_MENU_ICON,
             APP_INFO_STANDARD_APP);

Window window;


void handle_init(AppContextRef ctx) {
  (void)ctx;

  window_init(&window, "RockMath Main Window");
  window_stack_push(&window, true /* Animated */);
}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init
  };
  app_event_loop(params, &handlers);
}
