/*
 * BreathOfFire4 widescreen enhancement plugin.
 *
 * Widescreen is mod-owned on PSX: the runtime clamps game.toml / settings.toml
 * aspect values back to 4:3 unless a trusted plugin selects a display aspect on
 * activation. This plugin runs only while the "bof4.enhancement.widescreen"
 * feature is enabled in the resolved mod plan.
 */
#include "mod_plugins.h"

#include <stdio.h>

static void bof4_widescreen_activate(void) {
    if (!psx_mod_set_fixed_display_aspect(16, 9)) {
        fprintf(stdout, "bof4: widescreen: runtime rejected 16:9 display aspect\n");
    }
}

PSX_MOD_CONSTRUCTOR(bof4_register_widescreen_plugin) {
    (void)psx_mod_register_activation_plugin("bof4.widescreen",
                                             bof4_widescreen_activate);
}
