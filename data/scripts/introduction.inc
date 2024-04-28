Introduction_EventScript_Startup::
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox Introduction_EventScript_Startup_Text_0
	msgbox Introduction_EventScript_Startup_Text_1
	msgbox Introduction_EventScript_Startup_Text_2
	msgbox Introduction_EventScript_Startup_Text_3
	msgbox Introduction_EventScript_Startup_Text_4
	goto Introduction_EventScript_AskSandboxMode
	return


Introduction_EventScript_AskSandboxMode::
	msgbox Introduction_EventScript_AskSandboxMode_Text_0
	msgbox Introduction_EventScript_AskSandboxMode_Text_1
	msgbox Introduction_EventScript_AskSandboxMode_Text_2
	msgbox Introduction_EventScript_AskSandboxMode_Text_3
	msgbox Introduction_EventScript_AskSandboxMode_Text_4
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq Introduction_EventScript_AskSandboxMode_2
	msgbox Introduction_EventScript_AskSandboxMode_Text_6
Introduction_EventScript_AskSandboxMode_1:
	releaseall
	end

Introduction_EventScript_AskSandboxMode_2:
	msgbox Introduction_EventScript_AskSandboxMode_Text_5
	goto Introduction_EventScript_SetupSandboxMode
	goto Introduction_EventScript_AskSandboxMode_1


Introduction_EventScript_SetupSandboxMode::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Introduction_EventScript_SetupSandboxMode_2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
Introduction_EventScript_SetupSandboxMode_1:
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_CONTEST_POKE_BALL
	setflag FLAG_MET_RIVAL_MOM
	setflag FLAG_BIRCH_AIDE_MET
	setflag FLAG_RECEIVED_BIKE
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	setflag FLAG_MET_TEAM_AQUA_HARBOR
	setflag FLAG_TV_EXPLAINED
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_RECEIVED_METEORITE
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	setflag FLAG_RECOVERED_DEVON_GOODS
	setflag FLAG_RETURNED_DEVON_GOODS
	setflag FLAG_MR_BRINEY_SAILING_INTRO
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
	setflag FLAG_DELIVERED_DEVON_GOODS
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_DELIVERED_STEVEN_LETTER
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
	setflag FLAG_WALLY_SPEECH
	setflag FLAG_RUSTURF_TUNNEL_OPENED
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	setflag FLAG_MET_WAILMER_TRAINER
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	setflag FLAG_RECEIVED_GO_GOGGLES
	setflag FLAG_MET_PROF_COZMO
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
	setflag FLAG_ENTERED_ELITE_FOUR
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	setflag FLAG_RECEIVED_DEVON_SCOPE
	setflag FLAG_MET_RIVAL_RUSTBORO
	setflag FLAG_RECEIVED_SS_TICKET
	setflag FLAG_MET_RIVAL_LILYCOVE
	setflag FLAG_KECLEON_FLED_FORTREE
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
	setflag FLAG_MIRAGE_TOWER_VISIBLE
	setflag FLAG_ENABLE_MR_STONE_POKENAV
	setflag FLAG_MATCH_CALL_REGISTERED
	setflag FLAG_ENABLE_MR_STONE_POKENAV
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setflag FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
	setflag FLAG_HIDE_ROUTE_104_RIVAL
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
	setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
	setflag FLAG_HIDE_SLATEPORT_CITY_SCOTT
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
	setflag FLAG_HIDE_DEOXYS
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
	setflag FLAG_HIDE_MAUVILLE_CITY_SCOTT
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_ROUTE_119_SCOTT
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
	setflag FLAG_HIDE_ROUTE_128_STEVEN
	setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
	setflag FLAG_HIDE_ROUTE_110_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
	setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP
	setflag FLAG_HIDE_ROUTE_119_RIVAL
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SKY_PILLAR_WALLACE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
	setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
	setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	setflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
	setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
	setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE
	setflag FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	setflag FLAG_HIDE_ROUTE_110_RIVAL
	setflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
	setflag FLAG_HIDE_CHAMPIONS_ROOM_BIRCH
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE
	setflag FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2
	setflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	setflag FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW
	setflag FLAG_HIDE_ROUTE_128_ARCHIE
	setflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setflag FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
	setflag FLAG_HIDE_ROUTE_118_STEVEN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setflag FLAG_HIDE_FORTREE_CITY_KECLEON
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
	setflag FLAG_HIDE_ROUTE_120_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW
	setflag FLAG_HIDE_ROUTE_120_KECLEON_1
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	setflag FLAG_HIDE_ROUTE_120_KECLEON_2
	setflag FLAG_HIDE_ROUTE_120_KECLEON_3
	setflag FLAG_HIDE_ROUTE_120_KECLEON_4
	setflag FLAG_HIDE_ROUTE_120_KECLEON_5
	setflag FLAG_HIDE_ROUTE_119_KECLEON_1
	setflag FLAG_HIDE_ROUTE_119_KECLEON_2
	setflag FLAG_HIDE_ROUTE_101_BOY
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
	setflag FLAG_HIDE_PETALBURG_CITY_SCOTT
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_SYS_GAME_CLEAR
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_VISITED_OLDALE_TOWN
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setflag FLAG_IS_CHAMPION
	setflag FLAG_SYS_TV_HOME
	setflag FLAG_SYS_TV_WATCH
	setflag FLAG_SYS_TV_START
	setflag FLAG_SYS_CLOCK_SET
	setflag FLAG_SYS_NATIONAL_DEX
	setflag FLAG_SYS_RIBBON_GET
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	setflag FLAG_LANDMARK_FIERY_PATH
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	setflag FLAG_LANDMARK_SKY_PILLAR
	setflag FLAG_SYS_FRONTIER_PASS
	setflag FLAG_SYS_SHOAL_ITEM
	setflag FLAG_SYS_B_DASH
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
	setflag FLAG_LANDMARK_TRAINER_HILL
	setflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
	setflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
	setflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
	setvar VAR_BIRCH_STATE, 4
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	setvar VAR_OLDALE_TOWN_STATE, 1
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
	setvar VAR_PETALBURG_CITY_STATE, 5
	setvar VAR_SLATEPORT_CITY_STATE, 2
	setvar VAR_RUSTBORO_CITY_STATE, 8
	setvar VAR_MOSSDEEP_CITY_STATE, 3
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	setvar VAR_ROUTE101_STATE, 3
	setvar VAR_ROUTE104_STATE, 2
	setvar VAR_ROUTE110_STATE, 1
	setvar VAR_ROUTE116_STATE, 2
	setvar VAR_ROUTE118_STATE, 1
	setvar VAR_ROUTE119_STATE, 1
	setvar VAR_ROUTE121_STATE, 1
	setvar VAR_ROUTE128_STATE, 2
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
	setvar VAR_BIRCH_LAB_STATE, 5
	setvar VAR_PETALBURG_GYM_STATE, 7
	setvar VAR_SECRET_BASE_INITIALIZED, 1
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	setvar VAR_DEVON_CORP_3F_STATE, 1
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 1
	setvar VAR_PETALBURG_WOODS_STATE, 1
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
	setvar VAR_SS_TIDAL_STATE, 8
	setvar VAR_MT_PYRE_STATE, 2
	setvar VAR_NEW_MAUVILLE_STATE, 2
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	setvar VAR_METEOR_FALLS_STATE, 2
	setvar VAR_VICTORY_ROAD_1F_STATE, 2
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setvar VAR_JAGGED_PASS_STATE, 2
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	setvar VAR_SKY_PILLAR_STATE, 3
	setvar VAR_FOSSIL_MANIAC_STATE, 1
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
	setvar VAR_FRONTIER_BATTLE_MODE, 1
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
	setvar VAR_SCOTT_STATE, 6
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	setvar VAR_SS_TIDAL_SCOTT_STATE, 1
	setvar VAR_ROAMER_POKEMON, 1
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
	setvar VAR_REGISTER_BIRCH_STATE, 2
	setvar VAR_WALLY_CALL_STEP_COUNTER, 250
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 10
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 250
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 10
	setvar VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER, 250
	special EnableNationalPokedex
	setvar VAR_FRONTIER_METHOD, 4
	giveitem ITEM_SS_TICKET
	addmoney 500000
	givemon SPECIES_TALONFLAME, 50
	givemon SPECIES_SWAMPERT, 50
	goto Introduction_EventScript_SetupSandboxModeComplete
	return

Introduction_EventScript_SetupSandboxMode_2:
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	goto Introduction_EventScript_SetupSandboxMode_1


Introduction_EventScript_SetupSandboxModeComplete::
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_0
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_1
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_2
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_3
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_4
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_5
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_6
	playse SE_M_FLY
	warpwhitefade MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 13
	return


Introduction_EventScript_Startup_Text_0:
	.string "Welcome to Emerald Battle Revolution!$"

Introduction_EventScript_Startup_Text_1:
	.string "Created by Damon Murdoch\n(Twitter: SirScrubbington)$"

Introduction_EventScript_Startup_Text_2:
	.string "Based on RHHideout's\n"
	.string "PokeEmerald-Expanded Project$"

Introduction_EventScript_Startup_Text_3:
	.string "Current Version: 1.3.3$"

Introduction_EventScript_Startup_Text_4:
	.string "For more information, please visit our\n"
	.string "website:\l"
	.string "https://www.dragapult.xyz?ebr$"

Introduction_EventScript_AskSandboxMode_Text_0:
	.string "Would you like to start the game in\n"
	.string "sandbox mode? The game will be started\l"
	.string "at the Battle Frontier, with the game\l"
	.string "completed up until after the Elite Four.$"

Introduction_EventScript_AskSandboxMode_Text_1:
	.string "You will be given ¥500,000 to start, as\n"
	.string "well as a Swampert and Talonflame for\l"
	.string "using important HMs.$"

Introduction_EventScript_AskSandboxMode_Text_2:
	.string "All key items except for the SS Ticket\n"
	.string "will be available for purchase in the\l"
	.string "Battle Frontier Underground.$"

Introduction_EventScript_AskSandboxMode_Text_3:
	.string "Please note, the Sandbox Mode feature\n"
	.string "is still being developed - you may\l"
	.string "encounter some minor issues while\l"
	.string "playing.$"

Introduction_EventScript_AskSandboxMode_Text_4:
	.string "Would you like to start the game in\n"
	.string "sandbox mode?$"

Introduction_EventScript_AskSandboxMode_Text_5:
	.string "Sandbox mode selected. Configuring ...$"

Introduction_EventScript_AskSandboxMode_Text_6:
	.string "The game will be played normally. Enjoy!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_0:
	.string "All done!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_1:
	.string "If you want to customise your Battle\n"
	.string "Frontier Experience, speak to the\l"
	.string "clerks near the counter at any of the\l"
	.string "Battle Facilities - They can help you\l"
	.string "change music, opponent team\l"
	.string "generation, allowed Pokemon formes, and\l"
	.string "more!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_2:
	.string "Mega Evolutions, Gigantamax Formes,\n"
	.string "and Z-Moves will all be allowed by\l"
	.string "default - But you may choose to turn\l"
	.string "them off manually.$"

Introduction_EventScript_SetupSandboxModeComplete_Text_3:
	.string "You will also face new,\n"
	.string "randomly-generated Pokemon in the\l"
	.string "Battle Frontier by default - However,\l"
	.string "you may swap back to the original\l"
	.string "Battle Frontier sets at any time.$"

Introduction_EventScript_SetupSandboxModeComplete_Text_4:
	.string "If you aren't sure where to start,\n"
	.string "consider heading right to the all-new\l"
	.string "BATTLE FRONTIER UNDERGROUND where\l"
	.string "you can put together your own team to\l"
	.string "battle with, or buy a pre-made team\l"
	.string "from the BATTLE SPOT LOBBY!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_5:
	.string "Otherwise, you can head left to the\n"
	.string "BATTLE FACTORY to get right into the\l"
	.string "action!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_6:
	.string "Good luck on your new adventure!$"