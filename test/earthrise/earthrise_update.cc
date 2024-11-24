#include "earthrise_update.h"

#include "winsparkle/include/winsparkle.h"


void earthrise_updater_init() {
    win_sparkle_set_appcast_url("https://winsparkle.org/example/appcast.xml");
    win_sparkle_init();
}