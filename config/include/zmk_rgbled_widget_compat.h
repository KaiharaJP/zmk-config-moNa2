// Compatibility shims for zmk-rgbled-widget with newer ZMK (v0.3+)
//
// The upstream widget currently uses the deprecated zmk_endpoint_get_selected()
// API. Newer ZMK exposes zmk_endpoints_selected() instead.
// Providing this inline wrapper keeps the module building without
// modifying the upstream source.

#pragma once

#include <zmk/endpoints.h>

static inline struct zmk_endpoint_instance zmk_endpoint_get_selected(void) {
    return zmk_endpoints_selected();
}

