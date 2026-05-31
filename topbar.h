// topbar.h: Modern üst bar (top bar) başlık dosyası (C++)
#pragma once
#include <string>
#include <vector>

struct TopBarWidget {
    std::string name;
    std::string type; // Saat, menü, uygulama, özel vs.
    int x, y, width, height;
};

void draw_top_bar(const std::vector<TopBarWidget>& widgets);
void update_top_bar_widget(const std::string& name);
