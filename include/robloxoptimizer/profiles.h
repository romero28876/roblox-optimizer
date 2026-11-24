// profiles — part of roblox-optimizer.

#pragma once

#include <string>
#include <vector>

namespace robloxoptimizer {

class Profiles {
public:
    explicit Profiles(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robloxoptimizer
