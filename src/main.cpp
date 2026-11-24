// main.cpp — entry point. Wires config and subsystems together.

#include "robloxoptimizer/settings.h"
#include "robloxoptimizer/tweaks.h"
#include "robloxoptimizer/profiles.h"
#include "robloxoptimizer/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robloxoptimizer::Settings settings = robloxoptimizer::Settings::load_default();
    robloxoptimizer::Tweaks tweaks(settings.store_path);
    robloxoptimizer::Profiles profiles(settings.store_path);
    robloxoptimizer::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[roblox-optimizer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
