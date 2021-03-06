#include <chrono>
#include <memory>

#include "gmock/gmock.h"

#include "nighthawk/test/mocks.h"

using namespace std::chrono_literals;

namespace Nighthawk {

MockPlatformUtil::MockPlatformUtil() {}

MockPlatformUtil::~MockPlatformUtil() = default;

MockRateLimiter::MockRateLimiter() = default;

MockRateLimiter::~MockRateLimiter() = default;

FakeSequencerTarget::FakeSequencerTarget() = default;

FakeSequencerTarget::~FakeSequencerTarget() = default;

MockSequencerTarget::MockSequencerTarget() = default;

MockSequencerTarget::~MockSequencerTarget() = default;

} // namespace Nighthawk