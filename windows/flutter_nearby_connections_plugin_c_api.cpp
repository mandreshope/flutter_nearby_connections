#include "include/flutter_nearby_connections/flutter_nearby_connections_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_nearby_connections_plugin.h"

void FlutterNearbyConnectionsPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_nearby_connections::FlutterNearbyConnectionsPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
