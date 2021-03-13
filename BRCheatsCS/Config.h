#pragma once

#include <array>
#include <filesystem>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include <set>
#include <map>
#include "imgui/imgui.h"
#include "Hacks/SkinChanger.h"
#include "ConfigStructs.h"
#include "SDK/Vector.h"

//using namespace std;

struct skinInfo
{
    std::string name;
    std::string cdnName;
    std::vector<std::string> weaponName;
    int rarity;
};


struct skins_s
{
    struct sides
    {
        bool enabled = false;
        int definitionIndex = 0;
        int paintKit = 0;
        int seed = 0;
        int stattrak = -1;
        int quality = 4;
        float wear = FLT_MIN;
    };

    sides t;
    sides ct;
};

struct weaponsInv
{
    skins_s skins;
};




class Config {
public:
    explicit Config(const char*) noexcept;
    void load(size_t, bool incremental) noexcept;
    void save(size_t) const noexcept;
    void add(const char*) noexcept;
    void remove(size_t) noexcept;
    void rename(size_t, const char*) noexcept;
    void reset() noexcept;
    void listConfigs() noexcept;
	struct Record {
        Vector origin;
        float simulationTime;
        matrix3x4 matrix[256];
    };

    constexpr auto& getConfigs() noexcept
    {
        return configs;
    }

    struct Color {
        std::array<float, 3> color{ 1.0f, 1.0f, 1.0f };
        bool rainbow{ false };
        float rainbowSpeed{ 0.6f };
    };

    struct ColorToggle : public Color {
        bool enabled{ false };
    };

    struct Aimbot {
        bool enabled{ false };
        bool onKey{ false };
        int key{ 0 };
        int keyMode{ 0 };
        bool aimlock{ false };
        bool silent{ false };
        bool friendlyFire{ false };
        bool visibleOnly{ true };
        bool scopedOnly{ true };
        bool ignoreFlash{ false };
        bool ignoreSmoke{ false };
        bool autoShot{ false };
        bool autoScope{ false };
        float fov{ 0.0f };
        bool drawFov{ false };
        float smooth{ 1.0f };
        int bone{ 0 };
        float recoilControlX{ 0.0f };
        float recoilControlY{ 0.0f };
        float maxAimInaccuracy{ 1.0f };
        float maxShotInaccuracy{ 1.0f };
    	 int hitchance{ 0 };
        int minDamage{ 1 };
        int shotsFired{ 0 };
        bool killshot{ false };
        bool betweenShots{ true };
        bool standaloneRCS{ false };
        bool onKeyRCS{ false };
        int RCSkeyMode{ 0 };
        int RCSkey{ 0 };
    };
    std::array<Aimbot, 40> aimbot;


    bool QuickPeekHasShot {false}; // dynamic, do not persist

    struct Dt
    {
	   bool enabled {false};
    	int mode {0};
    } dt;


	struct Ragebot {
		bool dtEnabled {false};
		int dtMode {0};
		bool enabled{ false };
		bool onKey{ false };
		int key{ 0 };
		int keyMode{ 0 };
		bool slient{ false };
        bool autoScope{ false };
		bool betweenShots{ false };
		bool friendlyFire{ false };
		bool autoStop{ false };
        bool autoShot{ false };
		float bodyChance{ 0.0f };
		float pointChance{ 0.0f };
		float CanSeeDamage{ 0.0f };
        float WallDamage{ 0.0f };
		float hitChance{ 0.0f };
        float targetSelectionMode{ 0 };
		bool Baim{ false };
		bool QuickPeekEnabled { false };
		int QuickPeekKey { 0 };
		bool keyForceShotEnabled { false };
		int keyForceShot { 0 };
		bool BonesBools[8] {
			false,
			false,
			false,
			false,
			false,
			false,
			false,
			false
		};
	};
	std::array<Ragebot, 45> ragebot;

    struct {
        bool enabled{ false };
        bool doubletap{ false };
        int doubletapSpeed{ 0 };
        int doubleTapKey{ 0 };
        bool doubleTapToggled{ false };
        int doubleTapKeyMode{ 0 };
    } ragebotExtra;

	const char* BonesTexts[8] =
	{
			"Head",
			"Neck",
			"UpperChest",
			"Body",
			"Pelvis",
			"Hands",
			"Legs",
			"FeetS"
	};

        struct debug {
        ColorToggle desync_info;
        ColorToggle animStateMon;
        ColorToggle box;
        //out
        bool AnimExtras{ false };
        int overlay{ 13 };
        int entityid{ 0 };
        bool overlayall{ false };
        bool weight{ false };
        bool showall{ false };



        //in
        struct {
            bool enabled{ false };
            ColorToggle color;
            int entityid{ 0 };
            bool newesttick{ false };
            bool findactive{ false };
        } backtrack;

        struct {

            bool enabled{ false };
            struct {
                bool enabled{ false };
                bool basicResolver{ false };
                bool overRide{ false };
                int missed_shots{ 0 };
            	int missedoffset{ 0 };
                bool goforkill{ false };
            }resolver;

            bool manual{ false };
        } animstatedebug;

        struct {
            bool enabled;
            bool baim;
            bool resolver;
        } indicators;

        bool AnimModifier{ false };
        float GoalFeetYaw{ 0.0f };
        float Pitch{ 0.0f };
        float Yaw{ 0.0f };
        bool FPSBar{ false };
        int ResolverRecords {0};
        bool TargetOnly {false};
    } debug;

    struct Triggerbot {
        bool enabled = false;
        bool friendlyFire = false;
        bool scopedOnly = true;
        bool ignoreFlash = false;
        bool ignoreSmoke = false;
        bool killshot = false;
        bool onKey = false;
        int key = 0;
        int hitgroup = 0;
        int shotDelay = 0;
        int minDamage = 1;
        float burstTime = 0.0f;
    };
    std::array<Triggerbot, 40> triggerbot;

    struct Backtrack {
        bool enabled{ false };
        bool ignoreSmoke{ false };
        bool recoilBasedFov{ false };
		int timeLimit{ 0 };
        bool fakeLatency{ false };
    	bool onKey {false};
    	int fakeLatencyKey {0};
    } backtrack;

    struct AntiAim {
        float pitchAngle{ 0.0f };
    	 struct {
            bool enabled{ false };
            int yawInverseAngleKey{ 0 };
            int yawInverseKeyMode{ 0 };
            bool yawInversed{ false };
            struct {
                bool enabled{ false };
                int key{ 0 };
                int keyMode{ 0 };
                bool keyToggled{ false };
                int maxChoke{ 3 };
            } fakeWalk;
        } general;

        struct {
            bool enabled{ false };
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
                struct {
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                } fake;
                struct {
                    bool enabled{ false };
                    float bodyLean{ 0.0f };
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                    struct {
                        bool enabled{ false };
                        float angle{ 0.0f };
                    } LBYBreaker;
                } desync;
            } yaw;
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
            } pitch;
        } standing;

        struct {
            bool enabled{ false };
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
                struct {
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                } fake;
                struct {
                    bool enabled{ false };
                    float bodyLean{ 0.0f };
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                    struct {
                        bool enabled{ false };
                        float angle{ 0.0f };
                    } LBYBreaker;
                } desync;
            } yaw;
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
            } pitch;
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
            } LBYBreaker;
        } moving;

        struct {
            bool enabled{ false };
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
                struct {
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                } fake;
                struct {
                    bool enabled{ false };
                    float bodyLean{ 0.0f };
                    int mode{ 0 };
                    float step{ 0.0f };
                    float jitterMax{ 0.0f };
                    float jitterMin{ 0.0f };
                    struct {
                        bool enabled{ false };
                        float angle{ 0.0f };
                    } LBYBreaker;
                } desync;
            } yaw;
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
            } pitch;
            struct {
                bool enabled{ false };
                float angle{ 0.0f };
            } LBYBreaker;
        } inAir;
    } antiAim;

    struct Glow : ColorA {
        bool enabled{ false };
        bool healthBased{ false };
        int style{ 0 };
    };
    std::array<Glow, 21> glow;

    struct Chams {
        struct Material : ColorA {
            bool enabled = false;
            bool healthBased = false;
            bool blinking = false;
            bool wireframe = false;
            bool cover = false;
            bool ignorez = false;
            int material = 0;
        };
        std::array<Material, 7> materials;
    };

    std::unordered_map<std::string, Chams> chams;

    struct StreamProofESP {
        std::unordered_map<std::string, Player> allies;
        std::unordered_map<std::string, Player> enemies;
        std::unordered_map<std::string, Weapon> weapons;
        std::unordered_map<std::string, Projectile> projectiles;
        std::unordered_map<std::string, Shared> lootCrates;
        std::unordered_map<std::string, Shared> otherEntities;
    } streamProofESP;

    struct Font {
        ImFont* tiny;
        ImFont* medium;
        ImFont* big;
    };

    struct Visuals {
        bool disablePostProcessing{ false };
        bool inverseRagdollGravity{ false };
        bool noFog{ false };
        bool no3dSky{ false };
        bool noAimPunch{ false };
        bool noViewPunch{ false };
        bool noHands{ false };
        bool noSleeves{ false };
        bool noWeapons{ false };
        bool noSmoke{ false };
        bool noBlur{ false };
        bool noBloom{ false };
        bool noScopeOverlay{ false };
        bool noGrass{ false };
        bool noShadows{ false };
        bool wireframeSmoke{ false };
        bool zoom{ false };
        int zoomKey{ 0 };
        bool thirdperson{ false };
        int thirdpersonKey{ 0 };
        int thirdpersonDistance{ 0 };
        int viewmodelFov{ 0 };
        int fov{ 0 };
        int farZ{ 0 };
        int flashReduction{ 0 };
        float brightness{ 0.0f };
        int skybox{ 0 };
        ColorToggle world;
        ColorToggle sky;
        bool deagleSpinner{ false };
        int hitMarker{ 0 };
        float hitMarkerTime{ 0.6f };
        int playerModelT{ 0 };
        int playerModelCT{ 0 };
        bool nightMode{ false };
    	bool asusWalls {false};
        bool rainbowCrosshair{ false };
        float rainbowCrosshairSpeed{ 1.0f };

        struct ColorCorrection {
            bool enabled = false;
            float blue = 0.0f;
            float red = 0.0f;
            float mono = 0.0f;
            float saturation = 0.0f;
            float ghost = 0.0f;
            float green = 0.0f;
            float yellow = 0.0f;
        } colorCorrection;


          bool indicatorsEnabled{ false };
        const char* indicators[6] = {
            "Desync",
            "LBY",
            "Fakelag",
            "Fakeduck",
            "Doubletap",
            "Resolver"
        };

        bool selectedIndicators[6] = {
            false,
            false,
            false,
            false,
            false,
        	false
        };

    	 ColorToggle bulletTracers;

    } visuals;

    std::array<item_setting, 36> skinChanger;

    struct Sound {
        int chickenVolume{ 100 };

        struct Player {
            int masterVolume{ 100 };
            int headshotVolume{ 100 };
            int weaponVolume{ 100 };
            int footstepVolume{ 100 };
        };

        std::array<Player, 3> players;
    } sound;


    struct profileChanger {
        bool enabled{ 0 };
        int friendly = 0;
        int teach = 0;
        int leader = 0;
        int rank = 0;
        int wins = 0;
        int level = 0;
        int exp = 0;
        int ban_type = 0;
        int ban_time = 0;
    } profileChanger;

    struct Style {
        int menuStyle{ 1 };
        int menuColors{ 0 };
    } style;

    struct Misc {
        int lang{ 0 };
        int menuKey{ 0x2D }; // VK_INSERT
        bool antiAfkKick{ false };
        bool autoStrafe{ false };
        bool bunnyHop{ false };
        bool customClanTag{ false };
        bool clocktag{ false };
        char clanTag[16];
        char cheatName[16] = "BRCheats";
        bool animatedClanTag{ false };
        bool fastDuck{ false };
        bool moonwalk{ false };
        bool edgejump{ false };
        int edgejumpkey{ 0 };
        bool slowwalk{ false };
        int slowwalkKey{ 0 };
        ColorToggleThickness noscopeCrosshair;
        ColorToggleThickness recoilCrosshair;
        bool doorSpam{ false };
        bool autoPistol{ false };
        bool autoReload{ false };
        bool autoAccept{ false };
        bool radarHack{ false };
        bool revealRanks{ false };
        bool revealMoney{ false };
        bool revealSuspect{ false };
        
        struct SpectatorList {
            bool enabled = false;
            bool noTitleBar = false;
            ImVec2 pos;
            ImVec2 size{ 200.0f, 200.0f };
        };

        SpectatorList spectatorList;

        ColorToggle watermark;
        bool fixAnimationLOD{ false };
        bool fixBoneMatrix{ false };
        bool fixMovement{ false };
        bool disableModelOcclusion{ false };
        bool cheatSpam{ false };
        bool nameStealer{ false };
        bool disablePanoramablur{ false };
        bool killMessage{ false };
        bool nadePredict{ false };
        bool fixTabletSignal{ false };
        bool fakePrime{ false };
        bool bombDamage{ false };
        int nameChangeSelection{ 0 };
        std::string customName;
        std::string banText{ "Cheater banned from CS:GO." };
        const char* fakeItemFlags[4] = {
            "Auto Disconnect",
            "Crash My Game",
            "StatTrak",
            "Star"
        };
        bool selectedFakeItemFlags[4] = {
            false,
            false,          
            false,
            false
        };
        int fakeItemPlayerColor{ 0 };
        int fakeItemMessageType{ 0 };
        int fakeItemType{ 0 };
        int fakeItemRarity{ 0 };
        int fakeItemTeam{ 0 };
        std::string fakeItemName{ "" };
        std::string fakeItemPlayerName{ "" };
        bool fastPlant{ false };
        bool fastStop{ false };
        bool quickReload{ false };
        bool prepareRevolver{ false };
        bool oppositeHandKnife = false;
        PreserveKillfeed preserveKillfeed;
        float aspectratio{ 0 };
        std::string killMessageString{ "brcheats.net" };
        int banColor{ 6 };
        ColorToggle bombTimer{ 1.0f, 0.55f, 0.0f };
        int prepareRevolverKey{ 0 };
        int hitSound{ 0 };
         int fakeLagMode{ 0 };
        int fakeLagTicks{ 0 };
        int fakeLagKey{ 0 };
        const char* fakeLagFlags[4] = {
            "While Shooting",
            "While Standing",
            "While Moving",
            "In Air"
        };
        bool fakeLagSelectedFlags[4] = {
            false,
            false,
            false,
            false
        };
        int quickHealthshotKey{ 0 };
        float maxAngleDelta{ 255.0f };
    	 bool fakeDuck{ false };
        int fakeDuckKey{ 0 };
        bool fakeDucking{ false };
        int fakeDuckShotState{ 0 };
        int killSound{ 0 };
        std::string customKillSound;
        std::string customHitSound;
        PurchaseList purchaseList;
            StatusBar Sbar;
    	      ImGuiStruct ShotsCout;
        bool ragdollForce{ false };
        int ragdollForceStrength{ 1 };

        struct Reportbot {
            bool enabled = false;
            bool textAbuse = false;
            bool griefing = false;
            bool wallhack = true;
            bool aimbot = true;
            bool other = true;
            int target = 0;
            int delay = 1;
            int rounds = 1;
        } reportbot;
   } misc;


   struct medalChanger {
       bool enabled = false;
       int medals = 0;
       bool equipped_medal_override = false;
       uint32_t equipped_medal = 0;
   } medalChanger;
   

   std::map<short, weaponsInv> weaponsInv;
   struct
   {
       std::unordered_map<int, skinInfo> skinInfo;
       int itemCount = 0;
       bool enabled = false;
   } inventory;

	 struct globals{
        bool thirdPersonAnglesSet{ false };
        Vector fakeAngle;
        Vector realAngle;
        Vector cmdAngle;
        Record serverPos;
        float serverTime{ 0.f };
        int tickRate{ 0 };
        float nextLBY{ 0.f };
        float lastLBY{ 0.f };
        int chokedPackets{ 0 };
        float currentFOV{ 0.0f };
        bool sendPacket{ false };
	    Vector lastTickMovements;
        char UsernameBRC;
    } globals;

    struct{
        Vector viewangles;
    }globalvars;

    void scheduleFontLoad(const std::string& name) noexcept;
    bool loadScheduledFonts() noexcept;
    const auto& getSystemFonts() noexcept { return systemFonts; }
    const auto& getFonts() noexcept { return fonts; }
private:
    std::vector<std::string> scheduledFonts{ "Default" };
    std::vector<std::string> systemFonts{ "Default" };
    std::unordered_map<std::string, Font> fonts;
    std::filesystem::path path;
    std::vector<std::string> configs;
};


inline std::unique_ptr<Config> config;
