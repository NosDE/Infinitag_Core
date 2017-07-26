/*
  Infinitag_Core.h - Core Library for the Infinitag System.
  Created by Jani Taxidis & Tobias Stewen & Florian Kleene, January 19, 2017.
  Info: www.infinitag.io

  All files are published under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
  License: https://creativecommons.org/licenses/by-nc-sa/4.0/
*/

#ifndef Infinitag_Core_h
	#define Infinitag_Core_h

	#include "Arduino.h"

	class Infinitag_Core
	{
		public:
			Infinitag_Core();
	
			unsigned long ir_encode(bool isSystem, unsigned int gameId, unsigned int teamId, unsigned int playerId, unsigned int cmd, unsigned int cmdValue);
			void ir_decode(unsigned long code);
			void ir_decode(byte *data);
			void ir_to_bytes(unsigned long code, byte *result);
			unsigned long bits_to_long(int *tmpBits);
			void ir_dump(unsigned long code);
			
			unsigned int ir_recv_is_system;
			unsigned int ir_recv_game_id;
			unsigned int ir_recv_team_id;
			unsigned int ir_recv_player_id;
			unsigned int ir_recv_cmd;
			unsigned int ir_recv_cmd_value;
			unsigned int ir_recv_check_bit;
			
		private:
	};

#endif