#include "earthrise_update.h"

#include "winsparkle/include/winsparkle.h"


void earthrise_updater_init() {
    win_sparkle_set_appcast_url("file:///C:/Users/daicanglan/Documents/workspace/gn-project/test/earthrise/hello.xml");
    win_sparkle_init();
}