// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: POS

#include "../ui.h"

void ui_IOT_S2_screen_init(void)
{
    ui_IOT_S2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_IOT_S2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_IOT_S2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IOT_S2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S2_Bg_7 = lv_img_create(ui_IOT_S2);
    lv_img_set_src(ui_IMG_S2_Bg_7, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_7, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_7, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_7, -81);
    lv_obj_set_y(ui_IMG_S2_Bg_7, -267);
    lv_obj_set_align(ui_IMG_S2_Bg_7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_S2_Bg_8 = lv_img_create(ui_IOT_S2);
    lv_img_set_src(ui_IMG_S2_Bg_8, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_8, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_8, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_8, 158);
    lv_obj_set_y(ui_IMG_S2_Bg_8, 77);
    lv_obj_set_align(ui_IMG_S2_Bg_8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Enter_Amount1 = lv_label_create(ui_IOT_S2);
    lv_obj_set_width(ui_Label_Enter_Amount1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Enter_Amount1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Enter_Amount1, 0);
    lv_obj_set_y(ui_Label_Enter_Amount1, -215);
    lv_obj_set_align(ui_Label_Enter_Amount1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Enter_Amount1, "Device List");
    lv_obj_set_style_text_color(ui_Label_Enter_Amount1, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Enter_Amount1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Enter_Amount1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TabView1 = lv_tabview_create(ui_IOT_S2, LV_DIR_LEFT, 100);
    lv_obj_set_width(ui_TabView1, 300);
    lv_obj_set_height(ui_TabView1, 350);
    lv_obj_set_x(ui_TabView1, 0);
    lv_obj_set_y(ui_TabView1, -8);
    lv_obj_set_align(ui_TabView1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TabView1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags


    ui_TabPage1 = lv_tabview_add_tab(ui_TabView1, "Nas/Service");
    lv_obj_set_style_bg_img_src(ui_TabPage1, &ui_img_service_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_TabPage1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 30);
    lv_obj_set_y(ui_Label5, 2);
    lv_label_set_text(ui_Label5, "NO Device");

    ui_TabPage2 = lv_tabview_add_tab(ui_TabView1, "Router");
    lv_obj_set_style_bg_img_src(ui_TabPage2, &ui_img_router_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_TabPage2);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 30);
    lv_obj_set_y(ui_Label6, 2);
    lv_label_set_text(ui_Label6, "NO Device");

    ui_TabPage3 = lv_tabview_add_tab(ui_TabView1, "Sound");
    lv_obj_set_style_bg_img_src(ui_TabPage3, &ui_img_sound_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_TabPage3);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 30);
    lv_obj_set_y(ui_Label7, 2);
    lv_label_set_text(ui_Label7, "NO Device");

    ui_TabPage4 = lv_tabview_add_tab(ui_TabView1, "Lamp");
    lv_obj_set_style_bg_img_src(ui_TabPage4, &ui_img_lamp_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_TabPage4);
    lv_img_set_src(ui_Image4, &ui_img_circlefillred_png);
    lv_obj_set_width(ui_Image4, 20);
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 20
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label8 = lv_label_create(ui_TabPage4);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 30);
    lv_obj_set_y(ui_Label8, 2);
    lv_label_set_text(ui_Label8, "NO Device");
    lv_obj_add_flag(ui_Label8, LV_OBJ_FLAG_CLICKABLE);     /// Flags

    ui_TabPage5 = lv_tabview_add_tab(ui_TabView1, "Camera");
    lv_obj_set_style_bg_img_src(ui_TabPage5, &ui_img_cameramonitor_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_TabPage5);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 30);
    lv_obj_set_y(ui_Label9, 2);
    lv_label_set_text(ui_Label9, "NO Device");

    ui_TabPage6 = lv_tabview_add_tab(ui_TabView1, "Socket");
    lv_obj_set_style_bg_img_src(ui_TabPage6, &ui_img_socket_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_TabPage6);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, 30);
    lv_obj_set_y(ui_Label10, 2);
    lv_label_set_text(ui_Label10, "NO Device");

    ui_Button5 = lv_btn_create(ui_IOT_S2);
    lv_obj_set_width(ui_Button5, 100);
    lv_obj_set_height(ui_Button5, 50);
    lv_obj_set_x(ui_Button5, -80);
    lv_obj_set_y(ui_Button5, 200);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0xEE8E23), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Connect");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_IOT_S2);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, 80);
    lv_obj_set_y(ui_Button2, 200);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xEE8E23), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Disconnect");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Label8, ui_event_Label8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_IOT_S2, ui_event_IOT_S2, LV_EVENT_ALL, NULL);

}
