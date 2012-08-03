
#pragma once





//tolua_begin
enum ENUM_PACKET_ID
{
	E_KEEP_ALIVE                = 0x00,
	E_LOGIN                     = 0x01,
	E_HANDSHAKE                 = 0x02,
	E_CHAT                      = 0x03,
	E_UPDATE_TIME               = 0x04,
	E_ENTITY_EQUIPMENT          = 0x05,
	E_USE_ENTITY                = 0x07,
	E_UPDATE_HEALTH             = 0x08,
	E_RESPAWN                   = 0x09,
	E_FLYING                    = 0x0a,
	E_PLAYERPOS                 = 0x0b,
	E_PLAYERLOOK                = 0x0c,
	E_PLAYERMOVELOOK            = 0x0d,
	E_BLOCK_DIG                 = 0x0e,
	E_BLOCK_PLACE               = 0x0f,
	E_ITEM_SWITCH               = 0x10,
	E_ADD_TO_INV                = 0x11,		// TODO: Sure this is not Use Bed??
	E_ANIMATION                 = 0x12,
	E_PACKET_13                 = 0x13,
	E_NAMED_ENTITY_SPAWN        = 0x14,
	E_PICKUP_SPAWN              = 0x15,
	E_COLLECT_ITEM              = 0x16,
	E_ADD_VEHICLE               = 0x17,
	E_SPAWN_MOB                 = 0x18,
	E_DESTROY_ENT               = 0x1d,
	E_ENTITY                    = 0x1e,
	E_REL_ENT_MOVE              = 0x1f,
	E_ENT_LOOK                  = 0x20,
	E_REL_ENT_MOVE_LOOK         = 0x21,
	E_ENT_TELEPORT              = 0x22,
	E_ENT_HEAD_LOOK             = 0x23,
	E_ENT_STATUS                = 0x26,
	E_METADATA                  = 0x28,
	E_PRE_CHUNK                 = 0x32,
	E_MAP_CHUNK                 = 0x33,
	E_MULTI_BLOCK               = 0x34,
	E_BLOCK_CHANGE              = 0x35,
	E_BLOCK_ACTION              = 0x36,
	E_EXPLOSION                 = 0x3C,
	E_SOUND_EFFECT              = 0x3D,
	E_NEW_INVALID_STATE         = 0x46,
	E_THUNDERBOLT               = 0x47,
	E_WINDOW_OPEN               = 0x64,
	E_WINDOW_CLOSE              = 0x65,
	E_WINDOW_CLICK              = 0x66,
	E_INVENTORY_SLOT            = 0x67,
	E_INVENTORY_WHOLE           = 0x68,
	E_INVENTORY_PROGRESS        = 0x69,
	E_CREATIVE_INVENTORY_ACTION = 0x6B,
	E_UPDATE_SIGN               = 0x82,
	E_PLAYER_LIST_ITEM          = 0xC9,
	E_PLAYER_ABILITIES          = 0xca,  // since 1.2.4, protocol version 29
	E_PING                      = 0xfe,
	E_DISCONNECT                = 0xff
} ;
//tolua_end




