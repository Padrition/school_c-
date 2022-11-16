include(FetchContent)

FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG v3.0.0
)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

cmake_minimum_required(VERSION 3.24)

project( zoohra
  LANGUAGES CXX
  VERSION 1.0.0
)

add_executable(zoohra main.cpp)

target_include_directories(zoohra
  PRIVATE Player
  PRIVATE EventHnadler
)

target_link_libraries(zoohra
  ftxui::screen
  ftxui::dom
  ftxui::component
)