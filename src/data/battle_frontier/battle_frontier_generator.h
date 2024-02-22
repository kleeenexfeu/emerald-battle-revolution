const bool8 gBattleFrontierMoveAlwaysSelectSingles[MOVES_COUNT] = 
{
	// Misc. Moves
	[MOVE_SPORE] = TRUE,
    [MOVE_FAKE_OUT] = TRUE,
	// Unique Protecting Moves
    [MOVE_BANEFUL_BUNKER] = TRUE,
    [MOVE_BURNING_BULWARK] = TRUE,
    [MOVE_KINGS_SHIELD] = TRUE,
    [MOVE_OBSTRUCT] = TRUE,
    [MOVE_SILK_TRAP] = TRUE,
    [MOVE_SPIKY_SHIELD] = TRUE,
};

const bool8 gBattleFrontierMoveAlwaysSelectDoubles[MOVES_COUNT] = 
{
	// Misc. Moves
	[MOVE_SPORE] = TRUE,
    [MOVE_FAKE_OUT] = TRUE,
	// Unique Protecting Moves
    [MOVE_BANEFUL_BUNKER] = TRUE,
    [MOVE_BURNING_BULWARK] = TRUE,
    [MOVE_KINGS_SHIELD] = TRUE,
    [MOVE_OBSTRUCT] = TRUE,
    [MOVE_SILK_TRAP] = TRUE,
    [MOVE_SPIKY_SHIELD] = TRUE,
	// Doubles-Bonus Moves
	// [MOVE_TAILWIND] = TRUE, 
	// [MOVE_ICY_WIND] = TRUE, 
	// [MOVE_TRICK_ROOM] = TRUE,
	[MOVE_POLLEN_PUFF] = TRUE, 
    // Doubles-Exclusive Moves
    [MOVE_INSTRUCT] = TRUE,
    [MOVE_FOLLOW_ME] = TRUE,
    [MOVE_WIDE_GUARD] = TRUE,
    [MOVE_RAGE_POWDER] = TRUE,
    [MOVE_QUICK_GUARD] = TRUE,

};

const bool8 gBattleFrontierMoveNeverSelectSingles[MOVES_COUNT] = 
{
	// Misc. Moves
	[MOVE_SNORE] = TRUE,
    [MOVE_SPIT_UP] = TRUE,
    [MOVE_REVERSAL] = TRUE,
    [MOVE_DREAM_EATER] = TRUE,
    [MOVE_LAST_RESORT] = TRUE,
    [MOVE_FOCUS_PUNCH] = TRUE,
    [MOVE_SYNCHRONOISE] = TRUE,
    [MOVE_STORED_POWER] = TRUE,
    [MOVE_HIDDEN_POWER] = TRUE,
    [MOVE_DYNAMIC_PUNCH] = TRUE,
    [MOVE_TERRAIN_PULSE] = TRUE,
	// Pseudoboosting Moves
	[MOVE_ANCIENT_POWER] = TRUE,
	[MOVE_OMINOUS_WIND] = TRUE,
	[MOVE_SILVER_WIND] = TRUE,
	// Recharge Moves
    [MOVE_BLAST_BURN] = TRUE,
    [MOVE_ETERNABEAM] = TRUE,
    [MOVE_FRENZY_PLANT] = TRUE,
    [MOVE_GIGA_IMPACT] = TRUE,
    [MOVE_HYDRO_CANNON] = TRUE,
    [MOVE_HYPER_BEAM] = TRUE,
    [MOVE_METEOR_ASSAULT] = TRUE,
    [MOVE_PRISMATIC_LASER] = TRUE,
    [MOVE_ROAR_OF_TIME] = TRUE,
    [MOVE_ROCK_WRECKER] = TRUE,
	// Self-Destructing Moves
    [MOVE_MISTY_EXPLOSION] = TRUE,
    [MOVE_SELF_DESTRUCT] = TRUE,
    [MOVE_EXPLOSION] = TRUE,
	// Charging Moves
	[MOVE_BOUNCE] = TRUE,
    [MOVE_DIG] = TRUE,
    [MOVE_DIVE] = TRUE,
    [MOVE_FLY] = TRUE,
	[MOVE_FREEZE_SHOCK] = TRUE,
	[MOVE_ICE_BURN] = TRUE,
	[MOVE_RAZOR_WIND] = TRUE,
	[MOVE_SKULL_BASH] = TRUE,
    [MOVE_SOLAR_BEAM] = TRUE,
    [MOVE_SOLAR_BLADE] = TRUE,
    // Countering Moves
    [MOVE_BIDE] = TRUE,
    [MOVE_COMEUPPANCE] = TRUE,
    [MOVE_COUNTER] = TRUE,
    [MOVE_METAL_BURST] = TRUE,
    [MOVE_MIRROR_COAT] = TRUE,
    // Doubles-Exclusive Moves
    [MOVE_FOLLOW_ME] = TRUE,
    [MOVE_WIDE_GUARD] = TRUE,
    [MOVE_RAGE_POWDER] = TRUE,
    [MOVE_QUICK_GUARD] = TRUE,
    [MOVE_CRAFTY_SHIELD] = TRUE,
    [MOVE_INSTRUCT] = TRUE,
};

const bool8 gBattleFrontierMoveNeverSelectDoubles[MOVES_COUNT] = 
{
	// Misc. Moves
	[MOVE_SNORE] = TRUE,
    [MOVE_SPIT_UP] = TRUE,
    [MOVE_REVERSAL] = TRUE,
    [MOVE_DREAM_EATER] = TRUE,
    [MOVE_LAST_RESORT] = TRUE,
    [MOVE_FOCUS_PUNCH] = TRUE,
    [MOVE_SYNCHRONOISE] = TRUE,
    [MOVE_STORED_POWER] = TRUE,
    [MOVE_HIDDEN_POWER] = TRUE,
    [MOVE_DYNAMIC_PUNCH] = TRUE,
    [MOVE_TERRAIN_PULSE] = TRUE,
	// Pseudoboosting Moves
	[MOVE_ANCIENT_POWER] = TRUE,
	[MOVE_OMINOUS_WIND] = TRUE,
	[MOVE_SILVER_WIND] = TRUE,
	// Recharge Moves
    [MOVE_BLAST_BURN] = TRUE,
    [MOVE_ETERNABEAM] = TRUE,
    [MOVE_FRENZY_PLANT] = TRUE,
    [MOVE_GIGA_IMPACT] = TRUE,
    [MOVE_HYDRO_CANNON] = TRUE,
    [MOVE_HYPER_BEAM] = TRUE,
    [MOVE_METEOR_ASSAULT] = TRUE,
    [MOVE_PRISMATIC_LASER] = TRUE,
    [MOVE_ROAR_OF_TIME] = TRUE,
    [MOVE_ROCK_WRECKER] = TRUE,
	// Self-Destructing Moves
    [MOVE_MISTY_EXPLOSION] = TRUE,
    [MOVE_SELF_DESTRUCT] = TRUE,
    [MOVE_EXPLOSION] = TRUE,
	// Charging Moves
	[MOVE_BOUNCE] = TRUE,
    [MOVE_DIG] = TRUE,
    [MOVE_DIVE] = TRUE,
    [MOVE_FLY] = TRUE,
	[MOVE_FREEZE_SHOCK] = TRUE,
	[MOVE_ICE_BURN] = TRUE,
	[MOVE_RAZOR_WIND] = TRUE,
	[MOVE_SKULL_BASH] = TRUE,
    [MOVE_SOLAR_BEAM] = TRUE,
    [MOVE_SOLAR_BLADE] = TRUE,
    // Countering Moves
    [MOVE_BIDE] = TRUE,
    [MOVE_COMEUPPANCE] = TRUE,
    [MOVE_COUNTER] = TRUE,
    [MOVE_METAL_BURST] = TRUE,
    [MOVE_MIRROR_COAT] = TRUE,
    // Thrashing Moves
    [MOVE_THRASH] = TRUE,
    [MOVE_OUTRAGE] = TRUE,
    [MOVE_PETAL_DANCE] = TRUE,
};

// Status moves which are allowed to be selected, 
// if 'BFG_MOVE_USE_STATUS_ALLOW_LIST' is set to true
const bool8 gBattleFrontierMoveStatusAllowSelect[MOVES_COUNT] = 
{
    [MOVE_WHIRLWIND] = TRUE,
    [MOVE_ROAR] = TRUE,
    [MOVE_SING] = TRUE,
    [MOVE_SUPERSONIC] = TRUE,
    [MOVE_DISABLE] = TRUE,
    [MOVE_LEECH_SEED] = TRUE,
    [MOVE_POISON_POWDER] = TRUE,
    [MOVE_STUN_SPORE] = TRUE,
    [MOVE_SLEEP_POWDER] = TRUE,
    [MOVE_TOXIC] = TRUE,
    [MOVE_HYPNOSIS] = TRUE,
    [MOVE_TELEPORT] = TRUE,
    [MOVE_DOUBLE_TEAM] = TRUE,
    [MOVE_RECOVER] = TRUE,
    [MOVE_MINIMIZE] = TRUE,
    [MOVE_CONFUSE_RAY] = TRUE,
    [MOVE_LIGHT_SCREEN] = TRUE,
    [MOVE_HAZE] = TRUE,
    [MOVE_REFLECT] = TRUE,
    [MOVE_FOCUS_ENERGY] = TRUE,
    [MOVE_SOFT_BOILED] = TRUE,
    [MOVE_GLARE] = TRUE,
    [MOVE_LOVELY_KISS] = TRUE,
    [MOVE_TRANSFORM] = TRUE,
    [MOVE_SPORE] = TRUE,
    [MOVE_REST] = TRUE,
    [MOVE_SUBSTITUTE] = TRUE,
    [MOVE_FORESIGHT] = TRUE,
    [MOVE_DESTINY_BOND] = TRUE,
    [MOVE_PERISH_SONG] = TRUE,
    // [MOVE_SANDSTORM] = TRUE,
    [MOVE_SWAGGER] = TRUE,
    [MOVE_MEAN_LOOK] = TRUE,
    [MOVE_ATTRACT] = TRUE,
    [MOVE_HEAL_BELL] = TRUE,
    [MOVE_SAFEGUARD] = TRUE,
    [MOVE_PAIN_SPLIT] = TRUE,
    [MOVE_ENCORE] = TRUE,
    [MOVE_MORNING_SUN] = TRUE,
    [MOVE_SYNTHESIS] = TRUE,
    [MOVE_MOONLIGHT] = TRUE,
    // [MOVE_RAIN_DANCE] = TRUE,
    // [MOVE_SUNNY_DAY] = TRUE,
    [MOVE_MIRROR_COAT] = TRUE,
    [MOVE_STOCKPILE] = TRUE,
    // [MOVE_HAIL] = TRUE,
    [MOVE_TORMENT] = TRUE,
    [MOVE_FLATTER] = TRUE,
    [MOVE_WILL_O_WISP] = TRUE,
    [MOVE_TAUNT] = TRUE,
    [MOVE_HELPING_HAND] = TRUE,
    [MOVE_TRICK] = TRUE,
    [MOVE_ROLE_PLAY] = TRUE,
    [MOVE_WISH] = TRUE,
    [MOVE_INGRAIN] = TRUE,
    [MOVE_RECYCLE] = TRUE,
    [MOVE_YAWN] = TRUE,
    [MOVE_SKILL_SWAP] = TRUE,
    [MOVE_IMPRISON] = TRUE,
    [MOVE_REFRESH] = TRUE,
    [MOVE_GRUDGE] = TRUE,
    [MOVE_SNATCH] = TRUE,
    [MOVE_BLOCK] = TRUE,
    [MOVE_ROOST] = TRUE,
    [MOVE_GRAVITY] = TRUE,
    [MOVE_MIRACLE_EYE] = TRUE,
    [MOVE_TAILWIND] = TRUE,
    [MOVE_SWITCHEROO] = TRUE,
    [MOVE_DEFOG] = TRUE,
    [MOVE_TRICK_ROOM] = TRUE,
    [MOVE_HEAL_ORDER] = TRUE,
    [MOVE_GUARD_SPLIT] = TRUE,
    [MOVE_POWER_SPLIT] = TRUE,
    [MOVE_WONDER_ROOM] = TRUE,
    [MOVE_MAGIC_ROOM] = TRUE,
    [MOVE_SOAK] = TRUE,
    [MOVE_SIMPLE_BEAM] = TRUE,
    [MOVE_ENTRAINMENT] = TRUE,
    [MOVE_ROTOTILLER] = TRUE,
    [MOVE_TRICK_OR_TREAT] = TRUE,
    [MOVE_ION_DELUGE] = TRUE,
    [MOVE_FORESTS_CURSE] = TRUE,
    [MOVE_PARTING_SHOT] = TRUE,
    [MOVE_TOPSY_TURVY] = TRUE,
    // [MOVE_GRASSY_TERRAIN] = TRUE,
    // [MOVE_MISTY_TERRAIN] = TRUE,
    [MOVE_ELECTRIFY] = TRUE,
    [MOVE_FAIRY_LOCK] = TRUE,
    [MOVE_KINGS_SHIELD] = TRUE,
    [MOVE_SPIKY_SHIELD] = TRUE,
    [MOVE_POWDER] = TRUE,
    // [MOVE_ELECTRIC_TERRAIN] = TRUE,
    [MOVE_SHORE_UP] = TRUE,
    [MOVE_BANEFUL_BUNKER] = TRUE,
    [MOVE_FLORAL_HEALING] = TRUE,
    [MOVE_STRENGTH_SAP] = TRUE,
    // [MOVE_PSYCHIC_TERRAIN] = TRUE,
    [MOVE_SPEED_SWAP] = TRUE,
    [MOVE_LIFE_DEW] = TRUE,
    [MOVE_OBSTRUCT] = TRUE,
    [MOVE_LUNAR_BLESSING] = TRUE,
    [MOVE_REVIVAL_BLESSING] = TRUE,
    [MOVE_DOODLE] = TRUE,
    // [MOVE_SNOWSCAPE] = TRUE,
};

// Moves which should not be counted towards their type counter
// This, for example, allows Fake Out and Return to be picked on the same set.
const bool8 gBattleFrontierMoveIgnoreTypeCount[MOVES_COUNT] = 
{
    // Priority Attacks
    [MOVE_FAKE_OUT] = TRUE, 
    [MOVE_UPPER_HAND] = TRUE, 
    [MOVE_EXTREME_SPEED] = TRUE, 
    [MOVE_FEINT] = TRUE,
    [MOVE_FIRST_IMPRESSION] = TRUE, 
    [MOVE_ACCELEROCK] = TRUE, 
    [MOVE_AQUA_JET] = TRUE, 
    [MOVE_BULLET_PUNCH] = TRUE, 
    [MOVE_GRASSY_GLIDE] = TRUE, 
    [MOVE_ICE_SHARD] = TRUE, 
    [MOVE_JET_PUNCH] = TRUE, 
    [MOVE_MACH_PUNCH] = TRUE, 
    [MOVE_QUICK_ATTACK] = TRUE, 
    [MOVE_SHADOW_SNEAK] = TRUE, 
    [MOVE_SUCKER_PUNCH] = TRUE, 
    [MOVE_THUNDERCLAP] = TRUE, 
    [MOVE_VACUUM_WAVE] = TRUE, 
    [MOVE_WATER_SHURIKEN] = TRUE, 
    // Counter Attacks
    [MOVE_BIDE] = TRUE, 
    [MOVE_COMEUPPANCE] = TRUE, 
    [MOVE_COUNTER] = TRUE, 
    [MOVE_METAL_BURST] = TRUE, 
    [MOVE_MIRROR_COAT] = TRUE,
};
