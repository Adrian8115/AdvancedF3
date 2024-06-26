//
// Created by adria on 15/02/2024.
//
#pragma once
#include <Windows.h>
#include <amethyst/runtime/events/EventManager.hpp>
#include <amethyst/runtime/HookManager.hpp>
#include <amethyst/runtime/input/InputManager.hpp>
#include <minecraft/src-client/common/client/renderer/helpers/MeshHelpers.hpp>

void SimpleLineRenderer(MinecraftUIRenderContext* ctx, Vec2 point_1, Vec2 point_2);
void VectorLineRenderer(MinecraftUIRenderContext* ctx, const std::vector<Vec2>& points);