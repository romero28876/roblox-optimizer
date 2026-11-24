// profiles.cpp — part of roblox-optimizer.

#include "robloxoptimizer/profiles.h"

#include <cstdio>

namespace robloxoptimizer {

Profiles::Profiles(const std::string& config_path)
    : config_path_(config_path) {}

void Profiles::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Profiles::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-optimizer] profiles: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxoptimizer
