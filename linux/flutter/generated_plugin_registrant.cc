//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <flutter_upi_pay/flutter_pay_upi_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) flutter_upi_pay_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterPayUpiPlugin");
  flutter_pay_upi_plugin_register_with_registrar(flutter_upi_pay_registrar);
}
