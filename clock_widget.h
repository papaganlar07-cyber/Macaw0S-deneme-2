// clock_widget.h: Basit Masaüstü Saat Widget'ı (mahremiyetli)
#pragma once
#include "widget.h"
#include <ctime>

struct ClockWidget : public Widget {
    // Ek saat verisi veya format seçimi eklenebilir
};

void draw_clock_widget(const ClockWidget& clock);
void update_clock_widget(ClockWidget& clock);
