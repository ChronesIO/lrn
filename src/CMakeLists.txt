file(GLOB_RECURSE lrn-impl CONFIGURE_DEPENDS "*.cxx")
target_sources(lrn PUBLIC ${lrn-impl})