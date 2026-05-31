// widget.h: Masaüstü widget sistemi başlık dosyası (C++)
#pragma once
#include <string>
#include <vector>

struct Widget {
    std::string name;
    int x, y, width, height;
    std::string type; // "clock", "weather", "custom" vs.
    std::vector<std::string> actions; // Kısa yollar veya widget aksiyonları
};

void draw_widget(const Widget& widget);
void update_widget(Widget& widget);
