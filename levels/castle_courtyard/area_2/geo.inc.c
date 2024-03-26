#include "src/game/envfx_snow.h"

const GeoLayout castle_courtyard_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1011, 0, -1443, 0, -30, 0, castle_courtyard_dl_BetweenChipsPool_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4122, -356, -2712, 2, -136, 1, castle_courtyard_dl_BetweenChipsPool_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -351, 4227, -2865, castle_courtyard_dl_DiceSlideColl_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -5035, 0, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1361, 2598, 432, castle_courtyard_dl_DiceObj_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4730, 4647, -776, -14, -86, -75, castle_courtyard_dl_DiceObj_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1731, 1762, 2253, 0, -89, 0, castle_courtyard_dl_DiceObj_002_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -468, 1333, 3971, 0, 4, 0, castle_courtyard_dl_DiceObj_003_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 972, 8977, -4577, 47, -105, -50, castle_courtyard_dl_DiceObj_004_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3445, 3644, -2200, 108, 1, 57, castle_courtyard_dl_Playing_Card_012_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2551, 2657, 1110, 65, 55, 90, castle_courtyard_dl_Playing_Card_013_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 208, 1803, 2082, 100, 15, 90, castle_courtyard_dl_Playing_Card_014_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6842, 796, -5217, -31, -63, 104, castle_courtyard_dl_Playing_Card_019_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 10964, -299, -4321, 84, -104, -48, castle_courtyard_dl_Playing_Card_020_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -910, 2780, -1444, 136, 6, 84, castle_courtyard_dl_Playing_Card_021_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5655, -2649, 7289),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -2617, 7376, -4280),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -66, -351, -721, 20, -180, 0, castle_courtyard_dl_Playing_Card_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 17, -492, -1095, 20, 165, 0, castle_courtyard_dl_Playing_Card_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 192, -632, -1436, 20, 150, 0, castle_courtyard_dl_Playing_Card_002_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 444, -776, -1722, 20, 135, 0, castle_courtyard_dl_Playing_Card_003_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 768, -921, -1936, 20, 120, 0, castle_courtyard_dl_Playing_Card_004_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1139, -1064, -2060, 20, 105, 0, castle_courtyard_dl_Playing_Card_005_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1531, -1205, -2089, 20, 90, 0, castle_courtyard_dl_Playing_Card_006_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1919, -1346, -2015, 20, 75, 0, castle_courtyard_dl_Playing_Card_007_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2276, -1493, -1832, 20, 60, 0, castle_courtyard_dl_Playing_Card_008_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2578, -1638, -1580, 20, 45, 0, castle_courtyard_dl_Playing_Card_009_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2789, -1792, -1257, 20, 30, 0, castle_courtyard_dl_Playing_Card_010_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2905, -1939, -881, 20, 15, 0, castle_courtyard_dl_Playing_Card_011_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2403, -2528, 544, 20, -45, 0, castle_courtyard_dl_Playing_Card_015_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2657, -2383, 253, 20, -30, 0, castle_courtyard_dl_Playing_Card_016_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2848, -2233, -90, 20, -15, 0, castle_courtyard_dl_Playing_Card_017_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2925, -2085, -488, 20, 0, 0, castle_courtyard_dl_Playing_Card_018_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -5035, 0, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3950, 46, 4343, 5, 57, -24, castle_courtyard_dl_PokerChip_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5050, 0, 3570, 7, 90, -24, castle_courtyard_dl_PokerChip_001_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5429, 0, 1332, 22, -90, -90, castle_courtyard_dl_PokerChip_002_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5429, 517, 1881, 22, -90, -90, castle_courtyard_dl_PokerChip_003_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5429, 319, 882, -11, -70, 28, castle_courtyard_dl_PokerChip_004_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5429, -348, 2326, -10, -70, 28, castle_courtyard_dl_PokerChip_005_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5429, 298, -325, -12, -99, 28, castle_courtyard_dl_PokerChip_006_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 8024, -43, -4229, 68, 85, 90, castle_courtyard_dl_PokerChip_007_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2725, 3342, 5774, -38, 38, -112, castle_courtyard_dl_PokerChip_008_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3865, 8859, -5958, 10, 33, -109, castle_courtyard_dl_PokerChip_009_mesh_layer_1),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2208, 4020, 2970, -39, -75, -119, castle_courtyard_dl_PokerChip_010_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5655, 0, 4408, castle_courtyard_dl_Pool_Table_Coll_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5655, 0, 4408, castle_courtyard_dl_Pool_Table_Coll_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT_DECAL, 5655, -2649, 7289, castle_courtyard_dl_Pool_Table_CollArrows_002_mesh_layer_6),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6219, 718, -377, 0, 0, -48, castle_courtyard_dl_PoolCue_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4952, 718, -569, 0, -180, -48, castle_courtyard_dl_PoolCue_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2617, 7530, -2190, 0, -180, 0, castle_courtyard_dl_SlideStartCollision_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_courtyard_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_GREEN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_PARALLEL_TRACKING, 28, 100, -37, 28, 0, -37, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_courtyard_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
