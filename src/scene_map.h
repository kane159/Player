/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _SCENE_MAP_H_
#define _SCENE_MAP_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "scene.h"
#include "spriteset_map.h"
#include "window_message.h"

////////////////////////////////////////////////////////////
/// Scene Map class
////////////////////////////////////////////////////////////
class Scene_Map: public Scene {
public:
	Scene_Map();

	void MainFunction();
	void Update();
	void CallBattle();
	void CallShop();
	void CallName();
	void CallMenu();
	void CallSave();
	void CallDebug();
	void TransferPlayer();
	
	Spriteset_Map* spriteset;
	Window_Message* message_window;
};

#endif
