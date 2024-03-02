#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, 100, -37, castle_grounds_dl_Building_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1331, 1050, -37, castle_grounds_dl_Circle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 44, 1050, -37, castle_grounds_dl_Circle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1229, 1050, -37, castle_grounds_dl_Circle_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 28, 100, -37),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 135, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 335, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 535, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 735, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -1794, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -1594, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -1394, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -1194, 100, -1756, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1393, 100, -974, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1393, 100, -1174, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1393, 100, -1374, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1393, 100, -1574, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1212, 100, -1569, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1212, 100, -1369, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1212, 100, -1169, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1212, 100, -969, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1213, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1413, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1613, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1813, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -214, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -414, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -614, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -814, 100, 1729, 0, -180, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1183, 100, 986, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1183, 100, 1186, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1183, 100, 1386, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1183, 100, 1586, 0, -90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1364, 100, 1584, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1364, 100, 1384, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1364, 100, 1184, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 1364, 100, 984, 0, 90, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 380, 100, 1434, 0, -45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 642, 100, 1429, 0, 45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 640, 100, 1170, 0, 135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 378, 100, 1175, 0, -135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1107, 100, 1208, 0, -45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -845, 100, 1203, 0, 45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -847, 100, 943, 0, 135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1109, 100, 949, 0, -135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -674, 100, -1118, 0, -45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -412, 100, -1123, 0, 45, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -414, 100, -1383, 0, 135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -676, 100, -1377, 0, -135, 0, castle_grounds_dl_SlotMachine_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_SlotMachine_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 28, 100, -37),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 86, 0, -942, 0, -180, 0, castle_grounds_dl_Table_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 747, 0, -942, 0, -180, 0, castle_grounds_dl_Table_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1396, 0, -942, 0, -90, 0, castle_grounds_dl_Table_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -169, 0, 958, 0, 90, 0, castle_grounds_dl_Table_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1556, 0, 843, 0, -180, 0, castle_grounds_dl_Table_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
