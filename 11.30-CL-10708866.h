#include <stdint.h>
#include <array>
namespace SDK {
    class UNetDriver;
    class UObject;
    class UClass;
    class UField;
    class FField;
    class UEngine;
    class FName;
    struct FURL;
    class UReplicationDriver;
    class UWorld;
    class AOnlineBeaconHost;
};
namespace UC {
    class FString;
}
class FFrame;

namespace Fortnite {
    inline auto ImageBase = *(uint64_t*)(__readgsqword(0x60) + 0x10);
    namespace Offsets {
        inline uint64_t Step = 0x283aa80;
        inline uint64_t StepExplicitProperty = 0x283aab0;
        inline uint64_t CreateNetDriver = 0x3b12c90;
        inline uint64_t InitListen = 0x8ec5e0;
        inline uint64_t SetWorld = 0x38740e0;
        inline uint64_t GetNetMode = 0x3b68040;
        inline uint64_t TickFlush = 0x3874e60;
        inline uint64_t ServerReplicateActors = 0xc78c10;
        inline uint64_t GetMaxTickRate = 0x3b15580;
        inline uint64_t DispatchRequest = 0xe27ba0;
        inline uint64_t Realloc = 0x25b77a0;
        inline uint64_t StaticFindObject = 0x2838fd0;
        inline uint64_t StaticLoadObject = 0x283a3b0;
        inline uint64_t GIsClient = 0x6f1b2b0;
        inline uint64_t GameSessionPatch = 0x158ab25;
        inline uint64_t EncryptionPatch = 0x3b6a96f;
        inline std::array<uint64_t, 4> NullFuncs = { 0x32dbc70, 0x19a7510, 0x3720d10 };
        inline std::array<uint64_t, 0> RetTrueFuncs = {  };
    };

    namespace Vfts {
    };

    namespace Funcs {
        inline auto Step = (void (*)(FFrame*, SDK::UObject*, void* const)) (ImageBase + Offsets::Step);
        inline auto StepExplicitProperty = (void (*)(FFrame*, void* const, SDK::UField*)) (ImageBase + Offsets::StepExplicitProperty);
        inline auto CreateNetDriver = (SDK::UNetDriver* (*)(SDK::UEngine*, SDK::UWorld*, SDK::FName)) (ImageBase + Offsets::CreateNetDriver);
        inline auto InitListen = (bool (*)(SDK::UNetDriver*, SDK::UWorld*, SDK::FURL&, bool, UC::FString&)) (ImageBase + Offsets::InitListen);
        inline auto SetWorld = (void (*)(SDK::UNetDriver*, SDK::UWorld*)) (ImageBase + Offsets::SetWorld);
        inline auto ServerReplicateActors = (void (*)(SDK::UReplicationDriver*, float)) (ImageBase + Offsets::ServerReplicateActors);
        inline auto Realloc = (void* (*)(void*, __int64, unsigned int)) (ImageBase + Offsets::Realloc);
        inline auto StaticFindObject = (SDK::UObject* (*)(SDK::UClass*, SDK::UObject*, const wchar_t*, bool)) (ImageBase + Offsets::StaticFindObject);
        inline auto StaticLoadObject = (SDK::UObject* (*)(SDK::UClass*, SDK::UObject*, const wchar_t*, const wchar_t*, uint32_t, SDK::UObject*, bool)) (ImageBase + Offsets::StaticLoadObject);
    };
};
using namespace Fortnite;
using namespace Fortnite::Offsets;
using namespace Fortnite::Vfts;
using namespace Fortnite::Funcs;
