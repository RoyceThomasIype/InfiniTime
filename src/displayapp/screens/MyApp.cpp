#include "displayapp/screens/MyApp.h"
#include "displayapp/DisplayApp.h"

using namespace Pinetime::Applications::Screens;

MyApp::MyApp(DisplayApp* app) : Screen(app) {
  lv_obj_t* title = lv_label_create(lv_scr_act(), nullptr);
//   lv_label_set_text_static(title, "SPORTident App");
//   lv_label_set_align(title, LV_LABEL_ALIGN_CENTER);
//   lv_obj_align(title, lv_scr_act(), LV_ALIGN_OUT_TOP_MID, 0, 0);
  
  lv_label_set_text(title, "SPORTident App");
  lv_obj_align(title, lv_scr_act(), LV_ALIGN_IN_TOP_MID, 0, -20);
}

MyApp::~MyApp() {
  lv_obj_clean(lv_scr_act());
}
