#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// *** GENERAL ***
#define BFG_FLAG_FRONTIER_GENERATOR FLAG_UNUSED_0x020 // Flag to enable or disable random generator

#define BFG_RANDOM_RANGE_FIXED FALSE    // Fixed value for RANDOM_RANGE()
#define BFG_RANDOM_CHANCE_FIXED FALSE   // Fixed value for RANDOM_CHANCE()
#define BFG_RANDOM_BOOL_FIXED FALSE     // Fixed value for RANDOM_BOOL()

#define BFG_RANDOM_OFFSET_MIN 0        // Min. Value for RANDOM_OFFSET()
#define BFG_RANDOM_OFFSET_MAX 0        // Max. Value for RANDOM_OFFSET()

// *** BASE STATS ***

#define BFG_IV_MIN_BST_3 180
#define BFG_IV_MIN_BST_6 225
#define BFG_IV_MIN_BST_9 270
#define BFG_IV_MIN_BST_12 315
#define BFG_IV_MIN_BST_15 360
#define BFG_IV_MIN_BST_18 405
#define BFG_IV_MIN_BST_21 450
#define BFG_IV_MIN_BST_MAX 495

#define BFG_IV_MAX_BST_3 405
#define BFG_IV_MAX_BST_6 450
#define BFG_IV_MAX_BST_9 495
#define BFG_IV_MAX_BST_12 540
#define BFG_IV_MAX_BST_15 585
#define BFG_IV_MAX_BST_18 630
#define BFG_IV_MAX_BST_21 675
#define BFG_IV_MAX_BST_MAX 720

// *** SPECIES ***
#define BFG_TRAINER_CLASS_MON_LIMIT 0x200   // Maximum number of mons available per trainer class

#define BFG_LVL_50_ALLOW_BANNED_SPECIES FALSE   // Allow banned species (e.g. Kyogre,Groudon) in Frontier Lvl. 50 Mode
#define BFG_LVL_OPEN_ALLOW_BANNED_SPECIES TRUE  // Allow banned species (e.g. Kyogre,Groudon) in Frontier Open Level Mode
#define BFG_LVL_TENT_ALLOW_BANNED_SPECIES FALSE // Allow banned species (e.g. Kyogre,Groudon) in Battle Tent

#define BFG_FORME_CHANCE_PIKACHU 3
#define BFG_FORME_CHANCE_PICHU 2
#define BFG_FORME_CHANCE_TAUROS_PALDEA 2
#define BFG_FORME_CHANCE_UNOWN 2
#define BFG_FORME_CHANCE_CASTFORM 2
#define BFG_FORME_CHANCE_DEOXYS 2
#define BFG_FORME_CHANCE_BURMY_WORMADAM 2
#define BFG_FORME_CHANCE_SHELLOS_GASTRODON 2
#define BFG_FORME_CHANCE_ROTOM 1
#define BFG_FORME_CHANCE_DIALGA 2
#define BFG_FORME_CHANCE_PALKIA 2
#define BFG_FORME_CHANCE_GIRATINA 2
#define BFG_FORME_CHANCE_SHAYMIN 2
#define BFG_FORME_CHANCE_ARCEUS 2
#define BFG_FORME_CHANCE_BASCULIN 2
#define BFG_FORME_CHANCE_DEERLING_SAWSBUCK 2
#define BFG_FORME_CHANCE_TORNADUS_THERIAN 2
#define BFG_FORME_CHANCE_THUNDURUS_THERIAN 2
#define BFG_FORME_CHANCE_LANDORUS_THERIAN 2
#define BFG_FORME_CHANCE_ENAMORUS_THERIAN 2
#define BFG_FORME_CHANCE_KYUREM 2
#define BFG_FORME_CHANCE_KELDEO 2
#define BFG_FORME_CHANCE_GENESECT 2
#define BFG_FORME_CHANCE_GRENINJA 2
#define BFG_FORME_CHANCE_VIVILLON 2
#define BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES 2
#define BFG_FORME_CHANCE_FURFROU 2
#define BFG_FORME_CHANCE_MEOWSTIC 2
#define BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST 2
#define BFG_FORME_CHANCE_ZYGARDE 2
#define BFG_FORME_CHANCE_HOOPA 2
#define BFG_FORME_CHANCE_ORICORIO 2
#define BFG_FORME_CHANCE_ROCKRUFF_LYCANROC 2
#define BFG_FORME_CHANCE_SILVALLY 2
#define BFG_FORME_CHANCE_MINIOR 2
#define BFG_FORME_CHANCE_NECROZMA 2
#define BFG_FORME_CHANCE_MAGEARNA 2
#define BFG_FORME_CHANCE_ALCREMIE 2
#define BFG_FORME_CHANCE_INDEEDEE 2
#define BFG_FORME_CHANCE_URSHIFU 2
#define BFG_FORME_CHANCE_CALYREX 2
#define BFG_FORME_CHANCE_BASCULEGION 2
#define BFG_FORME_CHANCE_OINKOLOGNE 2
#define BFG_FORME_CHANCE_MAUSHOLD 2
#define BFG_FORME_CHANCE_SQUAWKABILLY 2
#define BFG_FORME_CHANCE_TATSUGIRI 2
#define BFG_FORME_CHANCE_DUDUNSPARCE 2
#define BFG_FORME_CHANCE_GIMMIGHOUL 2
#define BFG_FORME_CHANCE_OGERPON 2
#define BFG_FORME_CHANCE_URSALUNA 2

#define BFG_FORME_CHANCE_PRIMAL 1
#define BFG_FORME_CHANCE_MEGA 1

#define BFG_ZMOVE_CHANCE_PIKANIUM_Z 4
#define BFG_ZMOVE_CHANCE_EEVIUM_Z 2
#define BFG_ZMOVE_CHANCE_SNORLIUM_Z 2
#define BFG_ZMOVE_CHANCE_MEWNIUM_Z 2
#define BFG_ZMOVE_CHANCE_DECIDIUM_Z 2
#define BFG_ZMOVE_CHANCE_INCINIUM_Z 2
#define BFG_ZMOVE_CHANCE_PRIMARIUM_Z 2
#define BFG_ZMOVE_CHANCE_LYCANIUM_Z 2
#define BFG_ZMOVE_CHANCE_MIMIKIUM_Z 2
#define BFG_ZMOVE_CHANCE_KOMMONIUM_Z 2
#define BFG_ZMOVE_CHANCE_TAPUNIUM_Z 2
#define BFG_ZMOVE_CHANCE_SOLGANIUM_Z 2
#define BFG_ZMOVE_CHANCE_LUNALIUM_Z 2
#define BFG_ZMOVE_CHANCE_MARSHADIUM_Z 2
#define BFG_ZMOVE_CHANCE_ALORAICHIUM_Z 2
#define BFG_ZMOVE_CHANCE_PIKASHUNIUM_Z 4
#define BFG_ZMOVE_CHANCE_ULTRANECROZIUM_Z 2

#define BFG_ZMOVE_CHANCE_ARCEUS 2 // Use Z-Crystal instead of Plate
#define BFG_ZMOVE_CHANCE_SILVALLY 2 // Use Z-Crystal instead of Memory
#define BFG_ZMOVE_CHANCE_NECROZMA 2 // Use Solganium/Lunalium on Necrozma formes

// Allow custom species banlists
#define BFG_USE_CUSTOM_BANNED_SPECIES TRUE
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE

// Custom list of common banned species
#define BFG_COMMON_CUSTOM_BANNED_SPECIES \
    SPECIES_SHEDINJA, \
    SPECIES_SMEARGLE, \
    SPECIES_UNOWN, \
    SPECIES_NONE,

// Custom list of frontier lvl. 50 banned species
#define BFG_LVL_50_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of frontier open lvl. banned species
#define BFG_LVL_OPEN_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of battle tent banned species
#define BFG_LVL_TENT_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

#endif

// *** STATS ***
#define BFG_STAT_SELECT_RANDOM FALSE
#if BFG_STAT_SELECT_RANDOM == FALSE

#define BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD FALSE   // Prioritise atk/spatk attack over def/spdef
#define BFG_PRIORITISE_ATK_SPA_OVER_SPE FALSE       // Prioritise atk/spa over speed

#define BFG_EV_INVEST_HIGHER_STATS TRUE // Invest EVs in highest 2 stats
#define BFG_EV_HP_OFFSET 30             // Increase chances of investing in HP

#endif

// *** ABILITIES ***
#define BFG_HA_SELECTION_CHANCE 4 // Hidden ability selection chance (5 = 1/5)

// *** MOVES *** 

// Selection method which will be used for selecting moves
// The selection methods are defined as follows:

// BFG_MOVE_SELECT_DEFAULT: Use default moves at level
// BFG_MOVE_SELECT_RANDOM: Randomly select from available moves

#define BFG_MOVE_SELECTION_METHOD BFG_MOVE_SELECT_RATING
#define BFG_VAR_MOVE_SELECTION_METHOD 0 // Used if BFG_MOVE_SELECTION_METHOD is set to 'BFG_MOVE_SELECT_VARIABLE'

#define BFG_MOVE_SELECT_FAILURE_LIMIT 3 // Maximum times move selection can fail
#define BFG_MOVE_SELECT_MINIMUM 1       // Minumum number of moves allowed

#define BFG_MOVE_RATING_LIST_SIZE_ATTACK 0x20
#define BFG_MOVE_RATING_LIST_SIZE_STATUS 0x20

#define BFG_MOVE_ALLOW_LEVEL_UP TRUE    // Allow level-up moves to be used
#define BFG_MOVE_ALLOW_TEACHABLE TRUE   // Allow teachable moves to be used

// If this is set to true, the move lookup table
// 'gBattleFrontierMoveStatusAllowSelect' will be used
#define BFG_MOVE_USE_STATUS_ALLOW_LIST TRUE

#define BFG_MOVE_RATING_DEFAULT 0         // Default Rating
#define BFG_MOVE_STAB_MODIFIER 50    // +x to rating for same-type-attack-bonus
#define BFG_MOVE_ABILITY_MODIFIER 80      // +x to rating for ability synergy moves

// *** ITEMS ***

// Number of times item can fail to be found
// before 'ITEM_NONE' will be returned
#define BFG_ITEM_SELECT_FAILURE_LIMIT 4

// Set any of these values to 32 or above to disable them entirely

#define BFG_ITEM_IV_ALLOW_MEGA 31   // Min. IVs required for Mega Evolution
#define BFG_ITEM_IV_ALLOW_ZMOVE 31  // Min. IVs required for Z-Moves
#define BFG_ITEM_IV_ALLOW_GMAX 31   // Min. IVs required for Gigantamax

#define BFG_NO_ITEM_SELECTION_CHANCE FALSE
#if BFG_NO_ITEM_SELECTION_CHANCE != 1

// Moves required for certain items to be eligible
#define BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED 2
#define BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED 3
#define BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED 4
#define BFG_ITEM_TYPE_ITEM_TYPE_MOVES_REQUIRED 2
#define BFG_ITEM_TYPE_ITEM_STAB_REQUIRED TRUE
#define BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED 2
#define BFG_ITEM_FLAME_ORB_MOVES_REQUIRED 1

// Common Items
#define BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE 3
#define BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE 2
#define BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE 2
#define BFG_ITEM_LIFE_ORB_SELECTION_CHANCE 3
#define BFG_ITEM_EVIOLITE_SELECTION_CHANCE 2

// Choice Items
#define BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE 2
#define BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE 2
#define BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE 2

// Ability-Specific Items
#define BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE 4
#define BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE 4
#define BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE 2
#define BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE 2
#define BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE 2
#define BFG_ITEM_FLAME_ORB_SELECTION_CHANCE 2

// Move-Specific Items
#define BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE 4  // numInaccurate
#define BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE 3  // numPunch
#define BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE 2    // hasRest
#define BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE 2    // numSound
#define BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE 3     // numStatus
#define BFG_ITEM_LOADED_DICE_SELECTION_CHANCE 3     // numMultiHit
#define BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE 3      // numScreens
#define BFG_ITEM_WHITE_HERB_SELECTION_CHANCE 4      // numStatDrop
#define BFG_ITEM_EJECT_PACK_SELECTION_CHANCE 4      // numStatDrop
#define BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE 4      // numCritModifier
#define BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE 4      // numCritModifier
#define BFG_ITEM_POWER_HERB_SELECTION_CHANCE 2      // hasMultiTurn
#define BFG_ITEM_WIDE_LENS_SELECTION_CHANCE 4       // numInaccurate

// Species-specific items
#define BFG_ITEM_LIGHT_BALL_SELECTION_CHANCE 1          // Pikachu
#define BFG_ITEM_LEEK_SELECTION_CHANCE 1                // Farfetcd/Galar/Sirfetchd
#define BFG_ITEM_THICK_CLUB_SELECTION_CHANCE 1          // Marowak/Alola
#define BFG_ITEM_LUCKY_PUNCH_SELECTION_CHANCE FALSE     // Chansey
#define BFG_ITEM_DITTO_POWDER_SELECTION_CHANCE FALSE    // Ditto
#define BFG_ITEM_DEEP_SEA_SCALE_SELECTION_CHANCE FALSE  // Gorebyss
#define BFG_ITEM_DEEP_SEA_TOOTH_SELECTION_CHANCE FALSE  // Huntail
#define BFG_ITEM_SOUL_DEW_SELECTION_CHANCE 4            // Latias/Latios

// Other Items
#define BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE 0  // Non Functional
#define BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE 0  // Non Functional
#define BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE 2

// Type-Specific Items
#define BFG_ITEM_GEM_SELECTION_CHANCE 4
#define BFG_ITEM_TYPE_SELECTION_CHANCE 4
#define BFG_ITEM_ZMOVE_SELECTION_CHANCE 0 // Excludes signature Z-Moves

// Common Berries
#define BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_LUM_BERRY_SELECTION_CHANCE 4

// Resist / Weakness Berries
#define BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE 2
#define BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE 4

#define BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE 8
#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE 4

// Custom list of items which can be selected, in
// the event that the pokemon has the move 'recycle'.
// A random item from this list will be selected, if
// none of the above berry flags are checked.
#define BFG_RECYCLE_ITEMS_LIST \
    ITEM_MARANGA_BERRY, \
    ITEM_CUSTAP_BERRY, \
    ITEM_JABOCA_BERRY, \
    ITEM_LANSAT_BERRY, \
    ITEM_STARF_BERRY, \
    ITEM_MICLE_BERRY, \
    ITEM_ROWAP_BERRY, \
    ITEM_CHILAN_BERRY, \
    ITEM_KEE_BERRY

// Custom list of items which can be selected, in 
// addition to the flags set above. A random item 
// from this list will be chosen if none of the 
// above flags are matched.
#define BFG_CUSTOM_ITEMS_LIST \
    BFG_RECYCLE_ITEMS_LIST, \
    ITEM_BRIGHT_POWDER, \
    ITEM_ROCKY_HELMET, \
    ITEM_MIRROR_HERB, \
    ITEM_FOCUS_BAND, \
    ITEM_QUICK_CLAW, \
    ITEM_KINGS_ROCK, \
    ITEM_SHELL_BELL, \
    ITEM_LEFTOVERS, \
    ITEM_RED_CARD

// TODO items
// ITEM_PROTECTIVE_PADS
// ITEM_ABILITY_SHIELD
// ITEM_ROCKY_HELMET
// ITEM_CLEAR_AMULET
// ITEM_COVERT_CLOAK
// ITEM_EJECT_BUTTON
// ITEM_RED_CARD

#endif // BFG_NO_ITEM_SELECTION_CHANCE != 1
#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
