//
// Created by corigan01 on 11/3/23.
//

#include "SimpleUIElement.h"

void SimpleElement::init() {
// Do nothing
}

void SimpleElement::draw2D() {
    const char* draw_str = m_mouse_clicked_flag ? "Mouse Down Flag Active" : "Mouse Down Flag Inactive";
    DrawText(draw_str, 0, 0, 20, BLACK);
}

void SimpleElement::mouse_click(Vector2 pos, MoueClickButton button) {
    if (button == UIElement::MoueClickButton::MOUSE_CLICK_LEFT) {
        m_mouse_clicked_flag = !m_mouse_clicked_flag;
    }
}