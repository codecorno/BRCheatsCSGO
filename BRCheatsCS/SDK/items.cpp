#include "items.h"

#include "../Changer/Enums.hpp"
#include <vector>


const std::vector<std::pair<int, const char*>> save_guns =
{
{ (int)ItemDefinitionIndex::WEAPON_AK47,		"AK-47" },
{ (int)ItemDefinitionIndex::WEAPON_AUG,			"AUG" },
{ (int)ItemDefinitionIndex::WEAPON_AWP,			"AWP" },
{ (int)ItemDefinitionIndex::WEAPON_CZ75,		"CZ75-A" },
{ (int)ItemDefinitionIndex::WEAPON_DEAGLE,		"Desert Eagle" },
{ (int)ItemDefinitionIndex::WEAPON_ELITE,		"Dual Barettas" },
{ (int)ItemDefinitionIndex::WEAPON_FAMAS,		"Famas" },
{ (int)ItemDefinitionIndex::WEAPON_FIVESEVEN, 	"Five-Seven" },
{ (int)ItemDefinitionIndex::WEAPON_GALIL,		"Galil-AR" },
{ (int)ItemDefinitionIndex::WEAPON_G3SG1,		"G3SG1" },
{ (int)ItemDefinitionIndex::WEAPON_GLOCK,		"Glock-18" },
{ (int)ItemDefinitionIndex::WEAPON_M249,		"M249" },
{ (int)ItemDefinitionIndex::WEAPON_M4A1S,       "M4A1-S" },
{ (int)ItemDefinitionIndex::WEAPON_M4A4,		"M4A4" },
{ (int)ItemDefinitionIndex::WEAPON_MAC10,		"MAC-10" },
{ (int)ItemDefinitionIndex::WEAPON_MAG7,		"Mag-7" },
{ (int)ItemDefinitionIndex::WEAPON_MP7,			"MP7" },
{ (int)ItemDefinitionIndex::WEAPON_MP5SD,		"MP5-SD"},
{ (int)ItemDefinitionIndex::WEAPON_MP9,			"MP9" },
{ (int)ItemDefinitionIndex::WEAPON_NEGEV,		"Negev" },
{ (int)ItemDefinitionIndex::WEAPON_NOVA,		"Nova" },
{ (int)ItemDefinitionIndex::WEAPON_P2000,		"P2000" },
{ (int)ItemDefinitionIndex::WEAPON_P250,		"P250" },
{ (int)ItemDefinitionIndex::WEAPON_P90,			"P90" },
{ (int)ItemDefinitionIndex::WEAPON_BIZON,		"PP-Bizon" },
{ (int)ItemDefinitionIndex::WEAPON_REVOLVER,	"R8 Revolver" },
{ (int)ItemDefinitionIndex::WEAPON_SAWEDOFF,	"Sawed-Off" },
{ (int)ItemDefinitionIndex::WEAPON_SCAR20,		"SCAR-20" },
{ (int)ItemDefinitionIndex::WEAPON_SG553,		"SG-556" },
{ (int)ItemDefinitionIndex::WEAPON_SSG08,		"Scout" },
{ (int)ItemDefinitionIndex::WEAPON_TEC9,		"Tec-9" },
{ (int)ItemDefinitionIndex::WEAPON_UMP45,		"UMP-45" },
{ (int)ItemDefinitionIndex::WEAPON_USPS,	    "USP-S" },
{ (int)ItemDefinitionIndex::WEAPON_XM1014,      "XM1014" },
};
const std::map<short, weapon_info> k_weapon_info = {
	{ WEAPON_KNIFE, { "models/weapons/v_knife_default_ct.mdl", "knife" } },
	{ WEAPON_KNIFE_T, { "models/weapons/v_knife_default_t.mdl", "knife_t" } },
	{ WEAPON_KNIFE_BAYONET, { "models/weapons/v_knife_bayonet.mdl", "bayonet" } },
	{ WEAPON_KNIFE_FLIP, { "models/weapons/v_knife_flip.mdl", "knife_flip" } },
	{ WEAPON_KNIFE_GUT, { "models/weapons/v_knife_gut.mdl", "knife_gut" } },
	{ WEAPON_KNIFE_KARAMBIT, { "models/weapons/v_knife_karam.mdl", "knife_karambit" } },
	{ WEAPON_KNIFE_M9_BAYONET, { "models/weapons/v_knife_m9_bay.mdl", "knife_m9_bayonet" } },
	{ WEAPON_KNIFE_TACTICAL, { "models/weapons/v_knife_tactical.mdl", "knife_tactical" } },
	{ WEAPON_KNIFE_FALCHION, { "models/weapons/v_knife_falchion_advanced.mdl", "knife_falchion" } },
	{ WEAPON_KNIFE_SURVIVAL_BOWIE, { "models/weapons/v_knife_survival_bowie.mdl", "knife_survival_bowie" } },
	{ WEAPON_KNIFE_BUTTERFLY, { "models/weapons/v_knife_butterfly.mdl", "knife_butterfly" } },
	{ WEAPON_KNIFE_PUSH, { "models/weapons/v_knife_push.mdl", "knife_push" } },
	{ WEAPON_KNIFE_URSUS, { "models/weapons/v_knife_ursus.mdl", "knife_ursus" } },
	{ WEAPON_KNIFE_GYPSY_JACKKNIFE, { "models/weapons/v_knife_gypsy_jackknife.mdl", "knife_gypsy_jackknife" } },
	{ WEAPON_KNIFE_STILETTO, { "models/weapons/v_knife_stiletto.mdl", "knife_stiletto" } },
	{ WEAPON_KNIFE_WIDOWMAKER, { "models/weapons/v_knife_widowmaker.mdl", "knife_widowmaker" } },
	{ WEAPON_KNIFE_SKELETON,{"models/weapons/v_knife_skeleton.mdl","knife_skeleton" }},
	{ WEAPON_KNIFE_OUTDOOR,{"models/weapons/v_knife_outdoor.mdl","knife_outdoor"}},
	{ WEAPON_KNIFE_CANIS,{"models/weapons/v_knife_canis.mdl","knife_canis"}},
	{ WEAPON_KNIFE_CORD,{"models/weapons/v_knife_cord.mdl","knife_cord"}},
	{ WEAPON_KNIFE_CSS,{"models/weapons/v_knife_css.mdl","knife_css"}},
	{ GLOVE_T_SIDE,{ "models/weapons/v_models/arms/glove_fingerless/v_glove_fingerless.mdl" } },
	{ GLOVE_STUDDED_BLOODHOUND,{ "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl", "studded_bloodhound_gloves" } },
	{ GLOVE_CT_SIDE,{ "models/weapons/v_models/arms/glove_hardknuckle/v_glove_hardknuckle.mdl" } },
	{ GLOVE_SPORTY,{ "models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl", "sporty_gloves" } },
	{ GLOVE_SLICK,{ "models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl", "slick_gloves"} },
	{ GLOVE_LEATHER_WRAP,{ "models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl", "leather_handwraps" } },
	{ GLOVE_MOTORCYCLE,{ "models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl", "motorcycle_gloves" } },
	{ GLOVE_SPECIALIST,{ "models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl", "specialist_gloves" } },
	{ GLOVE_HYDRA,{ "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound_hydra.mdl", "studded_hydra_gloves" } }
};

const std::map<short, const char*> k_glove_names = {
	{WEAPON_NONE, "Default"},
	{GLOVE_STUDDED_BLOODHOUND, "Bloodhound"},
	{GLOVE_SPORTY, "Sporty"},
	{GLOVE_SLICK, "Slick"},
	{GLOVE_LEATHER_WRAP, "Handwrap"},
	{GLOVE_MOTORCYCLE, "Motorcycle"},
	{GLOVE_SPECIALIST, "Specialist"},
	{GLOVE_HYDRA, "Hydra"},
};

const std::map<short, const char*> k_knife_names = {
	{WEAPON_NONE, "Default"},
	{WEAPON_KNIFE_BAYONET, "Bayonet"},
	{WEAPON_KNIFE_FLIP, "Flip Knife"},
	{WEAPON_KNIFE_GUT, "Gut Knife"},
	{WEAPON_KNIFE_KARAMBIT, "Karambit"},
	{WEAPON_KNIFE_M9_BAYONET, "M9 Bayonet"},
	{WEAPON_KNIFE_TACTICAL, "Huntsman Knife"},
	{WEAPON_KNIFE_FALCHION, "Falchion Knife"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, "Bowie Knife"},
	{WEAPON_KNIFE_BUTTERFLY, "Butterfly Knife"},
	{WEAPON_KNIFE_PUSH, "Shadow Daggers"},
	{WEAPON_KNIFE_URSUS, "Ursus Knife"},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE, "Navaja Knife"},
	{WEAPON_KNIFE_STILETTO, "Stiletto Knife"},
	{WEAPON_KNIFE_WIDOWMAKER, "Talon Knife"},
	{WEAPON_KNIFE_SKELETON,"Skeleton Knife"},
	{WEAPON_KNIFE_OUTDOOR,"Nomad Knife"},
	{WEAPON_KNIFE_CANIS,"Survival Knife"},
	{WEAPON_KNIFE_CORD,"Paracord Knife"},
	{WEAPON_KNIFE_CSS,"Classic Knife"},
};

const std::map<short, const char*> k_item_names = {
	{WEAPON_CZ75, "CZ75 Auto"},
	{WEAPON_DEAGLE, "Desert Eagle"},
	{WEAPON_ELITE, "Dual Berettas"},
	{WEAPON_FIVESEVEN, "Five-SeveN"},
	{WEAPON_P2000, "P2000"},
	{WEAPON_P250, "P250"},
	{WEAPON_USPS, "USP-S"},
	{WEAPON_TEC9, "Tec-9"},
	{WEAPON_REVOLVER, "R8 Revolver"},
	{WEAPON_GLOCK, "Glock-18"},

	{WEAPON_MAG7, "MAG-7"},
	{WEAPON_NOVA, "Nova"},
	{WEAPON_SAWEDOFF, "Sawed-Off"},
	{WEAPON_XM1014, "XM1014"},

	{WEAPON_UMP45, "UMP-45"},
	{WEAPON_P90, "P90"},
	{WEAPON_BIZON, "PP-Bizon"},
	{WEAPON_MAC10, "MAC-10"},
	{WEAPON_MP7, "MP7"},
	{WEAPON_MP9, "MP9"},
	{WEAPON_MP5SD, "MP5-SD"},

	{WEAPON_M249, "M249"},
	{WEAPON_NEGEV, "Negev"},

	{WEAPON_AK47, "AK-47"},
	{WEAPON_AUG, "AUG"},
	{WEAPON_GALIL, "Galil AR"},
	{WEAPON_M4A1S, "M4A1-S"},
	{WEAPON_M4A4, "M4A4"},
	{WEAPON_SG553, "SG 553"},
	{WEAPON_FAMAS, "FAMAS"},

	{WEAPON_AWP, "AWP"},
	{WEAPON_G3SG1, "G3SG1"},
	{WEAPON_SCAR20, "SCAR-20"},
	{WEAPON_SSG08, "SSG 08"},

	{WEAPON_KNIFE, "Knife"},
	{WEAPON_KNIFE_T, "Knife"},
	{WEAPON_KNIFEGG, "Knife"},
	{WEAPON_KNIFE_GHOST, "Knife"},
	{WEAPON_KNIFE_BAYONET, "Knife"},
	{WEAPON_KNIFE_FLIP, "Knife"},
	{WEAPON_KNIFE_GUT, "Knife"},
	{WEAPON_KNIFE_KARAMBIT, "Knife"},
	{WEAPON_KNIFE_M9_BAYONET, "Knife"},
	{WEAPON_KNIFE_TACTICAL, "Knife"},
	{WEAPON_KNIFE_FALCHION, "Knife"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, "Knife"},
	{WEAPON_KNIFE_BUTTERFLY, "Knife"},
	{WEAPON_KNIFE_PUSH, "Knife"},
	{WEAPON_KNIFE_URSUS, "Knife"},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE, "Knife"},
	{WEAPON_KNIFE_STILETTO, "Knife"},
	{WEAPON_KNIFE_WIDOWMAKER, "Knife"},
	{WEAPON_KNIFE_SKELETON,"Knife"},
	{WEAPON_KNIFE_OUTDOOR,"Knife"},
	{WEAPON_KNIFE_CANIS,"Knife"},
	{WEAPON_KNIFE_CORD,"Knife"},
	{WEAPON_KNIFE_CSS,"Knife"},

	{WEAPON_ZEUS, "Zeus x27"},

	{WEAPON_HEGRENADE, "HE Grenade"},
	{WEAPON_SMOKEGRENADE, "Smoke Grenade"},
	{WEAPON_FLASHBANG, "Flashbang"},
	{WEAPON_MOLOTOV, "Molotov"},
	{WEAPON_INC, "Incendiary Grenade"},
	{WEAPON_DECOY, "Decoy"},

	{WEAPON_C4, "C4"},

	{WEAPON_HEALTHSHOT, "Health Shot"},

	{WEAPON_SNOWBALL, "Snowball"},

	// DangerZone
	{WEAPON_FISTS, "Fists"},
	{WEAPON_BREACHCHARGE, "Breach Charge"},
	{WEAPON_TABLET, "Tablet"},
	{WEAPON_AXE, "Axe"},
	{WEAPON_HAMMER, "Hammer"},
	{WEAPON_SPANNER, "Spanner"},
	{WEAPON_FIREBOMB, "Fire Bomb"},
	{WEAPON_DIVERSION, "Diversion"},
	{WEAPON_FRAG_GRENADE, "Frag Grenade"},
	{WEAPON_BUMPMINE, "Bump Mine"},
	{WEAPON_SHIELD, "Shield"},
};

const std::map<short, const char*> k_inventory_names = {
	{WEAPON_CZ75, "CZ75 Auto"},
	{WEAPON_DEAGLE, "Desert Eagle"},
	{WEAPON_ELITE, "Dual Berettas"},
	{WEAPON_FIVESEVEN, "Five-SeveN"},
	{WEAPON_P2000, "P2000"},
	{WEAPON_P250, "P250"},
	{WEAPON_USPS, "USP-S"},
	{WEAPON_TEC9, "Tec-9"},
	{WEAPON_REVOLVER, "R8 Revolver"},
	{WEAPON_GLOCK, "Glock-18"},

	{WEAPON_MAG7, "MAG-7"},
	{WEAPON_NOVA, "Nova"},
	{WEAPON_SAWEDOFF, "Sawed-Off"},
	{WEAPON_XM1014, "XM1014"},

	{WEAPON_UMP45, "UMP-45"},
	{WEAPON_P90, "P90"},
	{WEAPON_BIZON, "PP-Bizon"},
	{WEAPON_MAC10, "MAC-10"},
	{WEAPON_MP7, "MP7"},
	{WEAPON_MP9, "MP9"},
	{WEAPON_MP5SD, "MP5-SD"},

	{WEAPON_M249, "M249"},
	{WEAPON_NEGEV, "Negev"},

	{WEAPON_AK47, "AK-47"},
	{WEAPON_AUG, "AUG"},
	{WEAPON_GALIL, "Galil AR"},
	{WEAPON_M4A1S, "M4A1-S"},
	{WEAPON_M4A4, "M4A4"},
	{WEAPON_SG553, "SG 553"},
	{WEAPON_FAMAS, "FAMAS"},

	{WEAPON_AWP, "AWP"},
	{WEAPON_G3SG1, "G3SG1"},
	{WEAPON_SCAR20, "SCAR-20"},
	{WEAPON_SSG08, "SSG 08"},

	{WEAPON_KNIFE_BAYONET, "Bayonet Knife"},
	{WEAPON_KNIFE_FLIP, "Flip Knife"},
	{WEAPON_KNIFE_GUT, "Gut Knife"},
	{WEAPON_KNIFE_KARAMBIT, "Karambit Knife"},
	{WEAPON_KNIFE_M9_BAYONET, "M9 Bayonet Knife"},
	{WEAPON_KNIFE_TACTICAL, "Huntsman Knife"},
	{WEAPON_KNIFE_FALCHION, "Falchion Knife"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, "Bowie Knife"},
	{WEAPON_KNIFE_BUTTERFLY, "Butterfly Knife"},
	{WEAPON_KNIFE_PUSH, "Shadow Daggers"},
	{WEAPON_KNIFE_URSUS, "Ursus Knife"},
	{WEAPON_KNIFE_GYPSY_JACKKNIFE, "Navaja Knife"},
	{WEAPON_KNIFE_STILETTO, "Stiletto Knife"},
	{WEAPON_KNIFE_WIDOWMAKER, "Talon Knife"},
	{WEAPON_KNIFE_SKELETON,"Skeleton Knife"},
	{WEAPON_KNIFE_OUTDOOR,"Nomad Knife"},
	{WEAPON_KNIFE_CANIS,"Survival Knife"},
	{WEAPON_KNIFE_CORD,"Paracord Knife"},
	{WEAPON_KNIFE_CSS,"Classic Knife"},

	{GLOVE_STUDDED_BLOODHOUND, "Bloodhound Gloves"},
	{GLOVE_SPORTY, "Sporty Gloves"},
	{GLOVE_SLICK, "Slick Gloves"},
	{GLOVE_LEATHER_WRAP, "Handwrap Gloves"},
	{GLOVE_MOTORCYCLE, "Motorcycle Gloves"},
	{GLOVE_SPECIALIST, "Specialist Gloves"},
	{GLOVE_HYDRA, "Hydra Gloves"},
};