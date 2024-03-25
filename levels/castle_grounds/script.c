#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bidw_skybox_mio0SegmentRomStart, _bidw_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE_COURTYARD, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLACK_BOBOMB, 1273, -159, 1495, 0, -105, 0, (2 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 350, -159, 1248, 0, 75, 0, (3 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, -1834, 924, -532, 0, -180, 0, (33 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, 1401, 924, 1073, 0, -90, 0, (36 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 478, -159, 1711, 0, 135, 0, (4 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 1744, -159, 310, -1, 90, -1, (8 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 913, 924, 157, 0, 0, 0, (35 << 16), bhvBobombBuddy),
		OBJECT(MODEL_FLYGUY, 688, -159, 913, 0, 15, 0, (1 << 16), bhvFlyGuyNPC),
		OBJECT(MODEL_FLYGUY, 1330, 924, 1389, 0, -112, 0, (39 << 16), bhvFlyGuyNPC),
		OBJECT(MODEL_GOOMBA, 0, -226, 407, 0, 0, 0, (43 << 16), bhvGoombaNPC),
		OBJECT(MODEL_GOOMBA, 0, 857, -251, 0, 0, 0, (46 << 16), bhvGoombaNPC),
		OBJECT(MODEL_GOOMBA, -1155, -159, 1712, 0, 135, 0, (15 << 16), bhvGoombaNPC),
		OBJECT(MODEL_GOOMBA, -762, 924, 2118, 0, -30, 0, (32 << 16), bhvGoombaNPC),
		OBJECT(MODEL_GOOMBA, 913, 924, 1627, 0, -180, 0, (42 << 16), bhvGoombaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -1745, -171, 612, 0, -90, 0, 0x00000000, bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -1374, 828, 612, 0, 60, 0, (19 << 16), bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -1374, 828, 1359, 0, 120, 0, (18 << 16), bhvKoopaNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -510, 828, 930, 0, -90, 0, (16 << 16), bhvKoopaNPC),
		OBJECT(MODEL_FLYGUY, 1739, 924, 15, 0, 90, 0, (34 << 16), bhvFlyGuyNPC),
		OBJECT(MODEL_KOOPA_WITH_SHELL, 495, 924, 1384, 0, 112, 0, (40 << 16), bhvKoopaNPC),
		OBJECT(MODEL_WOODEN_SIGNPOST, 0, 828, 2470, 0, -180, 0, (48 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -4, -175, 1677, 0, -180, 0, 0x000A0000, bhvAirborneWarp),
		MARIO_POS(0x01, -180, -4, -175, 1677),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LUIGICASINO),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -4, -175, 1677),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
