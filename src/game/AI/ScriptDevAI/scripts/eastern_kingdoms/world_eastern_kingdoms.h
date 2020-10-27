
#ifndef DEF_WORLD_MAP_EK_SCRIPTS_H
#define DEF_WORLD_MAP_EK_SCRIPTS_H

enum
{
    // TYPE_SHADE_OF_HEADLESS_HORSEMAN = 1000, // High number against collisions

    // Quest 6403
    NPC_JONATHAN                = 466,
    NPC_WRYNN                   = 1747,
    NPC_BOLVAR                  = 1748,
    NPC_PRESTOR                 = 1749,
    NPC_WINDSOR                 = 12580,
};

enum BFTDP_NPCs
{
    // Attacking forces
    NPC_DREADKNIGHT             = 19288,
    NPC_INVADING_FELGUARD       = 19284,
    NPC_INVADING_VOIDWALKER     = 19287,
    NPC_INVADING_INFERNAL       = 19285,
    NPC_PORTAL_HOUND            = 19311,
    NPC_FELGUARD_LIEUTENANT     = 19391,
    NPC_INVADING_FEL_STALKER    = 19286,
    NPC_INVADING_ANGUISHER      = 19290,

    // Defending forces
    NPC_ARGENT_GUARDIAN         = 19322,
    NPC_ARGENT_BOWMAN           = 19365,
    NPC_ARGENT_PROTECTOR        = 19320,
    NPC_ARGENT_HUNTER           = 19366,
    NPC_NETHERGARDE_ADVISOR     = 19566,
    NPC_AGENT_PROUDWELL         = 19942,
    NPC_WATCHER_THERONUS        = 19567,
    NPC_SILVERMOON_MAGISTER     = 19006,
    NPC_LORD_MARSHAL_RAYNOR     = 19385,
    NPC_STORMWIND_MARSHAL       = 19386,
    NPC_JUSTINIUS_THE_HARBINGER = 18966,
    NPC_AZUREMYST_VINDICATOR    = 19407,
    NPC_MELGROMM_HIGHMOUNTAIN   = 18969,
    NPC_THUNDER_BLUFF_HUNTSMAN  = 19406,
    NPC_GNOMEREGAN_CONJUROR     = 19007,
};

enum BFTDP_Spells
{
    SPELL_SUMMON_INFERNALING_PORTAL_HOUND = 33708
};

enum BFTDP_Texts
{
    LMR_SPAWN           = -1015080,
    LMR_RANDOM_TEXT_1   = -1015081,
    LMR_RANDOM_TEXT_2   = -1015082,
    LMR_RANDOM_TEXT_3   = -1015083,
    LMR_RANDOM_TEXT_4   = -1015084,
    LMR_RANDOM_TEXT_5   = -1015085,
    LMR_DESPAWN         = -1015086,

    JTH_SPAWN           = -1015087,
    JTH_RANDOM_TEXT_1   = -1015088,
    JTH_RANDOM_TEXT_2   = -1015089,
    JTH_RANDOM_TEXT_3   = -1015090,
    JTH_DESPAWN         = -1015091,

    MH_SPAWN            = -1015092,
    MH_RANDOM_TEXT_1    = -1015093,
    MH_RANDOM_TEXT_2    = -1015094,
    MH_RANDOM_TEXT_3    = -1015095,
    MH_RANDOM_TEXT_4    = -1015096,
    MH_RANDOM_TEXT_5    = -1015097,
    MH_RANDOM_TEXT_6    = -1015098,
    MH_DESPAWN          = -1015099,
};

enum BFTDP_Events
{
    EVENT_SPAWN_DREADKNIGHT = 1,
    EVENT_SPAWN_FELGUARD_LIEUTENANT = 2,
    EVENT_SPAWN = 3,
    EVENT_SPAWN_BOSS = 4,
    EVENT_REINFORCEMENTS_NEEDED = 5,
    EVENT_SPAWN_REINFORCEMENTS = 6,
    EVENT_REINFORCEMENTS_LEADER_SPEAK = 7,
};

#endif