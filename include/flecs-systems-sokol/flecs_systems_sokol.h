#ifndef FLECS_SYSTEMS_SOKOL_H
#define FLECS_SYSTEMS_SOKOL_H

#include <flecs.h>
#include <flecs-components-graphics/flecs_components_graphics.h>

#ifdef __cplusplus
extern "C" {
#endif

// Query flags
#define EcsQueryIsInstanced (1 << 0)

// Import function
void FlecsSystemsSokolImport(ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#endif 