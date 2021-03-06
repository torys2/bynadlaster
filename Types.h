#ifndef __TYPES_H_INCLUDED__
#define __TYPES_H_INCLUDED__

#include "StdAfx.h"

struct FT {
  // (!) NOTE (1)
  enum FieldType {
    Floor, 
    Box,
    Wall
  };

  static void RegisterInLua(lua_State* lua_state) {
    luabind::module(lua_state) [
				luabind::class_<FT>("FT")
				// (!) NOTE (1)
				.enum_("FieldType") [
						     luabind::value("Floor", FT::Floor),
						     luabind::value("Box",   FT::Box),
						     luabind::value("Wall",  FT::Wall)
						     ]
				];
  }
};

struct OT {
  enum ObjectType {
    Enemy,
    Flame,
    Powerup,
    Bomb
  };


  static void RegisterInLua(lua_State* lua_state) {
    luabind::module(lua_state) [
				luabind::class_<OT>("OT")
				.enum_("ObjectType") [
						      luabind::value("Enemy",   OT::Enemy),
						      luabind::value("Flame",    OT::Flame),
						      luabind::value("Powerup", OT::Powerup),
						      luabind::value("Bomb",    OT::Bomb)
						      ]
				];
  }

};


struct PT {
  // (!) NOTE (2)
  enum PlayerType {
    White,
    Green,
    Red,
    Blue
  };

  static void RegisterInLua(lua_State* lua_state) {
    luabind::module(lua_state) [
				luabind::class_<PT>("PT")
				// (!) NOTE (2)
				.enum_("FieldType") [
						     luabind::value("White", PT::White),
						     luabind::value("Green", PT::Green),
						     luabind::value("Red",   PT::Red),
						     luabind::value("Blue",  PT::Blue)
						     ]
				];
  }

};


struct AKP {
  enum AfterKillPoints {
    _100,
    _200,
    _400,
    _800,
    _1600,
    _3200,
    _6400,
    _1000,
    _2000,
    _4000,
    _8000        
  };
};


#endif
