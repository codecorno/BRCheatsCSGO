#include <iostream>
#include <string>
#include <map>
#include <cstring>
#include <locale>

#include "Lang.h"
#include "Xorstr/xorstr.hpp"
#include "Config.h"

std::map<std::string, std::string> phrases;

void UpdateLanguage()
{
	if (config->misc.lang == 0)
	{

		phrases[XorString("main_windowTitle")] = XorString("BRCheats EN");
		phrases[XorString("main_visuals")] = XorString("Visuals");
		phrases[XorString("main_misc")] = XorString("Misc");
		phrases[XorString("main_lang")] = XorString("Idioma");
		phrases[XorString("main_langAlert")] = XorString("Your language has been changed to English");
		phrases[XorString("global_enabled")] = XorString("Enabled");
		phrases[XorString("global_threedots")] = XorString("...");
		phrases[XorString("global_nobackground")] = XorString("No Background");
		phrases[XorString("global_notitle")] = XorString("No title");
		phrases[XorString("global_key")] = XorString("[ key ]");
		phrases[XorString("global_keypopup")] = XorString("Press any key to change keybind");
		phrases[XorString("global_weapontype")] = XorString("All\0Pistols\0Heavy\0SMG\0Rifles\0");
		phrases[XorString("global_weapontype_zeus")] = XorString("All\0Pistols\0Heavy\0SMG\0Rifles\0Zeus x27\0");
		phrases[XorString("global_onkey")] = XorString("On key");
		phrases[XorString("global_keymode")] = XorString("Hold\0Toggle\0");
		phrases[XorString("global_bone")] = XorString("Bone");
		phrases[XorString("global_bonelist")] = XorString("Nearest\0Best damage\0Head\0Neck\0Sternum\0Chest\0Stomach\0Pelvis\0");
		phrases[XorString("global_all")] = XorString("All");
		phrases[XorString("global_type")] = XorString("Type");
		phrases[XorString("global_scale")] = XorString("Scale");
		phrases[XorString("global_fill")] = XorString("Fill");
		phrases[XorString("global_time")] = XorString("Time");
		phrases[XorString("global_hitgroup")] = XorString("Hitgroup");
		phrases[XorString("global_style")] = XorString("Style");
		phrases[XorString("global_color")] = XorString("Color");
		phrases[XorString("global_speed")] = XorString("Speed");
		phrases[XorString("global_edit")] = XorString("Edit");
		phrases[XorString("global_search")] = XorString("Search");
		phrases[XorString("global_update")] = XorString("Update");
		phrases[XorString("global_language")] = XorString("Language");
		phrases[XorString("global_team")] = XorString("Team");
		phrases[XorString("global_flags")] = XorString("Flags");
		phrases[XorString("global_mode")] = XorString("Mode");

		phrases[XorString("window_aimbot")] = XorString("Aimbot | BRCheats");
		phrases[XorString("window_ragebot")] = XorString("Ragebot | BRCheats");
		phrases[XorString("window_antiaim")] = XorString("Anti Aim | BRCheats");
		phrases[XorString("window_triggerbot")] = XorString("Triggerbot | BRCheats");
		phrases[XorString("window_backtrack")] = XorString("Backtrack | BRCheats");
		phrases[XorString("window_glow")] = XorString("Glow | BRCheats");
		phrases[XorString("window_chams")] = XorString("Chams | BRCheats");
		phrases[XorString("window_esp")] = XorString("ESP BRCheats | Use Game Capture from OBS, this ESP and the Menu will not be visible in your stream");
		phrases[XorString("window_visuals")] = XorString("Visuals | BRCheats");
		phrases[XorString("window_skinchanger")] = XorString("Skin Changer | BRCheats");
		phrases[XorString("window_misc")] = XorString("Misc | BRCheats");
		phrases[XorString("window_config")] = XorString("Config | BRCheats");
		phrases[XorString("window_ezconfig")] = XorString("EzConfig | BRCheats");

		phrases[XorString("aimhacks_friendlyfire")] = XorString("Friendly fire");
		phrases[XorString("aimhacks_visibleonly")] = XorString("Visible only");
		phrases[XorString("aimhacks_scopedonly")] = XorString("Scoped Only");
		phrases[XorString("aimhacks_ignoreflash")] = XorString("Ignore Flash");
		phrases[XorString("aimhacks_ignoresmoke")] = XorString("Ignore Smoke");
		phrases[XorString("aimhacks_autoshot")] = XorString("Auto Shot");
		phrases[XorString("aimhacks_autoscope")] = XorString("Auto Scope");
		phrases[XorString("aimhacks_killshot")] = XorString("Killshot");
		phrases[XorString("aimhacks_betweenshots")] = XorString("Between shots");
		phrases[XorString("aimhacks_hitchance")] = XorString("Hit Chance");
		phrases[XorString("aimhacks_mindamage")] = XorString("Min. Damage");
		phrases[XorString("aimhacks_silent")] = XorString("Silent");

		phrases[XorString("wallhacks_healthbased")] = XorString("Health Based");
		phrases[XorString("wallhacks_visibletype")] = XorString("All\0Visible\0Occluded\0");

		phrases[XorString("aimbot_fov")] = XorString("FOV");
		phrases[XorString("aimbot_smooth")] = XorString("Smooth");
		phrases[XorString("aimbot_drawfov")] = XorString("FOV");
		phrases[XorString("aimbot_rcs")] = XorString("Recoil Control System");
		phrases[XorString("aimbot_ignoreshots")] = XorString("Ignore Shots");
		phrases[XorString("aimbot_rcs_y")] = XorString("Recoil Control Y");
		phrases[XorString("aimbot_rcs_x")] = XorString("Recoil Control X");

		phrases[XorString("ragebot_autostop")] = XorString("Auto Stop");
		phrases[XorString("ragebot_baim")] = XorString("Baim");
		phrases[XorString("ragebot_forceshot")] = XorString("Force shot");
		phrases[XorString("ragebot_quickpeek")] = XorString("Quickpeek");
		phrases[XorString("ragebot_hitboxes")] = XorString("Hitboxes");
		phrases[XorString("ragebot_headvalue")] = XorString("Head Value");
		phrases[XorString("ragebot_bodyvalue")] = XorString("Body Value");
		phrases[XorString("ragebot_doubletap")] = XorString("Doubletap");
		phrases[XorString("ragebot_doubletap_speed")] = XorString("Doubletap Speed");
		phrases[XorString("ragebot_doubletap_keymode")] = XorString("Doubletap Key Mode");

		phrases[XorString("antiaim_invertkey")] = XorString("Invert Key");
		phrases[XorString("antiaim_fakewalk")] = XorString("Fakewalk");
		phrases[XorString("antiaim_fakewalk_speed")] = XorString("Speed");

		phrases[XorString("triggerbot_hitgroup")] = XorString("All\0Head\0Chest\0Stomach\0Left arm\0Right arm\0Left leg\0Right leg\0");
		phrases[XorString("triggerbot_shotdelay")] = XorString("Shot delay : % d ms");
		phrases[XorString("triggerbot_bursttime")] = XorString("Burst Time");

		phrases[XorString("backtrack_extend")] = XorString("Extend with fake ping");
		phrases[XorString("backtrack_timelimit")] = XorString("Time limit %d ms");

		phrases[XorString("glow_styles")] = XorString("Default\0Rim3d\0Edge\0Edge Pulse\0");
		phrases[XorString("glow_category")] = XorString("Allies\0Enemies\0Planting\0Defusing\0Local player\0Weapons\0C4\0Planted C4\0Chickens\0Defuse kits\0Projectiles\0Hostages\0Ragdolls\0");

		phrases[XorString("chams_category")] = XorString("Allies\0Enemies\0Planting\0Defusing\0Local player\0Weapons\0Hands\0Backtrack\0Sleeves\0Desync\0");
		phrases[XorString("chams_blinking")] = XorString("Blinking");
		phrases[XorString("chams_wireframe")] = XorString("Wireframe");
		phrases[XorString("chams_material")] = XorString("Material");
		phrases[XorString("chams_cover")] = XorString("Cover");
		phrases[XorString("chams_ignorez")] = XorString("Ignore-Z");

		phrases[XorString("esp_font")] = XorString("Font");
		phrases[XorString("esp_snapline")] = XorString("Snapline");
		phrases[XorString("esp_box")] = XorString("Box");
		phrases[XorString("esp_name")] = XorString("Name");
		phrases[XorString("esp_weapon")] = XorString("Weapon");
		phrases[XorString("esp_flashduration")] = XorString("Flash Duration");
		phrases[XorString("esp_skeleton")] = XorString("Skeleton");
		phrases[XorString("esp_audibleonly")] = XorString("Audible Only");
		phrases[XorString("esp_spottedonly")] = XorString("Spotted Only");
		phrases[XorString("esp_headbox")] = XorString("Head Box");
		phrases[XorString("esp_healthbar")] = XorString("Health Bar");
		phrases[XorString("esp_ammo")] = XorString("Ammo");
		phrases[XorString("esp_trails")] = XorString("Trails");
		phrases[XorString("esp_textculldistance")] = XorString("Text Cull Distance");

		phrases[XorString("visuals_noweapons")] = XorString("No Weapons");
		phrases[XorString("visuals_nosmoke")] = XorString("No Smoke");
		phrases[XorString("visuals_noblur")] = XorString("No Blur");
		phrases[XorString("visuals_noscopeoverlay")] = XorString("No Scope Overlay");
		phrases[XorString("visuals_nograss")] = XorString("No Grass");
		phrases[XorString("visuals_noshadows")] = XorString("No Shadows");
		phrases[XorString("visuals_nightmode")] = XorString("Night Mode");
		phrases[XorString("visuals_asuswalls")] = XorString("Asus Walls");
		phrases[XorString("visuals_nobloom")] = XorString("No Bloom");
		phrases[XorString("visuals_disablepostprocessing")] = XorString("Disable Post-processing");
		phrases[XorString("visuals_inverseragdoll")] = XorString("Inverse Ragdoll Gravity");
		phrases[XorString("visuals_nofog")] = XorString("No Fog");
		phrases[XorString("visuals_no3dsky")] = XorString("No 3D Sky");
		phrases[XorString("visuals_noaimpunch")] = XorString("No Aim Punch");
		phrases[XorString("visuals_noviewpunch")] = XorString("No View Punch");
		phrases[XorString("visuals_nohands")] = XorString("No Hands");
		phrases[XorString("visuals_nosleeves")] = XorString("No Sleeves");
		phrases[XorString("visuals_wireframesmoke")] = XorString("Wireframe Smoke");
		phrases[XorString("visuals_worldcolor")] = XorString("World Color");
		phrases[XorString("visuals_skycolor")] = XorString("Sky Color");
		phrases[XorString("visuals_deaglespinner")] = XorString("Deagle Spinner");
		phrases[XorString("visuals_bullettracers")] = XorString("Bullet Tracers");
		phrases[XorString("visuals_zoom")] = XorString("Zoom");
		phrases[XorString("visuals_t_model")] = XorString("T Player Model");
		phrases[XorString("visuals_ct_model")] = XorString("CT Player Model");
		phrases[XorString("visuals_thirdperson")] = XorString("Thirdperson");
		phrases[XorString("visuals_thirdperson_distance")] = XorString("Thirdperson distance: %d");
		phrases[XorString("visuals_viewmodelfov")] = XorString("Viewmodel FOV: %d");
		phrases[XorString("visuals_fov")] = XorString("FOV: %d");
		phrases[XorString("visuals_farz")] = XorString("Far Z: %d");
		phrases[XorString("visuals_flashreduction")] = XorString("Flash reduction: %d%%");
		phrases[XorString("visuals_brightness")] = XorString("Brightness: %.2f");
		phrases[XorString("visuals_skybox")] = XorString("Skybox");
		phrases[XorString("visuals_screeneffect")] = XorString("Screen Effect");
		phrases[XorString("visuals_hiteffect")] = XorString("Hit Effect");
		phrases[XorString("visuals_hiteffect_time")] = XorString("Screen Effect Time");
		phrases[XorString("visuals_hitmarker")] = XorString("Hit Marker");
		phrases[XorString("visuals_hitmarker_time")] = XorString("Hit Marker Time");
		phrases[XorString("visuals_indicators")] = XorString("Indicators");
		phrases[XorString("visuals_rainbowcrosshair")] = XorString("Rainbow Crosshair");
		phrases[XorString("visuals_noscopecrosshair")] = XorString("Noscope Crosshair");
		phrases[XorString("visuals_recoilcrosshair")] = XorString("Recoil Crosshair");
		phrases[XorString("visuals_watermark")] = XorString("Watermark");
		phrases[XorString("visuals_colorcorrection")] = XorString("Color Correction");
		phrases[XorString("visuals_ragdollforce")] = XorString("Ragdoll Force");
		phrases[XorString("visuals_ragdollforce_strenght")] = XorString("Ragdoll Force Strenght");

		phrases[XorString("skinchanger_paintkit")] = XorString("Paint Kit");
		phrases[XorString("skinchanger_quality")] = XorString("Quality");
		phrases[XorString("skinchanger_seed")] = XorString("Seed");
		phrases[XorString("skinchanger_stattrak")] = XorString("StatTrak\u2122");
		phrases[XorString("skinchanger_wear")] = XorString("Wear");
		phrases[XorString("skinchanger_knife")] = XorString("Knife");
		phrases[XorString("skinchanger_glove")] = XorString("Glove");
		phrases[XorString("skinchanger_nametag")] = XorString("Name Tag");
		phrases[XorString("skinchanger_sticker")] = XorString("Sticker");
		phrases[XorString("skinchanger_scale")] = XorString("Scale");
		phrases[XorString("skinchanger_rotation")] = XorString("Rotation");

		phrases[XorString("misc_menukey")] = XorString("Menu Key");
		phrases[XorString("misc_radarhack")] = XorString("Radar Hack");
		phrases[XorString("misc_spectatorlist")] = XorString("Spectator List");
		phrases[XorString("misc_revealranks")] = XorString("Reveal Ranks");
		phrases[XorString("misc_revealmoney")] = XorString("Reveal Money");
		phrases[XorString("misc_revealsuspect")] = XorString("Reveal Suspect");
		phrases[XorString("misc_fixmovement")] = XorString("Fix Movement");
		phrases[XorString("misc_disablemodelocclusion")] = XorString("Disable Model Occlusion");
		phrases[XorString("misc_antiafkkick")] = XorString("Anti AFK Kick");
		phrases[XorString("misc_autostrafe")] = XorString("Auto Strafe");
		phrases[XorString("misc_bunnyhop")] = XorString("Bunny Hop");
		phrases[XorString("misc_fastduck")] = XorString("Fast Duck");
		phrases[XorString("misc_slowwalk")] = XorString("Slowwalk");
		phrases[XorString("misc_autopistol")] = XorString("Auto Pistol");
		phrases[XorString("misc_autoreload")] = XorString("Auto Reload");
		phrases[XorString("misc_autoaccept")] = XorString("Auto Accept");
		phrases[XorString("misc_disablehudblur")] = XorString("Disable HUD Blur");
		phrases[XorString("misc_fastplant")] = XorString("Fast Plant");
		phrases[XorString("misc_faststop")] = XorString("Fast Stop");
		phrases[XorString("misc_bombtimer")] = XorString("Bomb Timer");
		phrases[XorString("misc_quickreload")] = XorString("Quick Reload");
		phrases[XorString("misc_preparerevolver")] = XorString("Prepare Revolver");
		phrases[XorString("misc_animatedclantag")] = XorString("Animated Clan Tag");
		phrases[XorString("misc_clocktag")] = XorString("Clock Tag");
		phrases[XorString("misc_customclantag")] = XorString("Custom Clantag");
		phrases[XorString("misc_killmessage")] = XorString("Kill Message");
		phrases[XorString("misc_nameexploit")] = XorString("Name Exploit");
		phrases[XorString("misc_setupfakeban")] = XorString("Setup Fake Ban");
		phrases[XorString("misc_fakeitemflags")] = XorString("Fake Item Flags");
		phrases[XorString("misc_messagetype")] = XorString("Message Type");
		phrases[XorString("misc_itemtype")] = XorString("Item Type");
		phrases[XorString("misc_itemrarity")] = XorString("Item Rarity");
		phrases[XorString("misc_playercolor")] = XorString("Player Color");
		phrases[XorString("misc_playername")] = XorString("Player Name");
		phrases[XorString("misc_skinname")] = XorString("Skin Name");
		phrases[XorString("misc_changename")] = XorString("Change Name");
		phrases[XorString("misc_namestealer")] = XorString("Name Stealer");
		phrases[XorString("misc_customname")] = XorString("Message Type");
		phrases[XorString("misc_hitsound")] = XorString("Hit Sound");
		phrases[XorString("misc_hitsound_filename")] = XorString("Hit Sound Filename");
		phrases[XorString("misc_killsound")] = XorString("Kill Sound");
		phrases[XorString("misc_killsound_filename")] = XorString("Kill Sound Filename");
		phrases[XorString("misc_fakelag")] = XorString("Fake Lag");
		phrases[XorString("misc_min_fakelag_amount")] = XorString("Min. Fakelag Amount");
		phrases[XorString("misc_fakelag_amount")] = XorString("Fakelag Amount");
		phrases[XorString("misc_grenadeprediction")] = XorString("Grenade Prediction");
		phrases[XorString("misc_maxangledelta")] = XorString("Max Angle Delta");
		phrases[XorString("misc_aspectratio")] = XorString("Aspect Ratio");
		phrases[XorString("misc_fakeprime")] = XorString("Fake Prime");
		phrases[XorString("misc_fakeduck")] = XorString("Fake Duck");
		phrases[XorString("misc_doorspam")] = XorString("Door Spam");
		phrases[XorString("misc_preservekillfeed")] = XorString("Preserve Killfeed");
		phrases[XorString("misc_onlyheadshots")] = XorString("Only Headshots");
		phrases[XorString("misc_purchaselist")] = XorString("Purchase List");
		phrases[XorString("misc_onlyduringfreezetime")] = XorString("Only During Freeze Time");
		phrases[XorString("misc_showprices")] = XorString("Show Prices");
		phrases[XorString("misc_shotscount")] = XorString("Shots Count");
		phrases[XorString("misc_statusbar")] = XorString("Status Bar");
		phrases[XorString("misc_showviewangles")] = XorString("ShowViewAngles");
		phrases[XorString("misc_showplayerstatus")] = XorString("ShowPlayerStatus");
		phrases[XorString("misc_showgameglobalvars")] = XorString("ShowGameGlobalVars");
		phrases[XorString("misc_reportbot")] = XorString("Reportbot");
		phrases[XorString("misc_reportbot_target")] = XorString("Target");
		phrases[XorString("misc_reportbot_delay")] = XorString("Delay (s)");
		phrases[XorString("misc_reportbot_rounds")] = XorString("Rounds");
		phrases[XorString("misc_reportbot_abusivecomms")] = XorString("Abusive Communications");
		phrases[XorString("misc_reportbot_griefing")] = XorString("Griefing");
		phrases[XorString("misc_reportbot_wallhacking")] = XorString("Wall Hacking");
		phrases[XorString("misc_reportbot_aimhacking")] = XorString("Aim Hacking");
		phrases[XorString("misc_reportbot_otherhacking")] = XorString("Other Hacking");
		phrases[XorString("misc_reportbot_reset")] = XorString("Reset");
		phrases[XorString("misc_cheatspam")] = XorString("Cheat Spam");

		phrases[XorString("config_reload")] = XorString("Reload configs");
		phrases[XorString("config_placeholder_configname")] = XorString("Config Name");
		phrases[XorString("config_create")] = XorString("Create Config");
		phrases[XorString("config_reset")] = XorString("Reset Config");
		phrases[XorString("config_toreset")] = XorString("Config to Reset");
		phrases[XorString("config_load")] = XorString("Load selected");
		phrases[XorString("config_save")] = XorString("Save selected");
		phrases[XorString("config_delete")] = XorString("Delete selected");

		phrases[XorString("ezconfig_legitaimbot")] = XorString("Almost imperceptible Aimbot");
		phrases[XorString("ezconfig_simplewall")] = XorString("A basic glow through walls");
		phrases[XorString("ezconfig_fullwall")] = XorString("Full wallhack + visualization aids");
		phrases[XorString("ezconfig_utilities")] = XorString("Some utilities, like seeing patents, money and some other interesting options");
		phrases[XorString("ezconfig_bunnyhop")] = XorString("Activates Auto Bunny Hopping (Hold Space)");
		phrases[XorString("ezconfig_reset")] = XorString("Reset all cheat settings");
		
	}
	else if (config->misc.lang == 1)
	{






	phrases[XorString("main_visuals")] = XorString("Visuais");
	phrases[XorString("main_misc")] = XorString("Outros");
	phrases[XorString("main_lang")] = XorString("Language");
	phrases[XorString("main_langAlert")] = XorString("O menu foi definido em Portugues");
	phrases[XorString("main_windowTitle")] = XorString("BRCheats PT");
	phrases[XorString("global_enabled")] = XorString("Ativado");
	phrases[XorString("global_threedots")] = XorString("...");
	phrases[XorString("global_nobackground")] = XorString("Sem Background");
	phrases[XorString("global_notitle")] = XorString("Sem Titulo");
	phrases[XorString("global_key")] = XorString("[ tecla ]");
	phrases[XorString("global_keypopup")] = XorString("Pressione uma tecla para mudar");
	phrases[XorString("global_weapontype")] = XorString("All\0Pistols\0Heavy\0SMG\0Rifles\0");
	phrases[XorString("global_weapontype_zeus")] = XorString("All\0Pistols\0Heavy\0SMG\0Rifles\0Zeus x27\0");
	phrases[XorString("global_onkey")] = XorString("Na tecla");
	phrases[XorString("global_keymode")] = XorString("Hold\0Toggle\0");
	phrases[XorString("global_bone")] = XorString("Local");
	phrases[XorString("global_bonelist")] = XorString("Nearest\0Best damage\0Head\0Neck\0Sternum\0Chest\0Stomach\0Pelvis\0");
	phrases[XorString("global_all")] = XorString("Tudo");
	phrases[XorString("global_type")] = XorString("Tipo");
	phrases[XorString("global_scale")] = XorString("Tamanho");
	phrases[XorString("global_fill")] = XorString("Completar");
	phrases[XorString("global_time")] = XorString("Tempo");
	phrases[XorString("global_hitgroup")] = XorString("Locais");
	phrases[XorString("global_style")] = XorString("Estilo");
	phrases[XorString("global_color")] = XorString("Cor");
	phrases[XorString("global_speed")] = XorString("Velocidade");
	phrases[XorString("global_edit")] = XorString("Editar");
	phrases[XorString("global_search")] = XorString("Pesquisa");
	phrases[XorString("global_update")] = XorString("Atualizar");
	phrases[XorString("global_language")] = XorString("Idioma");
	phrases[XorString("global_team")] = XorString("Time");
	phrases[XorString("global_flags")] = XorString("Flags");
	phrases[XorString("global_mode")] = XorString("Modo");

	phrases[XorString("window_aimbot")] = XorString("Aimbot | BRCheats");
	phrases[XorString("window_ragebot")] = XorString("Ragebot | BRCheats");
	phrases[XorString("window_antiaim")] = XorString("Anti Aim | BRCheats");
	phrases[XorString("window_triggerbot")] = XorString("Triggerbot | BRCheats");
	phrases[XorString("window_backtrack")] = XorString("Backtrack | BRCheats");
	phrases[XorString("window_glow")] = XorString("Glow | BRCheats");
	phrases[XorString("window_chams")] = XorString("Chams | BRCheats");
	phrases[XorString("window_esp")] = XorString("ESP BRCheats | Use Game Capture do OBS, o ESP e Menu nao serao visiveis");
	phrases[XorString("window_visuals")] = XorString("Visuais | BRCheats");
	phrases[XorString("window_skinchanger")] = XorString("Skin Changer | BRCheats");
	phrases[XorString("window_misc")] = XorString("Outros | BRCheats");
	phrases[XorString("window_config")] = XorString("Config | BRCheats");

	phrases[XorString("aimhacks_friendlyfire")] = XorString("Fogo Amigo");
	phrases[XorString("aimhacks_visibleonly")] = XorString("Somente Visivel");
	phrases[XorString("aimhacks_scopedonly")] = XorString("Somente Mirado");
	phrases[XorString("aimhacks_ignoreflash")] = XorString("Ignorar Flash");
	phrases[XorString("aimhacks_ignoresmoke")] = XorString("Ignorar Smoke");
	phrases[XorString("aimhacks_autoshot")] = XorString("Auto Atirar");
	phrases[XorString("aimhacks_autoscope")] = XorString("Auto Mirar");
	phrases[XorString("aimhacks_killshot")] = XorString("Killshot");
	phrases[XorString("aimhacks_betweenshots")] = XorString("Entre tiros");
	phrases[XorString("aimhacks_hitchance")] = XorString("Chance de Hit");
	phrases[XorString("aimhacks_mindamage")] = XorString("Dano Minimo");
	phrases[XorString("aimhacks_silent")] = XorString("Sem puxar");

	phrases[XorString("wallhacks_healthbased")] = XorString("Baseado na Vida");
	phrases[XorString("wallhacks_visibletype")] = XorString("All\0Visible\0Occluded\0");

	phrases[XorString("aimbot_fov")] = XorString("FOV");
	phrases[XorString("aimbot_smooth")] = XorString("Suavidade");
	phrases[XorString("aimbot_drawfov")] = XorString("FOV");
	phrases[XorString("aimbot_rcs")] = XorString("Controle de Recuo");
	phrases[XorString("aimbot_ignoreshots")] = XorString("Ignorar Tiro");
	phrases[XorString("aimbot_rcs_y")] = XorString("Controle Recoil Y");
	phrases[XorString("aimbot_rcs_x")] = XorString("Control Recoil X");

	phrases[XorString("ragebot_autostop")] = XorString("Auto Stop");
	phrases[XorString("ragebot_baim")] = XorString("Baim");
	phrases[XorString("ragebot_forceshot")] = XorString("Force shot");
	phrases[XorString("ragebot_quickpeek")] = XorString("Quickpeek");
	phrases[XorString("ragebot_hitboxes")] = XorString("Hitboxes");
	phrases[XorString("ragebot_headvalue")] = XorString("Head Value");
	phrases[XorString("ragebot_bodyvalue")] = XorString("Body Value");
	phrases[XorString("ragebot_doubletap")] = XorString("Doubletap");
	phrases[XorString("ragebot_doubletap_speed")] = XorString("Doubletap Speed");
	phrases[XorString("ragebot_doubletap_keymode")] = XorString("Doubletap Key Mode");

	phrases[XorString("antiaim_invertkey")] = XorString("Invert Key");
	phrases[XorString("antiaim_fakewalk")] = XorString("Fakewalk");
	phrases[XorString("antiaim_fakewalk_speed")] = XorString("Speed");

	phrases[XorString("triggerbot_hitgroup")] = XorString("All\0Head\0Chest\0Stomach\0Left arm\0Right arm\0Left leg\0Right leg\0");
	phrases[XorString("triggerbot_shotdelay")] = XorString("Delay de tiro : % d ms");
	phrases[XorString("triggerbot_bursttime")] = XorString("Tempo de disparo");

	phrases[XorString("backtrack_extend")] = XorString("Aumentar com Ping");
	phrases[XorString("backtrack_timelimit")] = XorString("Tempo Limite %d ms");

	phrases[XorString("glow_styles")] = XorString("Default\0Rim3d\0Edge\0Edge Pulse\0");
	phrases[XorString("glow_category")] = XorString("Allies\0Enemies\0Planting\0Defusing\0Local player\0Weapons\0C4\0Planted C4\0Chickens\0Defuse kits\0Projectiles\0Hostages\0Ragdolls\0");

	phrases[XorString("chams_category")] = XorString("Allies\0Enemies\0Planting\0Defusing\0Local player\0Weapons\0Hands\0Backtrack\0Sleeves\0Desync\0");
	phrases[XorString("chams_blinking")] = XorString("Piscando");
	phrases[XorString("chams_wireframe")] = XorString("Wireframe");
	phrases[XorString("chams_material")] = XorString("Material");
	phrases[XorString("chams_cover")] = XorString("Cover");
	phrases[XorString("chams_ignorez")] = XorString("Ignorar Z");

	phrases[XorString("esp_font")] = XorString("Fonte");
	phrases[XorString("esp_snapline")] = XorString("Linha");
	phrases[XorString("esp_box")] = XorString("Caixa");
	phrases[XorString("esp_name")] = XorString("Nome");
	phrases[XorString("esp_weapon")] = XorString("Arma");
	phrases[XorString("esp_flashduration")] = XorString("Duracao Flash");
	phrases[XorString("esp_skeleton")] = XorString("Esqueleto");
	phrases[XorString("esp_audibleonly")] = XorString("Somente audivel");
	phrases[XorString("esp_spottedonly")] = XorString("Somente Spotado");
	phrases[XorString("esp_headbox")] = XorString("Cabeca");
	phrases[XorString("esp_healthbar")] = XorString("Barra de Vida");
	phrases[XorString("esp_ammo")] = XorString("Municao");
	phrases[XorString("esp_trails")] = XorString("Caminhos");
	phrases[XorString("esp_textculldistance")] = XorString("Distancia dos Textos");

	phrases[XorString("visuals_noweapons")] = XorString("Sem Armas");
	phrases[XorString("visuals_nosmoke")] = XorString("Sem Smoke");
	phrases[XorString("visuals_noblur")] = XorString("Sem Blur");
	phrases[XorString("visuals_noscopeoverlay")] = XorString("Sem Scope Mira");
	phrases[XorString("visuals_nograss")] = XorString("Sem Grama");
	phrases[XorString("visuals_noshadows")] = XorString("Sem Sombras");
	phrases[XorString("visuals_nightmode")] = XorString("Modo noite");
	phrases[XorString("visuals_asuswalls")] = XorString("Asus Walls");
	phrases[XorString("visuals_nobloom")] = XorString("Sem Bloom");
	phrases[XorString("visuals_disablepostprocessing")] = XorString("Desativar Pos-processamento");
	phrases[XorString("visuals_inverseragdoll")] = XorString("Gravidade Ragdool Invertida");
	phrases[XorString("visuals_nofog")] = XorString("Sem Fog");
	phrases[XorString("visuals_no3dsky")] = XorString("Sem Ceu 3D");
	phrases[XorString("visuals_noaimpunch")] = XorString("Sem Impacto de Mira");
	phrases[XorString("visuals_noviewpunch")] = XorString("Sem Impacto de Arma");
	phrases[XorString("visuals_nohands")] = XorString("Sem maos");
	phrases[XorString("visuals_nosleeves")] = XorString("Sem luvas");
	phrases[XorString("visuals_wireframesmoke")] = XorString("Smoke Wireframe");
	phrases[XorString("visuals_worldcolor")] = XorString("Cor Mundo");
	phrases[XorString("visuals_skycolor")] = XorString("Cor Ceu");
	phrases[XorString("visuals_deaglespinner")] = XorString("Deagle Spinner");
	phrases[XorString("visuals_bullettracers")] = XorString("Tracos de bala");
	phrases[XorString("visuals_zoom")] = XorString("Zoom");
	phrases[XorString("visuals_t_model")] = XorString("Skin TR");
	phrases[XorString("visuals_ct_model")] = XorString("Skin CT");
	phrases[XorString("visuals_thirdperson")] = XorString("Terceira Pessoa");
	phrases[XorString("visuals_thirdperson_distance")] = XorString("Distancia Terceira Pessoa: %d");
	phrases[XorString("visuals_viewmodelfov")] = XorString("FOV Viewmodel: %d");
	phrases[XorString("visuals_fov")] = XorString("FOV: %d");
	phrases[XorString("visuals_farz")] = XorString("Far Z: %d");
	phrases[XorString("visuals_flashreduction")] = XorString("Reducao Flash: %d%%");
	phrases[XorString("visuals_brightness")] = XorString("Brilho: %.2f");
	phrases[XorString("visuals_skybox")] = XorString("Skybox");
	phrases[XorString("visuals_screeneffect")] = XorString("Efeito Tela");
	phrases[XorString("visuals_hiteffect")] = XorString("Efeito Hit");
	phrases[XorString("visuals_hiteffect_time")] = XorString("Tempo Efeito Tela");
	phrases[XorString("visuals_hitmarker")] = XorString("Som de Hit");
	phrases[XorString("visuals_hitmarker_time")] = XorString("Tempo do Som de Hit");
	phrases[XorString("visuals_indicators")] = XorString("Indicadores");
	phrases[XorString("visuals_rainbowcrosshair")] = XorString("Mira RGB");
	phrases[XorString("visuals_noscopecrosshair")] = XorString("Forcar Mira");
	phrases[XorString("visuals_recoilcrosshair")] = XorString("Mira de Recuo");
	phrases[XorString("visuals_watermark")] = XorString("Marca d'agua");
	phrases[XorString("visuals_colorcorrection")] = XorString("Correcao Cor");
	phrases[XorString("visuals_ragdollforce")] = XorString("Forca de Ragdoll");
	phrases[XorString("visuals_ragdollforce_strenght")] = XorString("Nivel de Forca do Ragdoll");
	phrases[XorString("skinchanger_paintkit")] = XorString("Skin");
	phrases[XorString("skinchanger_quality")] = XorString("Qualidade");
	phrases[XorString("skinchanger_seed")] = XorString("Seed");
	phrases[XorString("skinchanger_stattrak")] = XorString("StatTrak\u2122");
	phrases[XorString("skinchanger_wear")] = XorString("Desgaste");
	phrases[XorString("skinchanger_knife")] = XorString("Faca");
	phrases[XorString("skinchanger_glove")] = XorString("Luva");
	phrases[XorString("skinchanger_nametag")] = XorString("Nome");
	phrases[XorString("skinchanger_sticker")] = XorString("Sticker");
	phrases[XorString("skinchanger_scale")] = XorString("Tamanho");
	phrases[XorString("skinchanger_rotation")] = XorString("Rotacao");

	phrases[XorString("misc_menukey")] = XorString("Tela Menu");
	phrases[XorString("misc_radarhack")] = XorString("Hack Radar");
	phrases[XorString("misc_spectatorlist")] = XorString("Lista de Specs");
	phrases[XorString("misc_revealranks")] = XorString("Mostrar Ranks");
	phrases[XorString("misc_revealmoney")] = XorString("Mostrar Dinheiro");
	phrases[XorString("misc_revealsuspect")] = XorString("Mostrar Suspeito");
	phrases[XorString("misc_fixmovement")] = XorString("Corrigir Movimento");
	phrases[XorString("misc_disablemodelocclusion")] = XorString("Desativar Oclusao Modelos");
	phrases[XorString("misc_antiafkkick")] = XorString("Anti AFK Kick");
	phrases[XorString("misc_autostrafe")] = XorString("Auto Strafe");
	phrases[XorString("misc_bunnyhop")] = XorString("Bunny Hop");
	phrases[XorString("misc_fastduck")] = XorString("Fast Duck");
	phrases[XorString("misc_slowwalk")] = XorString("Slowwalk");
	phrases[XorString("misc_autopistol")] = XorString("Auto Pistol");
	phrases[XorString("misc_autoreload")] = XorString("Auto Recarregar");
	phrases[XorString("misc_autoaccept")] = XorString("Auto Aceitar");
	phrases[XorString("misc_disablehudblur")] = XorString("Desativar Blur HUD");
	phrases[XorString("misc_fastplant")] = XorString("Fast Plant");
	phrases[XorString("misc_faststop")] = XorString("Fast Stop");
	phrases[XorString("misc_bombtimer")] = XorString("Tempo de C4");
	phrases[XorString("misc_quickreload")] = XorString("Quick Reload");
	phrases[XorString("misc_quickreload")] = XorString("Prepare Revolver");
	phrases[XorString("misc_animatedclantag")] = XorString("Tag Clan Animada");
	phrases[XorString("misc_clocktag")] = XorString("Tag Rel�gio");
	phrases[XorString("misc_customclantag")] = XorString("Clan Customizado");
	phrases[XorString("misc_killmessage")] = XorString("Mensagem de Kill");
	phrases[XorString("misc_nameexploit")] = XorString("Name Exploit");
	phrases[XorString("misc_setupfakeban")] = XorString("Aplicar");
	phrases[XorString("misc_fakeitemflags")] = XorString("Caracteristicas");
	phrases[XorString("misc_messagetype")] = XorString("Tipo de Mensagem");
	phrases[XorString("misc_itemtype")] = XorString("Tipo do Item");
	phrases[XorString("misc_itemrarity")] = XorString("Raridade do Item");
	phrases[XorString("misc_playercolor")] = XorString("Cor do Player");
	phrases[XorString("misc_playername")] = XorString("Nick do Player");
	phrases[XorString("misc_skinname")] = XorString("Nome Skin");
	phrases[XorString("misc_changename")] = XorString("Mudar nome");
	phrases[XorString("misc_namestealer")] = XorString("Roubar Nicks");
	phrases[XorString("misc_customname")] = XorString("Tipo da Mensagem");
	phrases[XorString("misc_hitsound")] = XorString("Som de Hit");
	phrases[XorString("misc_hitsound_filename")] = XorString("Nome do arquivo de Hit");
	phrases[XorString("misc_killsound")] = XorString("Kill Sound");
	phrases[XorString("misc_killsound_filename")] = XorString("Nome do arquivo de Kill");
	phrases[XorString("misc_fakelag")] = XorString("Fake Lag");
	phrases[XorString("misc_killsound")] = XorString("Som de Kill");
	phrases[XorString("misc_min_fakelag_amount")] = XorString("Quantia Min. Fakelag");
	phrases[XorString("misc_fakelag_amount")] = XorString("Quantia Fakelag");
	phrases[XorString("misc_grenadeprediction")] = XorString("Trajetoria da Granada");
	phrases[XorString("misc_maxangledelta")] = XorString("Velocidade Max. Aimbot");
	phrases[XorString("misc_aspectratio")] = XorString("Aspect Ratio");
	phrases[XorString("misc_fakeprime")] = XorString("Fake Prime");
	phrases[XorString("misc_fakeduck")] = XorString("Fake Duck");
	phrases[XorString("misc_doorspam")] = XorString("Door Spam");
	phrases[XorString("misc_preservekillfeed")] = XorString("Travar Killfeed");
	phrases[XorString("misc_onlyheadshots")] = XorString("S� headshots");
	phrases[XorString("misc_purchaselist")] = XorString("Lista de Compras");
	phrases[XorString("misc_onlyduringfreezetime")] = XorString("Somente no Freezetime");
	phrases[XorString("misc_showprices")] = XorString("Mostrar Precos");
	phrases[XorString("misc_shotscount")] = XorString("Indicadores de Tiro");
	phrases[XorString("misc_statusbar")] = XorString("Barra de Status");
	phrases[XorString("misc_showviewangles")] = XorString("ShowViewAngles");
	phrases[XorString("misc_showplayerstatus")] = XorString("ShowPlayerStatus");
	phrases[XorString("misc_showgameglobalvars")] = XorString("ShowGameGlobalVars");
	phrases[XorString("misc_reportbot")] = XorString("Reportbot");
	phrases[XorString("misc_reportbot_target")] = XorString("Alvo");
	phrases[XorString("misc_reportbot_delay")] = XorString("Delay (s)");
	phrases[XorString("misc_reportbot_rounds")] = XorString("Rounds");
	phrases[XorString("misc_reportbot_abusivecomms")] = XorString("Comunicacao Abusiva");
	phrases[XorString("misc_reportbot_griefing")] = XorString("Antijogo");
	phrases[XorString("misc_reportbot_wallhacking")] = XorString("Wall Hacking");
	phrases[XorString("misc_reportbot_aimhacking")] = XorString("Aim Hacking");
	phrases[XorString("misc_reportbot_otherhacking")] = XorString("Outros Cheats");
	phrases[XorString("misc_reportbot_reset")] = XorString("Resetar");
	phrases[XorString("misc_cheatspam")] = XorString("Divulgar Cheat");

	phrases[XorString("config_reload")] = XorString("Recarregar Configs");
	phrases[XorString("config_placeholder_configname")] = XorString("Nome da Config");
	phrases[XorString("config_create")] = XorString("Criar Config");
	phrases[XorString("config_reset")] = XorString("Resetar Config");
	phrases[XorString("config_toreset")] = XorString("Config para resetar");
	phrases[XorString("config_load")] = XorString("Carregar");
	phrases[XorString("config_save")] = XorString("Salvar");
	phrases[XorString("config_delete")] = XorString("Deletar");

	phrases[XorString("ezconfig_legitaimbot")] = XorString("Um aimbot quase imperceptivel");
	phrases[XorString("ezconfig_simplewall")] = XorString("Um contorno basico atraves das paredes");
	phrases[XorString("ezconfig_fullwall")] = XorString("Wallhack completo com auxiliares");
	phrases[XorString("ezconfig_utilities")] = XorString("Alguns utilit�rios, como ver patentes, dinheiro e algumas outras op��es interessantes");
	phrases[XorString("ezconfig_bunnyhop")] = XorString("Ativa o Auto Bunny Hopping (segure espa�o)");
	phrases[XorString("ezconfig_reset")] = XorString("Redefine todas as configura��es de cheat");

	}
}