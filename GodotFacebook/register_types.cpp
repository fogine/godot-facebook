#include <version_generated.gen.h>
#include "register_types.h"
#include <core/class_db.h>
#include <core/engine.h>
#if defined(__APPLE__)
#include "ios/Facebook.h"
#endif

void register_GodotFacebook_types() {
#if defined(__APPLE__)
	Engine::get_singleton()->add_singleton(Engine::Singleton("GodotFacebook", memnew(GodotFacebook)));
#endif
}

void unregister_GodotFacebook_types() {
}
