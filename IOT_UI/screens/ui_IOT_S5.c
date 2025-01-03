// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: POS

#include "../ui.h"

void ui_IOT_S5_screen_init(void)
{
    ui_IOT_S5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_IOT_S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_IOT_S5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IOT_S5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S2_Bg_3 = lv_img_create(ui_IOT_S5);
    lv_img_set_src(ui_IMG_S2_Bg_3, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_3, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_3, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_3, -114);
    lv_obj_set_y(ui_IMG_S2_Bg_3, -308);
    lv_obj_set_align(ui_IMG_S2_Bg_3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_S2_Bg_4 = lv_img_create(ui_IOT_S5);
    lv_img_set_src(ui_IMG_S2_Bg_4, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_4, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_4, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_4, 145);
    lv_obj_set_y(ui_IMG_S2_Bg_4, 214);
    lv_obj_set_align(ui_IMG_S2_Bg_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label__Connect = lv_label_create(ui_IOT_S5);
    lv_obj_set_width(ui_Label__Connect, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label__Connect, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label__Connect, 0);
    lv_obj_set_y(ui_Label__Connect, 15);
    lv_obj_set_align(ui_Label__Connect, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label__Connect, "Select Connect\nMethod");
    lv_obj_set_style_text_color(ui_Label__Connect, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label__Connect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label__Connect, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label__Connect, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Ony_MQTT = lv_label_create(ui_IOT_S5);
    lv_obj_set_width(ui_Label_Ony_MQTT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Ony_MQTT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Ony_MQTT, 0);
    lv_obj_set_y(ui_Label_Ony_MQTT, 70);
    lv_obj_set_align(ui_Label_Ony_MQTT, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Ony_MQTT, "Only MQTT is possible");
    lv_obj_set_style_text_color(ui_Label_Ony_MQTT, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Ony_MQTT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Ony_MQTT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Ony_MQTT, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_MQTT = lv_obj_create(ui_IOT_S5);
    lv_obj_set_height(ui_Panel_List_MQTT, 84);
    lv_obj_set_width(ui_Panel_List_MQTT, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_MQTT, 0);
    lv_obj_set_y(ui_Panel_List_MQTT, 150);
    lv_obj_set_align(ui_Panel_List_MQTT, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_MQTT, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_MQTT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_MQTT, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_MQTT, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_MQTT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_MQTT, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg = lv_obj_create(ui_Panel_List_MQTT);
    lv_obj_set_height(ui_Panel_List_Bg, 70);
    lv_obj_set_width(ui_Panel_List_Bg, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg, lv_color_hex(0xFFCEB0), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_color(ui_Panel_List_Bg, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel_MQTT_table = lv_obj_create(ui_Panel_List_MQTT);
    lv_obj_set_height(ui_Panel_MQTT_table, 20);
    lv_obj_set_width(ui_Panel_MQTT_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_MQTT_table, 18);
    lv_obj_set_y(ui_Panel_MQTT_table, -10);
    lv_obj_clear_flag(ui_Panel_MQTT_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_MQTT_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_MQTT_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_MQTT_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_MQTT_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_MQTT_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_MQTT_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_MQTT_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_MQTT1 = lv_label_create(ui_Panel_MQTT_table);
    lv_obj_set_width(ui_Label_MQTT1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_MQTT1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_MQTT1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_MQTT1, "MQTT");
    lv_obj_set_style_text_color(ui_Label_MQTT1, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_MQTT1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_MQTT1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_MQTT1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_MQTT = lv_label_create(ui_Panel_List_MQTT);
    lv_obj_set_width(ui_Label_MQTT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_MQTT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_MQTT, 78);
    lv_obj_set_y(ui_Label_MQTT, 6);
    lv_obj_set_align(ui_Label_MQTT, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_MQTT, "MQTT");
    lv_obj_set_style_text_color(ui_Label_MQTT, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_MQTT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_MQTT, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_MQTT, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_MQTT = lv_img_create(ui_Panel_List_MQTT);
    lv_img_set_src(ui_IMG_MQTT, &ui_img_mqtt_png);
    lv_obj_set_width(ui_IMG_MQTT, 48);
    lv_obj_set_height(ui_IMG_MQTT, LV_SIZE_CONTENT);    /// 48
    lv_obj_set_x(ui_IMG_MQTT, 20);
    lv_obj_set_y(ui_IMG_MQTT, 6);
    lv_obj_set_align(ui_IMG_MQTT, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_MQTT, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_MQTT, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_1 = lv_img_create(ui_Panel_List_MQTT);
    lv_img_set_src(ui_IMG_Arrow_List_1, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_1, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_1, 6);
    lv_obj_set_align(ui_IMG_Arrow_List_1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_1, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Http = lv_obj_create(ui_IOT_S5);
    lv_obj_set_height(ui_Panel_List_Http, 84);
    lv_obj_set_width(ui_Panel_List_Http, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_Http, 0);
    lv_obj_set_y(ui_Panel_List_Http, 300);
    lv_obj_set_align(ui_Panel_List_Http, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_Http, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_Http, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Http, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Http, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Http, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Http, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg1 = lv_obj_create(ui_Panel_List_Http);
    lv_obj_set_height(ui_Panel_List_Bg1, 70);
    lv_obj_set_width(ui_Panel_List_Bg1, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg1, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg1, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg1, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel_List_Bg1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Http = lv_label_create(ui_Panel_List_Bg1);
    lv_obj_set_width(ui_Label_Http, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Http, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Http, 78);
    lv_obj_set_y(ui_Label_Http, 0);
    lv_obj_set_align(ui_Label_Http, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Http, "Http");
    lv_obj_set_style_text_color(ui_Label_Http, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Http, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Http, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Http, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_Http = lv_img_create(ui_Panel_List_Bg1);
    lv_img_set_src(ui_IMG_Http, &ui_img_http_png);
    lv_obj_set_width(ui_IMG_Http, 48);
    lv_obj_set_height(ui_IMG_Http, LV_SIZE_CONTENT);    /// 48
    lv_obj_set_x(ui_IMG_Http, 20);
    lv_obj_set_y(ui_IMG_Http, 6);
    lv_obj_set_align(ui_IMG_Http, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_Http, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Http, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_2 = lv_img_create(ui_Panel_List_Bg1);
    lv_img_set_src(ui_IMG_Arrow_List_2, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_2, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_2, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_2, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_2, 0);
    lv_obj_set_align(ui_IMG_Arrow_List_2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_2, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_http = lv_obj_create(ui_Panel_List_Http);
    lv_obj_set_height(ui_Panel_http, 20);
    lv_obj_set_width(ui_Panel_http, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_http, 18);
    lv_obj_set_y(ui_Panel_http, -10);
    lv_obj_clear_flag(ui_Panel_http, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_http, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_http, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_http, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_http, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_http, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_http, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_http, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Http1 = lv_label_create(ui_Panel_http);
    lv_obj_set_width(ui_Label_Http1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Http1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Http1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Http1, "Http");
    lv_obj_set_style_text_color(ui_Label_Http1, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Http1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Http1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Http1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Label_Http1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_Return2 = lv_obj_create(ui_IOT_S5);
    lv_obj_set_width(ui_Panel_Return2, 48);
    lv_obj_set_height(ui_Panel_Return2, 48);
    lv_obj_set_x(ui_Panel_Return2, -130);
    lv_obj_set_y(ui_Panel_Return2, -210);
    lv_obj_set_align(ui_Panel_Return2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel_Return2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image_Return2 = lv_img_create(ui_Panel_Return2);
    lv_img_set_src(ui_Image_Return2, &ui_img_return_png);
    lv_obj_set_width(ui_Image_Return2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_Return2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image_Return2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_Return2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Return2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel_Home2 = lv_obj_create(ui_IOT_S5);
    lv_obj_set_width(ui_Panel_Home2, 48);
    lv_obj_set_height(ui_Panel_Home2, 50);
    lv_obj_set_x(ui_Panel_Home2, 120);
    lv_obj_set_y(ui_Panel_Home2, -210);
    lv_obj_set_align(ui_Panel_Home2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel_Home2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageHome2 = lv_img_create(ui_Panel_Home2);
    lv_img_set_src(ui_ImageHome2, &ui_img_homepage_png);
    lv_obj_set_width(ui_ImageHome2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageHome2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ImageHome2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageHome2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageHome2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Panel_List_Bg, ui_event_Panel_List_Bg, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel_List_Bg1, ui_event_Panel_List_Bg1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel_Return2, ui_event_Panel_Return2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel_Home2, ui_event_Panel_Home2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_IOT_S5, ui_event_IOT_S5, LV_EVENT_ALL, NULL);

}
