#include "DimensionScreenProvider.hpp"
#include <amethyst/runtime/AmethystContext.hpp>
#include <amethyst/runtime/ModContext.hpp>

std::vector<std::string> DimensionScreenProvider::obtainData()
{
    return {
        fmt::format("Dimension Name: {}", this->mDimensionNameProvider.obtainData()),
        fmt::format("Dimension ID: {}", this->mDimensionIdProvider.obtainData()),
    };
}