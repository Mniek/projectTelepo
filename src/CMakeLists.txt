set(newtry_SRCS
    newtry.cpp
)

ecm_qt_declare_logging_category(newtry_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_NEWTRY
    CATEGORY_NAME "kdevelop.plugin.newtry"
)

kdevplatform_add_plugin(newtry
    JSON newtry.json
    SOURCES ${newtry_SRCS}
)

target_link_libraries(newtry
    KDev::Interfaces
)
