#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H

// Moves which should only be selected in doubles
#define BFG_MOVE_DOUBLES_ONLY \
    MOVE_FOLLOW_ME, \
    MOVE_WIDE_GUARD, \
    MOVE_RAGE_POWDER, \
    MOVE_AFTER_YOU, \
    MOVE_QUICK_GUARD, \
    MOVE_ALLY_SWITCH, \
    MOVE_HEAL_PULSE, \
    MOVE_QUASH, \
    MOVE_MAT_BLOCK, \
    MOVE_CRAFTY_SHIELD, \
    MOVE_FLOWER_SHIELD, \
    MOVE_SPOTLIGHT, \
    MOVE_INSTRUCT, \
    MOVE_DECORATE

enum {
    BFG_SPREAD_TYPE_OFFENSIVE,
    BFG_SPREAD_TYPE_DEFENSIVE,
};

enum {
    BFG_SPREAD_CATEGORY_PHYSICAL,
    BFG_SPREAD_CATEGORY_SPECIAL, 
    BFG_SPREAD_CATEGORY_MIXED
};

enum {
    BFG_MOVE_SELECT_DEFAULT,                 // Default moves (Only replace if required)
    BFG_MOVE_SELECT_RANDOM,                  // Select moves completely randomly (From Level Up / Teachable Moves)
    BFG_MOVE_SELECT_FILTERED,
    BFG_MOVE_SELECT_FILTERED_ATTACKS_ONLY,
    BFG_MOVE_SELECT_VARIABLE                 // Switch based on VAR()
};

enum {
    BFG_MOVE_TRY_REPLACE_SLOT_1,
    BFG_MOVE_TRY_REPLACE_SLOT_2,
    BFG_MOVE_TRY_REPLACE_SLOT_3,
    BFG_MOVE_TRY_REPLACE_SLOT_4,
    BFG_MOVE_TRY_REPLACE_FAILED
}

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_GENERATOR_H
