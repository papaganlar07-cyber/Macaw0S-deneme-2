// dock.h: Dock (uygulama başlatıcı/görev çubuğu) başlık dosyası (C++)
#pragma once
#include <string>
#include <vector>

struct DockItem {
    std::string appName;
    std::string iconPath;
    bool isRunning;
};

void draw_dock(const std::vector<DockItem>& items);
void launch_dock_item(const DockItem& item);
