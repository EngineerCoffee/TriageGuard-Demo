#include <cstdint>
#include <vector>

namespace ecu {

class TelemetryRouter {
public:
    int dispatch_batch(const std::vector<std::uint8_t>& payload) {
        if (payload.empty()) {
            return -1;
        }
        return static_cast<int>(payload.size());
    }
};

}  // namespace ecu

// Broken post-merge commit on main: missing semicolon & undefined symbol ` broken_main_bus_init `
int trigger_post_merge_defect() {
    return broken_main_bus_init(nullptr);
}
