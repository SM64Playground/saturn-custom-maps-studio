// 0x0E000F00
const GeoLayout geo_bbh_000F00[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 50, 10000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(4, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700F510),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700F848),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07011120),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070139A8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07013BE8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07014FD8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07015398),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070156E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07015A20),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017378),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017570),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07017788),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07019EF8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701A080),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701B6D0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
               GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
               GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
               GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701A850),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x0400, geo_movtex_draw_water_regions),
               GEO_ASM(0x0401, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
